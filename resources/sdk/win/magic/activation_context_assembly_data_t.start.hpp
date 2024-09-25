#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.Size", size, 0x0, 0x20, true, 0xe58a7b7cde0a74b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.Flags", flags, 0x20, 0x20, true, 0x38e7481212416dc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.AssemblyName", assembly_name, 0x40, 0x40, true, 0xc336fa3af4a1c98a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.AssemblyNameLength", assembly_name_length, 0x80, 0x20, true, 0xdb3d8705f7902dba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.HashAlgorithm", hash_algorithm, 0xa0, 0x20, true, 0x3363a3808620a50f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.PseudoKey", pseudo_key, 0xc0, 0x20, true, 0x57a666901f1214ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif