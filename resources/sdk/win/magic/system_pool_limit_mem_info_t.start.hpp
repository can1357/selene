#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_POOL_LIMIT_MEM_INFO.MemoryLimit", memory_limit, 0x0, 0x0, false, 0x6f1d99de182ee8fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_POOL_LIMIT_MEM_INFO.NotificationLimit", notification_limit, 0x0, 0x0, false, 0xd7659aecd3aadae0)
#else
#define _m00
#define _m01
#endif