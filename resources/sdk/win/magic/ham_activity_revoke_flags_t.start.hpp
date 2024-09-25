#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInShellSuspend", revoke_in_shell_suspend, 0x0, 0x1, true, 0x84c970c213ef931d, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInBatterySaver", revoke_in_battery_saver, 0x1, 0x1, true, 0x6e035fcff3231471, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInDplLocked", revoke_in_dpl_locked, 0x4, 0x1, true, 0x2ed882656182116f, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInDcPower", revoke_in_dc_power, 0x5, 0x1, true, 0x781507be3197ede1, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInThermalLimited", revoke_in_thermal_limited, 0x6, 0x1, true, 0x9284a3ec91dc8d08, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeWhenHostNotActive", revoke_when_host_not_active, 0x7, 0x1, true, 0xa46dc2d6a9faa2dd, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeWhenHostResumePending", revoke_when_host_resume_pending, 0x8, 0x1, true, 0x1b8d139ff06deb46, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_REVOKE_FLAGS.All", all, 0x0, 0x20, true, 0xe73c9acbcce5deb3)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInCsImmediate", revoke_in_cs_immediate, 0x2, 0x1, true, 0x685273b438842ebd, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInCsDelayed", revoke_in_cs_delayed, 0x3, 0x1, true, 0x34651e4dcbcc12c3, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInCsPlmImmediate", revoke_in_cs_plm_immediate, 0x0, 0x0, false, 0x8117057aa3268056, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInCsPlmDelayed", revoke_in_cs_plm_delayed, 0x0, 0x0, false, 0x6f1f44467b26af23, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_REVOKE_FLAGS.RevokeInCsDamImmediate", revoke_in_cs_dam_immediate, 0x0, 0x0, false, 0xd7ae9c5f3198b56f, 1, uint32_t)
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