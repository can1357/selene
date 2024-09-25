#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_RESOURCE_INFO.Type", type, 0x0, 0x40, true, 0xec905bd2bef490eb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_RESOURCE_INFO.Name", name, 0x40, 0x40, true, 0xe8e8238a4d109a0b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_RESOURCE_INFO.Language", language, 0x80, 0x40, true, 0x397c5c4a3fc280c0)
#else
#define _m00
#define _m01
#define _m02
#endif