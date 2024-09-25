#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PROCESS_BASIC_INFORMATION.ExitStatus", exit_status, 0x0, 0x20, true, 0x993a2ed76ac15e34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::peb_t*), "_PROCESS_BASIC_INFORMATION.PebBaseAddress", peb_base_address, 0x40, 0x40, true, 0x8df93e5c33213aa6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION.AffinityMask", affinity_mask, 0x80, 0x40, true, 0x588a54b15dfa0053)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PROCESS_BASIC_INFORMATION.BasePriority", base_priority, 0xc0, 0x20, true, 0x8e764bc947203104)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION.UniqueProcessId", unique_process_id, 0x100, 0x40, true, 0x96aa17427ef6faf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_BASIC_INFORMATION.InheritedFromUniqueProcessId", inherited_from_unique_process_id, 0x140, 0x40, true, 0xfc6d8edea3e3b433)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif