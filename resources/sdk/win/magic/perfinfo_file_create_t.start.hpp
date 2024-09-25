#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_CREATE.Irp", irp, 0x0, 0x40, true, 0x263eb19630410623)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_CREATE.FileObject", file_object, 0x40, 0x40, true, 0xe2a5ed05d3d809a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_CREATE.IssuingThreadId", issuing_thread_id, 0x80, 0x20, true, 0x56a6bdd3556e6b55)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_CREATE.Options", options, 0xa0, 0x20, true, 0x32980257dbde739f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_CREATE.Attributes", attributes, 0xc0, 0x20, true, 0x23f3f8189fe4cb24)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_FILE_CREATE.ShareAccess", share_access, 0xe0, 0x20, true, 0xeb3caf06ccf7b386)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PERFINFO_FILE_CREATE.OpenPath", open_path, 0x100, 0x10, true, 0x2a520d41786a9f94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif