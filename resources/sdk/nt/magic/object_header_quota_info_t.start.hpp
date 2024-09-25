#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_HEADER_QUOTA_INFO.PagedPoolCharge", paged_pool_charge, 0x0, 0x20, true, 0x838b035f65ecfad3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_HEADER_QUOTA_INFO.NonPagedPoolCharge", non_paged_pool_charge, 0x20, 0x20, true, 0x1a2b41c788b485dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_HEADER_QUOTA_INFO.SecurityDescriptorCharge", security_descriptor_charge, 0x40, 0x20, true, 0xfb1b7eba62ef43d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_HEADER_QUOTA_INFO.SecurityDescriptorQuotaBlock", security_descriptor_quota_block, 0x80, 0x40, true, 0xc0b01511f8b84ec1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif