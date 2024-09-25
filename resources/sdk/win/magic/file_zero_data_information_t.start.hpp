#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ZERO_DATA_INFORMATION.FileOffset", file_offset, 0x0, 0x40, true, 0x443e3b91ae2b087c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ZERO_DATA_INFORMATION.BeyondFinalZero", beyond_final_zero, 0x40, 0x40, true, 0xa365d66e6bc63d54)
#else
#define _m00
#define _m01
#endif