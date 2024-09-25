#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_PATH_OPERATION.Irp", irp, 0x0, 0x40, true, 0x736443e325170f54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_PATH_OPERATION.FileObject", file_object, 0x40, 0x40, true, 0xe54ef5a9c8dd000f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_PATH_OPERATION.FileKey", file_key, 0x80, 0x40, true, 0x39ec4bc98b881944)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_PATH_OPERATION.ExtraInformation", extra_information, 0xc0, 0x40, true, 0x6ad89cd6ad93dae2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_PATH_OPERATION.IssuingThreadId", issuing_thread_id, 0x100, 0x20, true, 0xd01e64fb34f32b2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_PATH_OPERATION.InfoClass", info_class, 0x120, 0x20, true, 0xdf348e815a700a1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PERFINFO_FILE_PATH_OPERATION.Path", path, 0x140, 0x10, true, 0x97741a0b3bb92cfb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif