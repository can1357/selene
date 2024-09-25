#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NT_IORING_BUFFERREF.Address", address, 0x0, 0x0, false, 0xb9d0b1370b15604e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ioring_registered_buffer_t), "_NT_IORING_BUFFERREF.FixedBuffer", fixed_buffer, 0x0, 0x0, false, 0x89c0f2a0a4a45de7)
#else
#define _m00
#define _m01
#endif