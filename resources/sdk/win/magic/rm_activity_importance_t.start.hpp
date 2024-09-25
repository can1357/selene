#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.IsValid", is_valid, 0x0, 0x1, true, 0xd264417aee5f6c5b, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_RM_ACTIVITY_IMPORTANCE.PresentationClass", presentation_class, 0x1, 0x3, true, 0xce2019d342b2efa3, 3, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RM_ACTIVITY_IMPORTANCE.ProximityClass", proximity_class, 0x4, 0x2, true, 0x7a0c6b2a83bb38f, 2, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.ReceivingInput", receiving_input, 0x6, 0x1, true, 0x17b21715ab5d82b4, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.ControlForegroundBoost", control_foreground_boost, 0x7, 0x1, true, 0x38b7deadb753938e, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.IsShellExperience", is_shell_experience, 0x8, 0x1, true, 0x2b5edc0a153d26fb, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.XboxShellExperience", xbox_shell_experience, 0x9, 0x1, true, 0x94145849d4ba66d1, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.IsShellExperienceInit", is_shell_experience_init, 0xa, 0x1, true, 0x3cc15ecb269b1251, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_ACTIVITY_IMPORTANCE.ActivityLoweredImportance", activity_lowered_importance, 0xb, 0x1, true, 0x4973d68f3e64f360, 1, uint16_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RM_ACTIVITY_IMPORTANCE.InteractivityFlags", interactivity_flags, 0x0, 0x10, true, 0xe3701bd6c54039bc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_ACTIVITY_IMPORTANCE.TotalOrdering", total_ordering, 0x10, 0x8, true, 0xf170620eff88ffb0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_ACTIVITY_IMPORTANCE.Priority", priority, 0x18, 0x8, true, 0xfd3fb259fb96483e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RM_ACTIVITY_IMPORTANCE.All", all, 0x0, 0x20, true, 0x82193f24a34f022e)
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