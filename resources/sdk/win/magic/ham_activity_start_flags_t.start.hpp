#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInShellSuspend", disallow_in_shell_suspend, 0x0, 0x1, true, 0x703e28d06b8386bf, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInBatterySaver", disallow_in_battery_saver, 0x1, 0x1, true, 0x3cea8e2b88aa324, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInDplLocked", disallow_in_dpl_locked, 0x3, 0x1, true, 0xd4159eff10d89946, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInDcPower", disallow_in_dc_power, 0x4, 0x1, true, 0x70b78bcd673b2749, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInThermalLimited", disallow_in_thermal_limited, 0x5, 0x1, true, 0xd0306b3f5433d129, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowWhenHostNotActive", disallow_when_host_not_active, 0x6, 0x1, true, 0xf07166232a99bf9e, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowWhenHostQuiesced", disallow_when_host_quiesced, 0x7, 0x1, true, 0xe1baa7013dea126, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowWhenHostResumeImminent", disallow_when_host_resume_imminent, 0x8, 0x1, true, 0x61c1269a91819351, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowDueToEePolicy", disallow_due_to_ee_policy, 0x9, 0x1, true, 0x5de5a5d54141f851, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_START_FLAGS.All", all, 0x0, 0x20, true, 0xf1cf140fd02c5ef8)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInCs", disallow_in_cs, 0x2, 0x1, true, 0x811f433b169a6927, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInCsPlm", disallow_in_cs_plm, 0x0, 0x0, false, 0x24e115eee0f20c30, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_START_FLAGS.DisallowInCsDam", disallow_in_cs_dam, 0x0, 0x0, false, 0xaca43fc8019dbb90, 1, uint32_t)
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
#endif