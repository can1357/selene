#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_OVERWRITE_PARAMETER_LIST.OverWriteCount", over_write_count, 0x0, 0x5, true, 0xe3f044d309abf08a, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_OVERWRITE_PARAMETER_LIST.Test", test, 0x5, 0x2, true, 0xfd138c84454e4c31, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OVERWRITE_PARAMETER_LIST.Invert", invert, 0x7, 0x1, true, 0x4c7d121d48b1519a, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_OVERWRITE_PARAMETER_LIST.InitializationPatternLength", initialization_pattern_length, 0x10, 0x10, true, 0xf20dd970d4c5869c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_OVERWRITE_PARAMETER_LIST.InitializationPattern", initialization_pattern, 0x20, 0x8, true, 0xa6d82b6607c8117a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif