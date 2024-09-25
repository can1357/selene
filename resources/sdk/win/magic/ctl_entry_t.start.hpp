#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CTL_ENTRY.SubjectIdentifier", subject_identifier, 0x0, 0x80, true, 0xace0c2bdce14789c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_ENTRY.cAttribute", c_attribute, 0x80, 0x20, true, 0x863a3266d02ae51e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CTL_ENTRY.rgAttribute", rg_attribute, 0xc0, 0x40, true, 0xffa1f5679ab4f608)
#else
#define _m00
#define _m01
#define _m02
#endif