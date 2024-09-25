#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_TLS_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xca290560e018b718)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_THREAD_TLS_INFORMATION.NewTlsData", new_tls_data, 0x40, 0x40, true, 0x357339edcd3f9496)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_THREAD_TLS_INFORMATION.OldTlsData", old_tls_data, 0x40, 0x40, true, 0x6d93a926e41c526e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_THREAD_TLS_INFORMATION.ThreadId", thread_id, 0x80, 0x40, true, 0x1f86fa8ad1ba5b5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif