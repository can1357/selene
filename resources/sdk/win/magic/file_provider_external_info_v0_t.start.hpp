#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PROVIDER_EXTERNAL_INFO_V0.Version", version, 0x0, 0x20, true, 0xfad1f7063b7561ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PROVIDER_EXTERNAL_INFO_V0.Algorithm", algorithm, 0x20, 0x20, true, 0x51104abbd4f1e771)
#else
#define _m00
#define _m01
#endif