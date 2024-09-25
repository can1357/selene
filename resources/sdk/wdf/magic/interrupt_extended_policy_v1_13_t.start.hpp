#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_13.Size", size, 0x0, 0x0, false, 0x786a3f3fb27e7c70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_13.Policy", policy, 0x0, 0x0, false, 0xd1d3d87d12723249)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_13.Priority", priority, 0x0, 0x0, false, 0xab93f30a6ba3997)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_13.TargetProcessorSetAndGroup", target_processor_set_and_group, 0x0, 0x0, false, 0xe99bd6fbf6326841)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif