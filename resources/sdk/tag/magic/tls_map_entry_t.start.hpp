#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTLSMapEntry.dwThreadId", dw_thread_id, 0x0, 0x20, true, 0x1036c6559e81a52b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t*), "tagTLSMapEntry.ptls", ptls, 0x40, 0x40, true, 0xe40c458fe1631ddb)
#else
#define _m00
#define _m01
#endif