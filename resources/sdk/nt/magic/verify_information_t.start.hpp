#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VERIFY_INFORMATION.StartingOffset", starting_offset, 0x0, 0x40, true, 0x9a8d65a15f613d47)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VERIFY_INFORMATION.Length", length, 0x40, 0x20, true, 0xc9f337200a1bcdae)
#else
#define _m00
#define _m01
#endif