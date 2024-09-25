#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_DISKIO_READWRITE_INIT.Irp", irp, 0x0, 0x40, true, 0x139a9820a247de78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_DISKIO_READWRITE_INIT.IssuingThreadId", issuing_thread_id, 0x40, 0x20, true, 0x81e6cff6279d63af)
#else
#define _m00
#define _m01
#endif