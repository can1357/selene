#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V3.DiskNumber", disk_number, 0x0, 0x20, true, 0xd600b5ce627af034)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V3.IrpFlags", irp_flags, 0x20, 0x20, true, 0xa494b455efe59575)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V3.Size", size, 0x40, 0x20, true, 0xa1ee8da332116ae4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISKIO_READWRITE_V3.ByteOffset", byte_offset, 0x80, 0x40, true, 0xa8d303f1496e8fca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DISKIO_READWRITE_V3.FileObject", file_object, 0xc0, 0x40, true, 0xbfcd7c8fb3f8ec0e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DISKIO_READWRITE_V3.IrpAddr", irp_addr, 0x100, 0x40, true, 0x27e09cdd373c79b0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISKIO_READWRITE_V3.HighResResponseTime", high_res_response_time, 0x140, 0x40, true, 0xd4193244f4cbaceb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V3.IssuingThreadId", issuing_thread_id, 0x180, 0x20, true, 0xb20aae6ac3def732)
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