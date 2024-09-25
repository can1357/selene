#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_RESTRICTED_MODWRITES.MaximumClusterPages", maximum_cluster_pages, 0x0, 0x8, true, 0xeea1d4083fd12a79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_RESTRICTED_MODWRITES.ReducedClusterWrites", reduced_cluster_writes, 0x8, 0x8, true, 0xa963d31446361564)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_RESTRICTED_MODWRITES.ImposeDelay", impose_delay, 0x10, 0x8, true, 0x2ac59715ebe4a4ea)
#else
#define _m00
#define _m01
#define _m02
#endif