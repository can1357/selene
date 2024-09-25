#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_REGISTRY_QUOTA_INFORMATION.RegistryQuotaAllowed", registry_quota_allowed, 0x0, 0x20, true, 0x2fde2365acb437dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_REGISTRY_QUOTA_INFORMATION.RegistryQuotaUsed", registry_quota_used, 0x20, 0x20, true, 0xdad211566131160b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_REGISTRY_QUOTA_INFORMATION.PagedPoolSize", paged_pool_size, 0x40, 0x40, true, 0x5a08200e457fc2c9)
#else
#define _m00
#define _m01
#define _m02
#endif