#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY.UserShadowStack", user_shadow_stack, 0x0, 0x40, true, 0x2b47b004e501e50d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY.SetContextIpValidation", set_context_ip_validation, 0x40, 0x40, true, 0xa97be6677c9a48e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY.BlockNonCetBinaries", block_non_cet_binaries, 0x80, 0x40, true, 0xccb619f8ecdac401)
#else
#define _m00
#define _m01
#define _m02
#endif