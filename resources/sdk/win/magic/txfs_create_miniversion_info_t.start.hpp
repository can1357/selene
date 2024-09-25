#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_CREATE_MINIVERSION_INFO.StructureVersion", structure_version, 0x0, 0x10, true, 0x8d48ad4e08b2e469)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_CREATE_MINIVERSION_INFO.StructureLength", structure_length, 0x10, 0x10, true, 0x5aa024c69af047a9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_CREATE_MINIVERSION_INFO.BaseVersion", base_version, 0x20, 0x20, true, 0x9ab3be43b2e8a059)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_CREATE_MINIVERSION_INFO.MiniVersion", mini_version, 0x40, 0x10, true, 0x74424d0070e8c95e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif