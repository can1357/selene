#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DEPENDENT.Index", index, 0x0, 0x20, true, 0xd11451a6d823e637)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DEPENDENT.ProviderIndex", provider_index, 0x20, 0x20, true, 0xe0e0d1fa88be2c79)
#else
#define _m00
#define _m01
#endif