#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_VIRTUAL_ALLOC_XPARTITION.CapturedBase", captured_base, 0x0, 0x40, true, 0x3d5179c5fe89f7da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_VIRTUAL_ALLOC_XPARTITION.TargetPartition", target_partition, 0x40, 0x10, true, 0x519c04bec3462c8b)
#else
#define _m00
#define _m01
#endif