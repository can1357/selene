#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_LIMIT_INFO.HardMemoryLimit", hard_memory_limit, 0x0, 0x0, false, 0xf4abfdcbc1c993d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_LIMIT_INFO.NotificationLimit", notification_limit, 0x0, 0x0, false, 0x3a62b2a913197c9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_LIMIT_INFO.MemoryIssued", memory_issued, 0x0, 0x0, false, 0x51efb61b41469d72)
#else
#define _m00
#define _m01
#define _m02
#endif