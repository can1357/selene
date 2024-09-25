#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_RETPOLINE_RELOCATION_INDEX.ImportRelocationSize", import_relocation_size, 0x0, 0x10, true, 0xbd7f0fc5bbee1988)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_RETPOLINE_RELOCATION_INDEX.IndirectRelocationSize", indirect_relocation_size, 0x10, 0x10, true, 0x6a465b3742048567)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_RETPOLINE_RELOCATION_INDEX.SwitchJumpRelocationSize", switch_jump_relocation_size, 0x20, 0x10, true, 0x7641fa9458722e5b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_RETPOLINE_RELOCATION_INDEX.StraddleType", straddle_type, 0x30, 0x10, true, 0x32501bf13b190d10)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(image_import_control_transfer_dynamic_relocation_t ), "_RTL_RETPOLINE_RELOCATION_INDEX.StraddleReloc.Import", import, 0x0, 0x20, true, 0xcbabcb864e18a748)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(image_indir_control_transfer_dynamic_relocation_t ), "_RTL_RETPOLINE_RELOCATION_INDEX.StraddleReloc.Indir", indir, 0x0, 0x10, true, 0x2903f98a966eb034)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(image_switchtable_branch_dynamic_relocation_t ), "_RTL_RETPOLINE_RELOCATION_INDEX.StraddleReloc.SwitchJump", switch_jump, 0x0, 0x10, true, 0x7c0e872ed7faea69)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_straddle_reloc_t), "_RTL_RETPOLINE_RELOCATION_INDEX.StraddleReloc", straddle_reloc, 0x40, 0x20, true, 0x21aac7adffe12059)
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