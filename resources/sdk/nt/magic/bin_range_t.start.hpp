#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BIN_RANGE.StartValue", start_value, 0x0, 0x40, true, 0x6eba5c0c278a50a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BIN_RANGE.Length", length, 0x40, 0x40, true, 0x6541aa000a2f74cc)
#else
#define _m00
#define _m01
#endif