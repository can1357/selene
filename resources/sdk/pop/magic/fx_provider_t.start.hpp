#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_PROVIDER.Index", index, 0x0, 0x20, true, 0x6f3bda0e3b3612dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_PROVIDER.Activating", activating, 0x20, 0x8, true, 0x9e3533513a2644fe)
#else
#define _m00
#define _m01
#endif