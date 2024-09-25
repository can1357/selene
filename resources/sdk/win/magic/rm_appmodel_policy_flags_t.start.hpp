#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_RM_APPMODEL_POLICY_FLAGS.SharingOptions", sharing_options, 0x0, 0x3, true, 0xea6b6e10e9897dc6, 3, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_APPMODEL_POLICY_FLAGS.LegacyUiPaused", legacy_ui_paused, 0x3, 0x1, true, 0x4dd6e1ff82ed6ac6, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_APPMODEL_POLICY_FLAGS.Suspending", suspending, 0x4, 0x1, true, 0x3bbf5d5c6cb8f189, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_APPMODEL_POLICY_FLAGS.EnableForegroundCompatPolicy", enable_foreground_compat_policy, 0x5, 0x1, true, 0x191048d6405873dc, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_APPMODEL_POLICY_FLAGS.DoNotCommitSave", do_not_commit_save, 0x6, 0x1, true, 0x1f931181cb2718ae, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_APPMODEL_POLICY_FLAGS.AllowUngrantableRequest", allow_ungrantable_request, 0x7, 0x1, true, 0x528dc7533554eeca, 1, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_APPMODEL_POLICY_FLAGS.All", all, 0x0, 0x8, true, 0x90df0092ac01eaa6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif