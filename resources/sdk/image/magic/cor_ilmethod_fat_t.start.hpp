#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "IMAGE_COR_ILMETHOD_FAT.Flags", flags, 0x0, 0xc, true, 0x57d822915dd05866, 12, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "IMAGE_COR_ILMETHOD_FAT.Size", size, 0xc, 0x4, true, 0x4d127a762689e45b, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "IMAGE_COR_ILMETHOD_FAT.MaxStack", max_stack, 0x10, 0x10, true, 0xbddec201493526c0, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_FAT.CodeSize", code_size, 0x20, 0x20, true, 0xadfb635fb2d8aa66)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_FAT.LocalVarSigTok", local_var_sig_tok, 0x40, 0x20, true, 0xfdfddc334aecf24c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif