#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_IO_ATTRIBUTION_STATS.IoCount", io_count, 0x0, 0x40, true, 0xa43fb9d620fdca5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_IO_ATTRIBUTION_STATS.TotalNonOverlappedQueueTime", total_non_overlapped_queue_time, 0x40, 0x40, true, 0x70bfed072248c8ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_IO_ATTRIBUTION_STATS.TotalNonOverlappedServiceTime", total_non_overlapped_service_time, 0x80, 0x40, true, 0xd76856aa79fdeb61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_IO_ATTRIBUTION_STATS.TotalSize", total_size, 0xc0, 0x40, true, 0xcf342fc858fd8d0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif