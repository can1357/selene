#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_INFORMATION.Irp", irp, 0x0, 0x40, true, 0xceff1726942bd8a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_INFORMATION.FileObject", file_object, 0x40, 0x40, true, 0x2490b59d96624bb9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_INFORMATION.FileKey", file_key, 0x80, 0x40, true, 0x701551b69ae86990)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_INFORMATION.ExtraInformation", extra_information, 0xc0, 0x40, true, 0x236e2bffbf7705e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_INFORMATION.IssuingThreadId", issuing_thread_id, 0x100, 0x20, true, 0xf9a77f2c37c76c37)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_INFORMATION.InfoClass", info_class, 0x120, 0x20, true, 0x9dc000c3dbab441)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif