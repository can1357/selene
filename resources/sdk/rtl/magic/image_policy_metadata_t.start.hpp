#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct image::policy_metadata_t*), "_RTL_IMAGE_POLICY_METADATA.PolicyMetadata", policy_metadata, 0x0, 0x40, true, 0xb8b769dfcec3efc5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_IMAGE_POLICY_METADATA.LBound", l_bound, 0x40, 0x40, true, 0x6d14793105e8f78c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_IMAGE_POLICY_METADATA.UBound", u_bound, 0x80, 0x40, true, 0xdcc516dbbbeb6e35)
#else
#define _m00
#define _m01
#define _m02
#endif