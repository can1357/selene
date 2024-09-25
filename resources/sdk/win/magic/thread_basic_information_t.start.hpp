#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_THREAD_BASIC_INFORMATION.ExitStatus", exit_status, 0x0, 0x20, true, 0xf19c42809c04e6fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::teb_t*), "_THREAD_BASIC_INFORMATION.TebBaseAddress", teb_base_address, 0x40, 0x40, true, 0x431eb2046c72057e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_THREAD_BASIC_INFORMATION.ClientId", client_id, 0x80, 0x80, true, 0x95314a84a200b650)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_BASIC_INFORMATION.AffinityMask", affinity_mask, 0x100, 0x40, true, 0xf139bee0fc62c776)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_THREAD_BASIC_INFORMATION.Priority", priority, 0x140, 0x20, true, 0xbbe642c326103feb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_THREAD_BASIC_INFORMATION.BasePriority", base_priority, 0x160, 0x20, true, 0x727f7fabeb54afe5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif