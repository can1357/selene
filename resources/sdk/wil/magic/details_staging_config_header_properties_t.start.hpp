#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigHeaderProperties.ignoreServiceState", ignore_service_state, 0x0, 0x1, true, 0x73fdbc80ce651873, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigHeaderProperties.ignoreUserState", ignore_user_state, 0x1, 0x1, true, 0x978b103970e86966, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigHeaderProperties.ignoreTestState", ignore_test_state, 0x2, 0x1, true, 0x6809f5488d564d2a, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigHeaderProperties.ignoreVariants", ignore_variants, 0x3, 0x1, true, 0xf02109cce2a36fbd, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif