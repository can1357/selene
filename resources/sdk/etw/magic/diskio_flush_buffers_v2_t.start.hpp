#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_FLUSH_BUFFERS_V2.DiskNumber", disk_number, 0x0, 0x20, true, 0x4af060f42f43cc5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_FLUSH_BUFFERS_V2.IrpFlags", irp_flags, 0x20, 0x20, true, 0x10dfc3458968b658)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISKIO_FLUSH_BUFFERS_V2.HighResResponseTime", high_res_response_time, 0x40, 0x40, true, 0xfde01c80f773db62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DISKIO_FLUSH_BUFFERS_V2.IrpAddr", irp_addr, 0x80, 0x40, true, 0x6f460dd565d2350a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif