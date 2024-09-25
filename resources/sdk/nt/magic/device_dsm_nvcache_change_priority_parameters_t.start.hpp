#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS.Size", size, 0x0, 0x20, true, 0xe6236957311fd4a5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS.TargetPriority", target_priority, 0x20, 0x8, true, 0xec18434b6b9e4434)
#else
#define _m00
#define _m01
#endif