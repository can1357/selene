#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_HIVE_RECOVERY_INFO.Recovered", recovered, 0x0, 0x1, true, 0x6a200eae6b181fca, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_HIVE_RECOVERY_INFO.LegacyRecovery", legacy_recovery, 0x1, 0x1, true, 0xd6e429d3f0fd9df4, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_HIVE_RECOVERY_INFO.SoftRebootConflict", soft_reboot_conflict, 0x2, 0x1, true, 0x2a5dfa95bc0b4369, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_LOADER_HIVE_RECOVERY_INFO.MostRecentLog", most_recent_log, 0x3, 0x3, true, 0x37c27a8f4b359baf, 3, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_HIVE_RECOVERY_INFO.LogNextSequence", log_next_sequence, 0x40, 0x20, true, 0xddfec0f0002898ec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_HIVE_RECOVERY_INFO.LogMinimumSequence", log_minimum_sequence, 0x60, 0x20, true, 0x6f13f94e8c7f42a7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_HIVE_RECOVERY_INFO.LogCurrentOffset", log_current_offset, 0x80, 0x20, true, 0x68144262f1e7a35b)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_HIVE_RECOVERY_INFO.LoadedFromSnapshot", loaded_from_snapshot, 0x0, 0x0, false, 0xf0c4ab54ce38b20e, 1, uint32_t)
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