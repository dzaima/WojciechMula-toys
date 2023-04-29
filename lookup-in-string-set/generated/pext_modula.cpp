//lookup: name=lookup_modula, dataset=modula
int lookup_modula(std::string_view s) {
    switch (s.size()) {
        case 2: {
            static char lookup[16][2] = {
                {'I', 'F'},
                {'O', 'F'},
                {}, // no match
                {}, // no match
                {'I', 'N'},
                {'D', 'O'},
                {}, // no match
                {'T', 'O'},
                {}, // no match
                {'O', 'R'},
                {}, // no match
                {}, // no match
                {'B', 'Y'},
                {}, // no match
                {}, // no match
                {}, // no match
            };
            static int value[16] = {
                20,
                31,
                -1,
                -1,
                23,
                8,
                -1,
                42,
                -1,
                32,
                -1,
                -1,
                4,
                -1,
                -1,
                -1,
            };
            uint16_t w0 = 0;
            memcpy(&w0, &s[0], 2);
            const uint64_t idx = _pext_u64(w0, 0x1814);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 3: {
            static char lookup[64][3] = {
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'A', 'N', 'D'},
                {'E', 'N', 'D'},
                {}, // no match
                {'M', 'O', 'D'},
                {}, // no match
                {}, // no match
                {'R', 'E', 'F'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'T', 'R', 'Y'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'V', 'A', 'R'},
                {}, // no match
                {}, // no match
                {}, // no match
                {'F', 'O', 'R'},
                {}, // no match
                {}, // no match
                {'S', 'E', 'T'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'N', 'O', 'T'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'D', 'I', 'V'},
            };
            static int value[64] = {
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                0,
                11,
                -1,
                27,
                -1,
                -1,
                37,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                43,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                50,
                -1,
                -1,
                -1,
                18,
                -1,
                -1,
                40,
                -1,
                -1,
                -1,
                -1,
                29,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                7,
            };
            // combine 2 loads
            uint32_t w1;
            uint16_t w2 = 0;
            memcpy(&w2, &s[0], 2);
            w1 = uint32_t(w2);
            const uint8_t w3 = s[2];
            w1 |= (uint32_t(w3) << 16);
            const uint64_t idx = _pext_u64(w1, 0x160904);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 4: {
            static char lookup[32][4] = {
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'T', 'Y', 'P', 'E'},
                {'C', 'A', 'S', 'E'},
                {'E', 'L', 'S', 'E'},
                {}, // no match
                {'W', 'I', 'T', 'H'},
                {}, // no match
                {'L', 'O', 'C', 'K'},
                {'E', 'V', 'A', 'L'},
                {'T', 'H', 'E', 'N'},
                {'F', 'R', 'O', 'M'},
                {}, // no match
                {}, // no match
                {'B', 'I', 'T', 'S'},
                {}, // no match
                {}, // no match
                {}, // no match
                {'E', 'X', 'I', 'T'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
            };
            static int value[32] = {
                -1,
                -1,
                -1,
                -1,
                -1,
                44,
                5,
                9,
                -1,
                52,
                -1,
                25,
                12,
                41,
                19,
                -1,
                -1,
                3,
                -1,
                -1,
                -1,
                15,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
            };
            uint32_t w4 = 0;
            memcpy(&w4, &s[0], 4);
            const uint64_t idx = _pext_u64(w4, 0x1c020800);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 5: {
            static char lookup[16][5] = {
                {'W', 'H', 'I', 'L', 'E'},
                {'V', 'A', 'L', 'U', 'E'},
                {'E', 'L', 'S', 'I', 'F'},
                {}, // no match
                {'U', 'N', 'T', 'I', 'L'},
                {}, // no match
                {'B', 'E', 'G', 'I', 'N'},
                {}, // no match
                {}, // no match
                {'C', 'O', 'N', 'S', 'T'},
                {}, // no match
                {}, // no match
                {'A', 'R', 'R', 'A', 'Y'},
                {}, // no match
                {}, // no match
                {}, // no match
            };
            static int value[16] = {
                51,
                49,
                10,
                -1,
                47,
                -1,
                2,
                -1,
                -1,
                6,
                -1,
                -1,
                1,
                -1,
                -1,
                -1,
            };
            uint16_t w5 = 0;
            memcpy(&w5, &s[3], 2);
            const uint64_t idx = _pext_u64(w5, 0x1a10);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 6: {
            static char lookup[64][6] = {
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'U', 'N', 'S', 'A', 'F', 'E'},
                {'M', 'O', 'D', 'U', 'L', 'E'},
                {'I', 'N', 'L', 'I', 'N', 'E'},
                {}, // no match
                {'R', 'E', 'C', 'O', 'R', 'D'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'R', 'E', 'T', 'U', 'R', 'N'},
                {}, // no match
                {}, // no match
                {'R', 'A', 'I', 'S', 'E', 'S'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {'R', 'E', 'P', 'E', 'A', 'T'},
                {'O', 'B', 'J', 'E', 'C', 'T'},
                {}, // no match
                {}, // no match
                {'E', 'X', 'C', 'E', 'P', 'T'},
                {'I', 'M', 'P', 'O', 'R', 'T'},
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
                {}, // no match
            };
            static int value[64] = {
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                46,
                28,
                24,
                -1,
                36,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                39,
                -1,
                -1,
                34,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                38,
                30,
                -1,
                -1,
                13,
                21,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
            };
            uint16_t w6 = 0;
            memcpy(&w6, &s[4], 2);
            const uint64_t idx = _pext_u64(w6, 0x1c1a);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 7: {
            static char lookup[4][7] = {
                {'M', 'E', 'T', 'H', 'O', 'D', 'S'},
                {'E', 'X', 'P', 'O', 'R', 'T', 'S'},
                {'F', 'I', 'N', 'A', 'L', 'L', 'Y'},
                {}, // no match
            };
            static int value[4] = {
                26,
                16,
                17,
                -1,
            };
            uint16_t w7 = 0;
            memcpy(&w7, &s[5], 2);
            const uint64_t idx = _pext_u64(w7, 0x810);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 8: {
            static char lookup[4][8] = {
                {'U', 'N', 'T', 'R', 'A', 'C', 'E', 'D'},
                {'T', 'Y', 'P', 'E', 'C', 'A', 'S', 'E'},
                {}, // no match
                {'R', 'E', 'A', 'D', 'O', 'N', 'L', 'Y'},
            };
            static int value[4] = {
                48,
                45,
                -1,
                35,
            };
            const uint8_t w8 = s[7];
            const uint64_t idx = _pext_u64(w8, 0x11);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
        case 9: {
            static char lookup[4][9] = {
                {'I', 'N', 'T', 'E', 'R', 'F', 'A', 'C', 'E'},
                {'P', 'R', 'O', 'C', 'E', 'D', 'U', 'R', 'E'},
                {'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O', 'N'},
                {}, // no match
            };
            static int value[4] = {
                22,
                33,
                14,
                -1,
            };
            uint16_t w9 = 0;
            memcpy(&w9, &s[7], 2);
            const uint64_t idx = _pext_u64(w9, 0x810);
            if (memcmp(lookup[idx], s.data(), sizeof(lookup[0])) == 0) {
                return value[idx];
            }
        }
        break;
    }
    return -1;
}

#include <cassert>
//check: name=check_modula, dataset=modula
void check_modula() {
    assert(lookup_modula("AND") == 0);
    assert(lookup_modula("DIV") == 7);
    assert(lookup_modula("END") == 11);
    assert(lookup_modula("FOR") == 18);
    assert(lookup_modula("MOD") == 27);
    assert(lookup_modula("NOT") == 29);
    assert(lookup_modula("REF") == 37);
    assert(lookup_modula("SET") == 40);
    assert(lookup_modula("TRY") == 43);
    assert(lookup_modula("VAR") == 50);
    assert(lookup_modula("ARRAY") == 1);
    assert(lookup_modula("BEGIN") == 2);
    assert(lookup_modula("CONST") == 6);
    assert(lookup_modula("ELSIF") == 10);
    assert(lookup_modula("UNTIL") == 47);
    assert(lookup_modula("VALUE") == 49);
    assert(lookup_modula("WHILE") == 51);
    assert(lookup_modula("BITS") == 3);
    assert(lookup_modula("CASE") == 5);
    assert(lookup_modula("ELSE") == 9);
    assert(lookup_modula("EVAL") == 12);
    assert(lookup_modula("EXIT") == 15);
    assert(lookup_modula("FROM") == 19);
    assert(lookup_modula("LOCK") == 25);
    assert(lookup_modula("THEN") == 41);
    assert(lookup_modula("TYPE") == 44);
    assert(lookup_modula("WITH") == 52);
    assert(lookup_modula("BY") == 4);
    assert(lookup_modula("DO") == 8);
    assert(lookup_modula("IF") == 20);
    assert(lookup_modula("IN") == 23);
    assert(lookup_modula("OF") == 31);
    assert(lookup_modula("OR") == 32);
    assert(lookup_modula("TO") == 42);
    assert(lookup_modula("EXCEPT") == 13);
    assert(lookup_modula("IMPORT") == 21);
    assert(lookup_modula("INLINE") == 24);
    assert(lookup_modula("MODULE") == 28);
    assert(lookup_modula("OBJECT") == 30);
    assert(lookup_modula("RAISES") == 34);
    assert(lookup_modula("RECORD") == 36);
    assert(lookup_modula("REPEAT") == 38);
    assert(lookup_modula("RETURN") == 39);
    assert(lookup_modula("UNSAFE") == 46);
    assert(lookup_modula("EXCEPTION") == 14);
    assert(lookup_modula("INTERFACE") == 22);
    assert(lookup_modula("PROCEDURE") == 33);
    assert(lookup_modula("EXPORTS") == 16);
    assert(lookup_modula("FINALLY") == 17);
    assert(lookup_modula("METHODS") == 26);
    assert(lookup_modula("READONLY") == 35);
    assert(lookup_modula("TYPECASE") == 45);
    assert(lookup_modula("UNTRACED") == 48);
}
