#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_FAULTS_INFORMATION.Probability", probability, 0x0, 0x20, true, 0xe618d5e68396e1d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_FAULTS_INFORMATION.MaxProbability", max_probability, 0x20, 0x20, true, 0x9868f86a66127bb4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_VERIFIER_FAULTS_INFORMATION.PoolTags", pool_tags, 0x40, 0x80, true, 0x8c78f7ede089c0c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_VERIFIER_FAULTS_INFORMATION.Applications", applications, 0xc0, 0x80, true, 0xe10db7c4f995185e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif