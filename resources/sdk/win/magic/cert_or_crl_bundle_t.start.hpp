#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_OR_CRL_BUNDLE.cItem", c_item, 0x0, 0x20, true, 0x29ffb534c35dc03a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_or_crl_blob_t*), "_CERT_OR_CRL_BUNDLE.rgItem", rg_item, 0x40, 0x40, true, 0xc087794cdc92e645)
#else
#define _m00
#define _m01
#endif