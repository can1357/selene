#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_9.Size", size, 0x0, 0x0, false, 0x5a2245826653710e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_9.Policy", policy, 0x0, 0x0, false, 0x36ff963f8cc8b97b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_9.Priority", priority, 0x0, 0x0, false, 0x4a790f20b089eee1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_9.TargetProcessorSetAndGroup", target_processor_set_and_group, 0x0, 0x0, false, 0x3f2395b401a20418)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif