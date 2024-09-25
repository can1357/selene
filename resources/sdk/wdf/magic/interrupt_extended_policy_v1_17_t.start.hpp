#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_17.Size", size, 0x0, 0x0, false, 0x2a32f0814386ac41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_17.Policy", policy, 0x0, 0x0, false, 0x13b24c90acc6ee56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_17.Priority", priority, 0x0, 0x0, false, 0xd3f4ba6b5856a4cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_17.TargetProcessorSetAndGroup", target_processor_set_and_group, 0x0, 0x0, false, 0xff7c152e0530ee94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif