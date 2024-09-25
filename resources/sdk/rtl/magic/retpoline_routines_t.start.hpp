#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_ROUTINES.UnwindDataOffset", unwind_data_offset, 0x0, 0x20, true, 0x4e66e20d0deb121e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_RTL_RETPOLINE_ROUTINES.SwitchtableJump", switchtable_jump, 0x20, 0x0, true, 0xe98ce6d4b8386904)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_ROUTINES.CfgIndirectRax", cfg_indirect_rax, 0x220, 0x20, true, 0xc006abffb7692c3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_ROUTINES.NonCfgIndirectRax", non_cfg_indirect_rax, 0x240, 0x20, true, 0xa7b80a1b2e5cbda)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_ROUTINES.ImportR10", import_r10, 0x260, 0x20, true, 0x9796e6d07fd0d2ed)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_ROUTINES.JumpHpat", jump_hpat, 0x0, 0x0, false, 0xe24d334f91652dbb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif