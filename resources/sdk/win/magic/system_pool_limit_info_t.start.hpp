#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOL_LIMIT_INFO.PoolTag", pool_tag, 0x0, 0x0, false, 0xf431ecd468ef5db2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_pool_limit_mem_info_t, 2>), "_SYSTEM_POOL_LIMIT_INFO.MemLimits", mem_limits, 0x0, 0x0, false, 0x82543a882c9c4134)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_t), "_SYSTEM_POOL_LIMIT_INFO.NotificationHandle", notification_handle, 0x0, 0x0, false, 0xa139e915975ce0fd)
#else
#define _m00
#define _m01
#define _m02
#endif