#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_OBJECT_HEADER_CREATOR_INFO.TypeList", type_list, 0x0, 0x80, true, 0xd38e4430af411310)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_HEADER_CREATOR_INFO.CreatorUniqueProcess", creator_unique_process, 0x80, 0x40, true, 0x3c977a8c0d830916)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_HEADER_CREATOR_INFO.CreatorBackTraceIndex", creator_back_trace_index, 0xc0, 0x10, true, 0xbd32d790ee4d4d44)
#else
#define _m00
#define _m01
#define _m02
#endif