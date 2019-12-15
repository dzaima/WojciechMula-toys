#!/usr/bin/env python3

from os.path import join
from procedures import PROCEDURES
from table import Table

GITHUB_LINK = 'https://github.com/WojciechMula/toys/blob/master/autovectorization-tests/%s'

COMPILERS = {
    'GCC' : {
                'avx2'   : 'gcc9-avx2.txt',
                'avx512' : 'gcc9-avx512.txt',
    },
    'Clang' : {
                'avx2'   : 'clang9-avx2.txt',
                'avx512' : 'clang9-avx512.txt',
    },
    'ICC' : {
                'avx2'   : 'icc19-avx2.txt',
                'avx512' : 'icc19-avx512.txt',
    },
    'MSVC' : {
                'avx2'   : 'msvc19-avx2.txt',
                'avx512' : 'msvc19-avx512.txt',
    },
}

COMPILERS_ORDER = ['GCC', 'Clang', 'ICC', 'MSVC']


def load_results(file):
    compiler  = None
    cmdline   = None
    status    = {}
    for line in file:
        line = line.strip()
        if not line:
            continue

        key, value = line.split(':', 1)

        key   = key.strip()
        value = value.strip()

        if key == 'compiler':
            compiler = value
        elif key == 'cmdline':
            cmdline = value
        else:
            assert key not in status
            status[key] = value

    return (compiler, cmdline, status)


def load_all_results(rootdir):
    for compiler_name in COMPILERS_ORDER:
        compiler = COMPILERS[compiler_name]
        for arch_name in compiler:
            filename = compiler[arch_name]
            path = join(rootdir, filename)
            with open(path, 'rt') as f:
                data = load_results(f)
                compiler[arch_name] = data


class Formatter(object):
    def __init__(self):
        load_all_results('results')
        self.footnotes = {}
        self.links = []


    def run(self):
        table = Table()

        header_row1 = ["algorithm", "procedure"]
        header_row2 = ["", ""]
        for compiler_name in COMPILERS_ORDER:
            header_row1.append((compiler_name, 2))
            header_row2.append("AVX2")
            header_row2.append("AVX512")

        table.add_header(header_row1)
        table.add_header(header_row2)

        for source_name in sorted(PROCEDURES):
            item = PROCEDURES[source_name]
            for index, procedure_name in enumerate(item['procedures']):
                row = []
                if index == 0:
                    row.append(self.format_title(source_name, item))
                else:
                    row.append("")

                if index == 0:
                    row.append(self.format_procedure(source_name, procedure_name))
                else:
                    row.append(procedure_name)

                for compiler_name in COMPILERS_ORDER:
                    avx2 = COMPILERS[compiler_name]['avx2'][2]
                    row.append(self.format_status(avx2[procedure_name]))
                    avx512 = COMPILERS[compiler_name]['avx512'][2]
                    row.append(self.format_status(avx512[procedure_name]))

                table.add_row(row)

        self.table = table

        self.print_result()


    def print_result(self):
        print(self.table)

        if len(self.links):
            print
            for link in self.links:
                print(f"__ {link}")

        if len(self.footnotes) > 0:
            tmp = [(fn_idx, text) for text, fn_idx in self.footnotes.items()]
            tmp.sort()

            print
            for fn_idx, text in tmp:
                print(f".. [{fn_idx}] {text}")


    def register_link(self, link):
        self.links.append(link)
        return link


    def format_title(self, source_name, item):
        link = None
        if 'link' in item:
            link = self.register_link(item['link'])

        if item['title'] == '':
            title = source_name
        else:
            title = item['title']
       
        if link is not None:
            return f"`{title}`__"
        else:
            return title


    def format_procedure(self, source_name, procedure_name):
        link = GITHUB_LINK % source_name
        self.register_link(link)
        return f'`{procedure_name}`__'


    def format_status(self, text):
        if text == 'yes':
            return f'**{text}**'
        elif text == 'no':
            return text
        else:
            status, note = text.split(' ', 1)
            status = status.strip()
            note   = note.strip()

            assert status == 'no'
            assert note[0] == '['
            assert note[-1] == ']'

            note = note[1:-1]

            if note not in self.footnotes:
                self.footnotes[note] = len(self.footnotes) + 1

            fn_idx = self.footnotes[note]
            return f'{status} [{fn_idx}]_'

fmt = Formatter()
fmt.run()