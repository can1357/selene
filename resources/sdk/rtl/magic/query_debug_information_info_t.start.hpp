#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_QUERY_DEBUG_INFORMATION_INFO.UniqueProcessId", unique_process_id, 0x0, 0x20, true, 0x6622048f565de70a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_QUERY_DEBUG_INFORMATION_INFO.Flags", flags, 0x20, 0x20, true, 0x1a012ae85361521d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_QUERY_DEBUG_INFORMATION_INFO.Buffer", buffer, 0x40, 0x40, true, 0x614cb71674bf4106)
#else
#define _m00
#define _m01
#define _m02
#endif