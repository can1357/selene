#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CONTEXT.dwCertEncodingType", dw_cert_encoding_type, 0x0, 0x20, true, 0x7d3522bc433a9b9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CERT_CONTEXT.pbCertEncoded", pb_cert_encoded, 0x40, 0x40, true, 0xc03e24223a43442)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CONTEXT.cbCertEncoded", cb_cert_encoded, 0x80, 0x20, true, 0xc41a0a393b23c2d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_info_t*), "_CERT_CONTEXT.pCertInfo", p_cert_info, 0xc0, 0x40, true, 0x3c676ca34618ba31)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CONTEXT.hCertStore", h_cert_store, 0x100, 0x40, true, 0xdc801581b277f97f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif