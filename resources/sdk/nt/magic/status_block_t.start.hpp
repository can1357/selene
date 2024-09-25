#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_STATUS_BLOCK.Status", status, 0x0, 0x20, true, 0xbacdae54bd41205d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STATUS_BLOCK.Pointer", pointer, 0x0, 0x40, true, 0x5fd1c2f3fb965829)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STATUS_BLOCK.Information", information, 0x40, 0x40, true, 0xc7ada729376416a7)
#else
#define _m00
#define _m01
#define _m02
#endif