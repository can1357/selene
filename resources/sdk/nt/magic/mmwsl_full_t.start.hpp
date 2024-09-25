#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsl_instance_t), "_MMWSL_FULL.Instance", instance, 0x0, 0x0, false, 0xa4e72445983a9c4a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsl_shared_t), "_MMWSL_FULL.Shared", shared, 0x0, 0x0, false, 0x1978dfec2aea4df2)
#else
#define _m00
#define _m01
#endif