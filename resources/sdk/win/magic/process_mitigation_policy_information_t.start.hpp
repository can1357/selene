#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::process_mitigation_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.Policy", policy, 0x0, 0x20, true, 0x2ffb445cabbfac16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_aslr_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.ASLRPolicy", aslr_policy, 0x20, 0x20, true, 0xf16c423bde2c8483)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_strict_handle_check_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.StrictHandleCheckPolicy", strict_handle_check_policy, 0x20, 0x20, true, 0xcb68ecedb311484a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_system_call_disable_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.SystemCallDisablePolicy", system_call_disable_policy, 0x20, 0x20, true, 0x6c90b78ac5673651)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_extension_point_disable_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.ExtensionPointDisablePolicy", extension_point_disable_policy, 0x20, 0x20, true, 0x5554364aa11c015b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_dynamic_code_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.DynamicCodePolicy", dynamic_code_policy, 0x20, 0x20, true, 0x63df6182279facd5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_control_flow_guard_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.ControlFlowGuardPolicy", control_flow_guard_policy, 0x20, 0x20, true, 0x97b279803f3c3f9c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_binary_signature_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.SignaturePolicy", signature_policy, 0x20, 0x20, true, 0x6bce3712bdc5a422)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_font_disable_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.FontDisablePolicy", font_disable_policy, 0x20, 0x20, true, 0xb7ce9cd7a9742a8c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_image_load_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.ImageLoadPolicy", image_load_policy, 0x20, 0x20, true, 0x9575b33e7c8c5e42)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_system_call_filter_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.SystemCallFilterPolicy", system_call_filter_policy, 0x20, 0x20, true, 0xbb731ccda9b9c14c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_payload_restriction_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.PayloadRestrictionPolicy", payload_restriction_policy, 0x20, 0x20, true, 0xf05b2e1ea05d4784)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_child_process_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.ChildProcessPolicy", child_process_policy, 0x20, 0x20, true, 0xb83f0f000f4a79a5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_side_channel_isolation_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.SideChannelIsolationPolicy", side_channel_isolation_policy, 0x20, 0x20, true, 0xa95c75a19ea82c2f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_user_shadow_stack_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.UserShadowStackPolicy", user_shadow_stack_policy, 0x20, 0x20, true, 0xb6567d9e7ebae3c5)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_mitigation_redirection_trust_policy_t), "_PROCESS_MITIGATION_POLICY_INFORMATION.RedirectionTrustPolicy", redirection_trust_policy, 0x0, 0x0, false, 0x784a12d32f863abc)
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
#define _m13
#define _m14
#define _m15
#endif