#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Version", version, 0x0, 0x0, false, 0xe4a706deb9052602)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Flags.ApplyReversePatches", apply_reverse_patches, 0x0, 0x0, false, 0xf10e221245a93c2c, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Flags.ApplyForwardPatches", apply_forward_patches, 0x0, 0x0, false, 0x365061afa9a33125, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Flags.UndoPatch", undo_patch, 0x0, 0x0, false, 0x238146cb552800fe, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Flags.AllFlags", all_flags, 0x0, 0x0, false, 0x3265acf15c12e9d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Flags", flags, 0x0, 0x0, false, 0x5ebb9e519fc73f55)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.ProcessHandle", process_handle, 0x0, 0x0, false, 0x5a9cedca17dbbcf4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.BaseImageAddress", base_image_address, 0x0, 0x0, false, 0xc67fcc33dcee1102)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.PatchImageAddress", patch_image_address, 0x0, 0x0, false, 0x57df3e9f104838ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif