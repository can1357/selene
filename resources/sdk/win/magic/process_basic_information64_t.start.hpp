#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PROCESS_BASIC_INFORMATION64.ExitStatus", exit_status, 0x0, 0x20, true, 0x4be9acc6417c45ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION64.PebBaseAddress", peb_base_address, 0x40, 0x40, true, 0xe5ba7225f02bcf15)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION64.AffinityMask", affinity_mask, 0x80, 0x40, true, 0x229a4aa94a04e316)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PROCESS_BASIC_INFORMATION64.BasePriority", base_priority, 0xc0, 0x20, true, 0xc633acdb11345916)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION64.UniqueProcessId", unique_process_id, 0x100, 0x40, true, 0x8e484c541c539389)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION64.InheritedFromUniqueProcessId", inherited_from_unique_process_id, 0x140, 0x40, true, 0x54fdd418dc9e5a17)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif