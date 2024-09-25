#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_POLICY_INFO.TimeCheck", time_check, 0x0, 0x20, true, 0xb8a555d9ccd4dbef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_POLICY_INFO.DemoteLimit", demote_limit, 0x20, 0x20, true, 0xfd98a6fd1d174269)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_POLICY_INFO.PromoteLimit", promote_limit, 0x40, 0x20, true, 0x819dd8d324b75de1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_POLICY_INFO.DemotePercent", demote_percent, 0x60, 0x8, true, 0x57f112c9e5686cfb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_POLICY_INFO.PromotePercent", promote_percent, 0x68, 0x8, true, 0xa88b77c6c3a47347)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESSOR_POWER_POLICY_INFO.AllowDemotion", allow_demotion, 0x80, 0x1, true, 0xe400190a738b899b, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESSOR_POWER_POLICY_INFO.AllowPromotion", allow_promotion, 0x81, 0x1, true, 0x759db1fa347c00e6, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif