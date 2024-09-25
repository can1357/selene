#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_SIMPLE_OPERATION.Irp", irp, 0x0, 0x40, true, 0x39fcee0929525900)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_SIMPLE_OPERATION.FileObject", file_object, 0x40, 0x40, true, 0x6616bd161de643f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_SIMPLE_OPERATION.FileKey", file_key, 0x80, 0x40, true, 0x40fc68d8a13375a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_SIMPLE_OPERATION.IssuingThreadId", issuing_thread_id, 0xc0, 0x20, true, 0xcc29b261b2a10042)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif