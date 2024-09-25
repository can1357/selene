#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_ADD_EXTENSIONS_INFO.dwCmcDataReference", dw_cmc_data_reference, 0x0, 0x20, true, 0x24632e144b368a79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_ADD_EXTENSIONS_INFO.cCertReference", c_cert_reference, 0x20, 0x20, true, 0xfdfbfa07e884525b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CMC_ADD_EXTENSIONS_INFO.rgdwCertReference", rgdw_cert_reference, 0x40, 0x40, true, 0xe9b48335ba7ddb21)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_ADD_EXTENSIONS_INFO.cExtension", c_extension, 0x80, 0x20, true, 0xe0ebdf13d7a401f4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CMC_ADD_EXTENSIONS_INFO.rgExtension", rg_extension, 0xc0, 0x40, true, 0x6fb0f7e96a72adbf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif