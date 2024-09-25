#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_STATUS_BLOCK.Status", status, 0x0, 0x20, true, 0x7a0a338e92a95f9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STATUS_BLOCK.Pointer", pointer, 0x0, 0x40, true, 0xaa08ebc40a3126af)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_STATUS_BLOCK.Information", information, 0x40, 0x40, true, 0x5883b9adf561c079)
#else
#define _m00
#define _m01
#define _m02
#endif