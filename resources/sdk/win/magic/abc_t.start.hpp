#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_ABC.abcA", abc_a, 0x0, 0x20, true, 0x29149fb083ae1b0c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ABC.abcB", abc_b, 0x20, 0x20, true, 0x515ba0df1be96d32)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_ABC.abcC", abc_c, 0x40, 0x20, true, 0xb296d0ad1be33249)
#else
#define _m00
#define _m01
#define _m02
#endif