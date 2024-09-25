#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_READ_WRITE.Offset", offset, 0x0, 0x40, true, 0x54c8d868383cf69a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_READ_WRITE.Irp", irp, 0x40, 0x40, true, 0xe7c3734dc0559b76)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_READ_WRITE.FileObject", file_object, 0x80, 0x40, true, 0x724683a2d6f3b3b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_READ_WRITE.FileKey", file_key, 0xc0, 0x40, true, 0x72573c8157258227)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_READ_WRITE.IssuingThreadId", issuing_thread_id, 0x100, 0x20, true, 0xe468f48f25059644)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_READ_WRITE.Size", size, 0x120, 0x20, true, 0x5c9ce1deb118c1e2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_READ_WRITE.Flags", flags, 0x140, 0x20, true, 0xdea33fd7a345fa5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_READ_WRITE.ExtraFlags", extra_flags, 0x160, 0x20, true, 0xc86250139494e63a)
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