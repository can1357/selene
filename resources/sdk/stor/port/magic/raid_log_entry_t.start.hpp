#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dbg::log_reason_t), "_RAID_LOG_ENTRY.Reason", reason, 0x0, 0x20, true, 0x30701f46ec2ca4a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_LOG_ENTRY.Parameter1", parameter1, 0x40, 0x40, true, 0xaa35c72fc763c968)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_LOG_ENTRY.Parameter2", parameter2, 0x80, 0x40, true, 0xec63404077bf192d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_LOG_ENTRY.Parameter3", parameter3, 0xc0, 0x40, true, 0xf7f36078b53e50af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_LOG_ENTRY.Parameter4", parameter4, 0x100, 0x40, true, 0x3a3649ef719a4482)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_LOG_ENTRY.Timestamp", timestamp, 0x140, 0x40, true, 0x8c56c706b2541910)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif