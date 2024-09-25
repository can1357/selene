#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH.Version", version, 0x0, 0x0, false, 0x3bbdba8e77f0a695)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH.ProcessHandle", process_handle, 0x0, 0x0, false, 0x93935041779923ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hot_patch_image_info_t), "_MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH.BaseInfo", base_info, 0x0, 0x0, false, 0xbc28cc3e54c6ee10)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH.Flags", flags, 0x0, 0x0, false, 0x420dec705b783a18)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH.PatchPathString", patch_path_string, 0x0, 0x0, false, 0x2cced957899b9845)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif