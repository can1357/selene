#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POLICY_INFORMATION.Length", length, 0x0, 0x20, true, 0x69de1ce726f29cfa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POLICY_INFORMATION.PolicyId", policy_id, 0x20, 0x20, true, 0x9c2742e420324e8d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::xsave_policy_t), "_SYSTEM_PROCESSOR_POLICY_INFORMATION.Policy", policy, 0x40, 0x80, true, 0x6b8b2e23dd627ab7)
#else
#define _m00
#define _m01
#define _m02
#endif