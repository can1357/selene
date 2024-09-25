#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_ADD_ATTRIBUTES_INFO.dwCmcDataReference", dw_cmc_data_reference, 0x0, 0x20, true, 0x2f8ee4dfc89a5839)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_ADD_ATTRIBUTES_INFO.cCertReference", c_cert_reference, 0x20, 0x20, true, 0xc8433e4f4de910ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CMC_ADD_ATTRIBUTES_INFO.rgdwCertReference", rgdw_cert_reference, 0x40, 0x40, true, 0x43a5ccb7f8e8f098)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_ADD_ATTRIBUTES_INFO.cAttribute", c_attribute, 0x80, 0x20, true, 0xadf1f679003cecc9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CMC_ADD_ATTRIBUTES_INFO.rgAttribute", rg_attribute, 0xc0, 0x40, true, 0x3a706a072577531f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif