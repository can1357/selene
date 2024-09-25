#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_CONTROL_FLOW_GUARD_POLICY.ControlFlowGuard", control_flow_guard, 0x0, 0x40, true, 0xa1a1887c1658b95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_CONTROL_FLOW_GUARD_POLICY.StrictControlFlowGuard", strict_control_flow_guard, 0x40, 0x40, true, 0x19b442bcc918343)
#else
#define _m00
#define _m01
#endif