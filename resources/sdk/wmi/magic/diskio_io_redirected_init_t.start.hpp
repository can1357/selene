#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_DISKIO_IO_REDIRECTED_INIT.Irp", irp, 0x0, 0x40, true, 0xd478e39231743548)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_DISKIO_IO_REDIRECTED_INIT.FileKey", file_key, 0x40, 0x40, true, 0x2990868c758ef556)
#else
#define _m00
#define _m01
#endif