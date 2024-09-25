#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_TAGGED_REQUEST.dwTaggedRequestChoice", dw_tagged_request_choice, 0x0, 0x20, true, 0xacdc824cb1325765)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_cert_request_t*), "_CMC_TAGGED_REQUEST.pTaggedCertRequest", p_tagged_cert_request, 0x40, 0x40, true, 0xb7832d566e4c5a03)
#else
#define _m00
#define _m01
#endif