#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_FLUSH_BUFFERS_V3.DiskNumber", disk_number, 0x0, 0x20, true, 0x43e28c789b6d5743)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_FLUSH_BUFFERS_V3.IrpFlags", irp_flags, 0x20, 0x20, true, 0x4408cc3b1ad2e766)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISKIO_FLUSH_BUFFERS_V3.HighResResponseTime", high_res_response_time, 0x40, 0x40, true, 0x74dd62ee7ec345e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DISKIO_FLUSH_BUFFERS_V3.IrpAddr", irp_addr, 0x80, 0x40, true, 0x2b33fdcf72ee76d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_FLUSH_BUFFERS_V3.IssuingThreadId", issuing_thread_id, 0xc0, 0x20, true, 0xa1813cb8f765310a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif