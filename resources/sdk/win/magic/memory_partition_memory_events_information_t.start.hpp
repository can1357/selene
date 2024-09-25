#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.Flags.CommitEvents", commit_events, 0x0, 0x1, true, 0x9f563b9a91ab1384, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.Flags.AllFlags", all_flags, 0x0, 0x20, true, 0x2b31df1032d008f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xeb5eb316d7b394a6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.HandleAttributes", handle_attributes, 0x20, 0x20, true, 0xaee244f331c27170)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.DesiredAccess", desired_access, 0x40, 0x20, true, 0x70b8f8a7dd4d3566)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.LowCommitCondition", low_commit_condition, 0x80, 0x40, true, 0x431b030cbc0a6393)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.HighCommitCondition", high_commit_condition, 0xc0, 0x40, true, 0xad9083bd927b7e76)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.MaximumCommitCondition", maximum_commit_condition, 0x100, 0x40, true, 0xae095064035ca8ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif