#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ZERO_DATA_INFORMATION_EX.FileOffset", file_offset, 0x0, 0x40, true, 0x6c8e059e0fbe9364)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ZERO_DATA_INFORMATION_EX.BeyondFinalZero", beyond_final_zero, 0x40, 0x40, true, 0x842cafc920ddcc62)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ZERO_DATA_INFORMATION_EX.Flags", flags, 0x80, 0x20, true, 0x254ad2055c5ea3c7)
#else
#define _m00
#define _m01
#define _m02
#endif