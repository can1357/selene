#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SERVER_OCSP_RESPONSE_CONTEXT.cbSize", cb_size, 0x0, 0x20, true, 0x991b991b433a3925)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CERT_SERVER_OCSP_RESPONSE_CONTEXT.pbEncodedOcspResponse", pb_encoded_ocsp_response, 0x40, 0x40, true, 0x4b75a6e073b6f5d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SERVER_OCSP_RESPONSE_CONTEXT.cbEncodedOcspResponse", cb_encoded_ocsp_response, 0x80, 0x20, true, 0xd8cf33168761336f)
#else
#define _m00
#define _m01
#define _m02
#endif