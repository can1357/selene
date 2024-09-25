#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_SYSTEM_THREAD_CID_PRIORITY_INFORMATION.ClientId", client_id, 0x0, 0x80, true, 0x8c844db28088900)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SYSTEM_THREAD_CID_PRIORITY_INFORMATION.Priority", priority, 0x80, 0x20, true, 0xf4d3444b50f97896)
#else
#define _m00
#define _m01
#endif