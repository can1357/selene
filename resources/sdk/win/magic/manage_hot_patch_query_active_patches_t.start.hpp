#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.Version", version, 0x0, 0x20, true, 0x55ca5fda7f73e242)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.ProcessHandle", process_handle, 0x40, 0x40, true, 0x6b77aa3d87b868d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.PatchCount", patch_count, 0x80, 0x20, true, 0x2a0911e2e453d30)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.PatchPathStrings", patch_path_strings, 0xc0, 0x40, true, 0x82b1eaccf9cbd622)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hot_patch_image_info_t*), "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.BaseInfos", base_infos, 0x100, 0x40, true, 0xfc310db2ad7b36d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.PatchSequenceNumbers", patch_sequence_numbers, 0x0, 0x0, false, 0x5d9a961b800009a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif