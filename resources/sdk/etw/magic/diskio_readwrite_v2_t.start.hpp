#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V2.DiskNumber", disk_number, 0x0, 0x20, true, 0x558635196c851857)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V2.IrpFlags", irp_flags, 0x20, 0x20, true, 0xd8414c015628ad9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DISKIO_READWRITE_V2.Size", size, 0x40, 0x20, true, 0xd2182a64299edd3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISKIO_READWRITE_V2.ByteOffset", byte_offset, 0x80, 0x40, true, 0xa9c283668dd5ba0c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DISKIO_READWRITE_V2.FileObject", file_object, 0xc0, 0x40, true, 0x7ad9ab5b06afdefd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DISKIO_READWRITE_V2.IrpAddr", irp_addr, 0x100, 0x40, true, 0x2a897864001305eb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISKIO_READWRITE_V2.HighResResponseTime", high_res_response_time, 0x140, 0x40, true, 0xa04c9d9d0233360b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif