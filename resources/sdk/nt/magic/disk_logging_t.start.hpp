#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_LOGGING.Function", function, 0x0, 0x8, true, 0x3be2a73b17167b49)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DISK_LOGGING.BufferAddress", buffer_address, 0x40, 0x40, true, 0xaf4361a5cef03d29)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_LOGGING.BufferSize", buffer_size, 0x80, 0x20, true, 0xa4849384c7c880be)
#else
#define _m00
#define _m01
#define _m02
#endif