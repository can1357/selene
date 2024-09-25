#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_STATUS_BLOCK32.Status", status, 0x0, 0x20, true, 0x126ee8bba2106d07)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STATUS_BLOCK32.Information", information, 0x20, 0x20, true, 0xb7d516643f4cc406)
#else
#define _m00
#define _m01
#endif