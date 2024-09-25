#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_RESPONSE.dwStatus", dw_status, 0x0, 0x20, true, 0x8611e8339df1afd0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_RESPONSE.cFreeText", c_free_text, 0x20, 0x20, true, 0xda5b28d9ade93c09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_TIMESTAMP_RESPONSE.rgFreeText", rg_free_text, 0x40, 0x40, true, 0x6a3768cda605a23e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CRYPT_TIMESTAMP_RESPONSE.FailureInfo", failure_info, 0x80, 0xc0, true, 0x73119e74cc8cf6c1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_RESPONSE.ContentInfo", content_info, 0x140, 0x80, true, 0x993252ef874db44d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif