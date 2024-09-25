#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOF_EXTERNAL_INFO.Version", version, 0x0, 0x20, true, 0x972654485d75e8bf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOF_EXTERNAL_INFO.Provider", provider, 0x20, 0x20, true, 0xfb47ffa48c514f7b)
#else
#define _m00
#define _m01
#endif