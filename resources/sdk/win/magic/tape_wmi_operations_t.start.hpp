#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_WMI_OPERATIONS.Method", method, 0x0, 0x20, true, 0xb7b127d8c4f6ca37)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_WMI_OPERATIONS.DataBufferSize", data_buffer_size, 0x20, 0x20, true, 0xaa9dfe6c94839d67)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TAPE_WMI_OPERATIONS.DataBuffer", data_buffer, 0x40, 0x40, true, 0xd43b32c84d975ea4)
#else
#define _m00
#define _m01
#define _m02
#endif