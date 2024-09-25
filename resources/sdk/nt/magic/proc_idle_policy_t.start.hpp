#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_IDLE_POLICY.PromotePercent", promote_percent, 0x0, 0x8, true, 0x913d296c1e46d25a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_IDLE_POLICY.DemotePercent", demote_percent, 0x8, 0x8, true, 0x3b281cc735ad762f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_IDLE_POLICY.PromotePercentBase", promote_percent_base, 0x10, 0x8, true, 0x7bc01239b4629917)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_IDLE_POLICY.DemotePercentBase", demote_percent_base, 0x18, 0x8, true, 0x13439946dfcf8bfe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_IDLE_POLICY.AllowScaling", allow_scaling, 0x20, 0x8, true, 0xd5e3eed4ec68594a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_IDLE_POLICY.ForceLightIdle", force_light_idle, 0x28, 0x8, true, 0x931b973a327e491f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif