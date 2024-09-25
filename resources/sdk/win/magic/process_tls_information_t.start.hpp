#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TLS_INFORMATION.Flags", flags, 0x0, 0x20, true, 0x740e106e20191d05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TLS_INFORMATION.OperationType", operation_type, 0x20, 0x20, true, 0x28a2c16fc8a72925)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TLS_INFORMATION.ThreadDataCount", thread_data_count, 0x40, 0x20, true, 0x28c282320d48cdfd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TLS_INFORMATION.TlsIndex", tls_index, 0x60, 0x20, true, 0x8abc1355721d5bb7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_TLS_INFORMATION.PreviousCount", previous_count, 0x60, 0x20, true, 0xd027e4fc5d2e1548)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::thread_tls_information_t, 1>), "_PROCESS_TLS_INFORMATION.ThreadData", thread_data, 0x80, 0xc0, true, 0x2b64ed5074348eb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif