#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_11.Size", size, 0x0, 0x0, false, 0xa8c4a4b1ef3bb437)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_11.Policy", policy, 0x0, 0x0, false, 0x939a89dca33fdb54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_11.Priority", priority, 0x0, 0x0, false, 0xde88126d3170792)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_11.TargetProcessorSetAndGroup", target_processor_set_and_group, 0x0, 0x0, false, 0x56f8d799d292f3a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif