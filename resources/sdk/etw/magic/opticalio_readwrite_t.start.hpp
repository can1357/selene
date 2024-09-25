#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_READWRITE.DiskNumber", disk_number, 0x0, 0x20, true, 0x4419ea5629cc5e33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_READWRITE.IrpFlags", irp_flags, 0x20, 0x20, true, 0x211995f42b16daf9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_READWRITE.Size", size, 0x40, 0x20, true, 0x2d34b37efe542787)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_OPTICALIO_READWRITE.ByteOffset", byte_offset, 0x80, 0x40, true, 0x795f41d3448176a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_OPTICALIO_READWRITE.FileObject", file_object, 0xc0, 0x40, true, 0xad08b53ade43421d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_OPTICALIO_READWRITE.IrpAddr", irp_addr, 0x100, 0x40, true, 0xc74a99b761fde6ee)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_OPTICALIO_READWRITE.HighResResponseTime", high_res_response_time, 0x140, 0x40, true, 0x482a9339c0be2574)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_READWRITE.IssuingThreadId", issuing_thread_id, 0x180, 0x20, true, 0xd5da58201d4263d9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif