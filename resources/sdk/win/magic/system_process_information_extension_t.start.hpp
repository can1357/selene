#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_disk_counters_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.DiskCounters", disk_counters, 0x0, 0x40, true, 0xf4a871b86fe8c72f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.ContextSwitches", context_switches, 0x140, 0x40, true, 0x8b0223f20d9adc5f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.Flags", flags, 0x180, 0x20, true, 0xcc573f5d2a2ca279)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.HasStrongId", has_strong_id, 0x180, 0x1, true, 0x3fb543f2c1c0f7ee, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.Classification", classification, 0x181, 0x4, true, 0x271791aaf18a2996, 4, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.UserSidOffset", user_sid_offset, 0x1a0, 0x20, true, 0x8c6cfc081a27a12b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.PackageFullNameOffset", package_full_name_offset, 0x1c0, 0x20, true, 0x9e666bde3ea98489)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_energy_values_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.EnergyValues", energy_values, 0x200, 0x80, true, 0x110f3a0927f55113)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.AppIdOffset", app_id_offset, 0xa80, 0x20, true, 0xbab12e418a7ed3fe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.SharedCommitCharge", shared_commit_charge, 0xac0, 0x40, true, 0x52b7e2a17f47d410)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.JobObjectId", job_object_id, 0xb00, 0x20, true, 0x457ab762a5e38c1c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.SpareUlong", spare_ulong, 0xb20, 0x20, true, 0x497489ccd450c781)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.BackgroundActivityModerated", background_activity_moderated, 0x185, 0x1, true, 0x12b037ad0ad11388, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION_EXTENSION.ProcessSequenceNumber", process_sequence_number, 0xb40, 0x40, true, 0xc01bcc3e1fc412b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif