#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_cert_id_t), "_OCSP_REQUEST_ENTRY.CertId", cert_id, 0x0, 0x40, true, 0xdcd186788f8c9f58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_REQUEST_ENTRY.cExtension", c_extension, 0x240, 0x20, true, 0x838a9c98a78896c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_OCSP_REQUEST_ENTRY.rgExtension", rg_extension, 0x280, 0x40, true, 0xe0bb2c11215821b8)
#else
#define _m00
#define _m01
#define _m02
#endif