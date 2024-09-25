#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_TAGGED_CERT_REQUEST.dwBodyPartID", dw_body_part_id, 0x0, 0x20, true, 0x322b6db8e2e401eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMC_TAGGED_CERT_REQUEST.SignedCertRequest", signed_cert_request, 0x40, 0x80, true, 0x467ce8684c728f5b)
#else
#define _m00
#define _m01
#endif