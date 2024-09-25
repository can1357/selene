#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_FLUSH_BUFFERS.DiskNumber", disk_number, 0x0, 0x20, true, 0x11c60f1ad271e1d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_FLUSH_BUFFERS.IrpFlags", irp_flags, 0x20, 0x20, true, 0x5b17eafc0de96608)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_OPTICALIO_FLUSH_BUFFERS.HighResResponseTime", high_res_response_time, 0x40, 0x40, true, 0x7f8becaf8b87b56f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_OPTICALIO_FLUSH_BUFFERS.IrpAddr", irp_addr, 0x80, 0x40, true, 0x18a4cdcfa66c4b45)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_FLUSH_BUFFERS.IssuingThreadId", issuing_thread_id, 0xc0, 0x20, true, 0xa3c2c4fa11d060c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif