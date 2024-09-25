#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_COMMON_POLICY_FLAGS.CanCancel", can_cancel, 0x0, 0x1, true, 0x4d0981a6b78557ce, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_COMMON_POLICY_FLAGS.CanTerminate", can_terminate, 0x1, 0x1, true, 0x89d947149726df66, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_COMMON_POLICY_FLAGS.CanWatson", can_watson, 0x2, 0x1, true, 0x4cfc1ef18820c1a8, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_COMMON_POLICY_FLAGS.StateSaved", state_saved, 0x3, 0x1, true, 0xcce48f56c46e433b, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_COMMON_POLICY_FLAGS.Frozen", frozen, 0x4, 0x1, true, 0xf8c85be6c6d49a95, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_COMMON_POLICY_FLAGS.ManageSuspendResume", manage_suspend_resume, 0x5, 0x1, true, 0x599598df9549935e, 1, uint16_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RM_COMMON_POLICY_FLAGS.All", all, 0x0, 0x10, true, 0x5ce1f933c23ee25c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif