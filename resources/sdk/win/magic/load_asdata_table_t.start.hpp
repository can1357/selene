#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOAD_ASDATA_TABLE.Module", module, 0x0, 0x40, true, 0x1a1e02a6e0172d9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_LOAD_ASDATA_TABLE.FilePath", file_path, 0x40, 0x40, true, 0x8d627ca1a192338b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOAD_ASDATA_TABLE.Size", size, 0x80, 0x40, true, 0x34ec16b7e18ebf8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOAD_ASDATA_TABLE.Handle", handle, 0xc0, 0x40, true, 0x57f7ed8969dd99de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOAD_ASDATA_TABLE.RefCount", ref_count, 0x100, 0x20, true, 0xc9bd73416a1ec4b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_LOAD_ASDATA_TABLE.EntryPointActivationContext", entry_point_activation_context, 0x140, 0x40, true, 0xc7f324fc149f979f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif