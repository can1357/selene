#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_CREATE_INFORMATION.Attributes", attributes, 0x0, 0x20, true, 0xde9e1da36c676d33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_CREATE_INFORMATION.RootDirectory", root_directory, 0x40, 0x40, true, 0x8c8b5758fe8ce694)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_OBJECT_CREATE_INFORMATION.ProbeMode", probe_mode, 0x80, 0x8, true, 0xd25e7cdf0d66b03)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_CREATE_INFORMATION.PagedPoolCharge", paged_pool_charge, 0xa0, 0x20, true, 0x9370387795c23265)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_CREATE_INFORMATION.NonPagedPoolCharge", non_paged_pool_charge, 0xc0, 0x20, true, 0x79be96c67c4340f3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_CREATE_INFORMATION.SecurityDescriptorCharge", security_descriptor_charge, 0xe0, 0x20, true, 0xbd2d6792b878b2e8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_CREATE_INFORMATION.SecurityDescriptor", security_descriptor, 0x100, 0x40, true, 0x376ec969a1b9732a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t*), "_OBJECT_CREATE_INFORMATION.SecurityQos", security_qos, 0x140, 0x40, true, 0xbb2852097f450c86)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t), "_OBJECT_CREATE_INFORMATION.SecurityQualityOfService", security_quality_of_service, 0x180, 0x60, true, 0xed30ca92dc7812e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif