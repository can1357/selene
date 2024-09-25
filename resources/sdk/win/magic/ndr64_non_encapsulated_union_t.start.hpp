#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_NON_ENCAPSULATED_UNION.FormatCode", format_code, 0x0, 0x8, true, 0x1429ccfd4357b041)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_NON_ENCAPSULATED_UNION.Alignment", alignment, 0x8, 0x8, true, 0x593436181e17ec74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_NON_ENCAPSULATED_UNION.Flags", flags, 0x10, 0x8, true, 0xdafc7bc55cd2cdbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_NON_ENCAPSULATED_UNION.SwitchType", switch_type, 0x18, 0x8, true, 0xa9a4285e6c9800e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_NON_ENCAPSULATED_UNION.MemorySize", memory_size, 0x20, 0x20, true, 0x692fd27f434a6020)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_NON_ENCAPSULATED_UNION.Switch", _switch, 0x40, 0x40, true, 0x6cd4677b7ed1decc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif