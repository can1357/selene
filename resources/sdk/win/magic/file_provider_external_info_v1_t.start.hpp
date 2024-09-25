#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PROVIDER_EXTERNAL_INFO_V1.Version", version, 0x0, 0x20, true, 0xc27711d1d9974ca4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PROVIDER_EXTERNAL_INFO_V1.Algorithm", algorithm, 0x20, 0x20, true, 0x3c32214c5ad1d1b5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PROVIDER_EXTERNAL_INFO_V1.Flags", flags, 0x40, 0x20, true, 0xa17f008760cdc608)
#else
#define _m00
#define _m01
#define _m02
#endif