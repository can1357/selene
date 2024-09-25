#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_C_OPT_COOKIE_AUTH_DESCRIPTOR.BufferSize", buffer_size, 0x0, 0x20, true, 0x6f468a7503b207d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_RPC_C_OPT_COOKIE_AUTH_DESCRIPTOR.Buffer", buffer, 0x40, 0x40, true, 0x78c82c849c4312e6)
#else
#define _m00
#define _m01
#endif