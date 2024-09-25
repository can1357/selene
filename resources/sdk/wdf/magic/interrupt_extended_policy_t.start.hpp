#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_EXTENDED_POLICY.Size", size, 0x0, 0x20, true, 0x4c145dafbf992b32)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "_WDF_INTERRUPT_EXTENDED_POLICY.Policy", policy, 0x20, 0x20, true, 0xdb8094c9668f775b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "_WDF_INTERRUPT_EXTENDED_POLICY.Priority", priority, 0x40, 0x20, true, 0x9a8eaef55352d134)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_WDF_INTERRUPT_EXTENDED_POLICY.TargetProcessorSetAndGroup", target_processor_set_and_group, 0x80, 0x80, true, 0x3f27f01823c13170)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif