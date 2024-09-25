#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_LONG_DPC_DETECTION_INFORMATION.DpcQueueDepth", dpc_queue_depth, 0x0, 0x0, false, 0xff9c68a785c59761)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_LONG_DPC_DETECTION_INFORMATION.LongDpcPresent", long_dpc_present, 0x0, 0x0, false, 0x1342c79058823156)
#else
#define _m00
#define _m01
#endif