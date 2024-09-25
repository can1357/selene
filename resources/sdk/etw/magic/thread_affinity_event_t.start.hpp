#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_THREAD_AFFINITY_EVENT.Mask", mask, 0x0, 0x40, true, 0xe9d2c6f90a7ac79c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_THREAD_AFFINITY_EVENT.ThreadId", thread_id, 0x40, 0x20, true, 0x56bf5ee5b15d8a39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_THREAD_AFFINITY_EVENT.Group", group, 0x60, 0x10, true, 0xcb281c5825097f0c)
#else
#define _m00
#define _m01
#define _m02
#endif