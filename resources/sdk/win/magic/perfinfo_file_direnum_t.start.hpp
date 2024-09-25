#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_DIRENUM.Irp", irp, 0x0, 0x40, true, 0x9a9baaf3cb95a66a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_DIRENUM.FileObject", file_object, 0x40, 0x40, true, 0xd77fe2179070cfc4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_DIRENUM.FileKey", file_key, 0x80, 0x40, true, 0xab2461f92cd71f43)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_DIRENUM.IssuingThreadId", issuing_thread_id, 0xc0, 0x20, true, 0x21fe97a085383600)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_DIRENUM.Length", length, 0xe0, 0x20, true, 0x56950628fe6f07eb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_DIRENUM.InfoClass", info_class, 0x100, 0x20, true, 0xfc492128eae06ff4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_DIRENUM.FileIndex", file_index, 0x120, 0x20, true, 0x5b017eec4b45ae30)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PERFINFO_FILE_DIRENUM.FileName", file_name, 0x140, 0x10, true, 0xe094153a8983fc6b)
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