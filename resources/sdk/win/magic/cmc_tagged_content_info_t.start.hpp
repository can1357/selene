#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_TAGGED_CONTENT_INFO.dwBodyPartID", dw_body_part_id, 0x0, 0x20, true, 0xa769d5b2fca47377)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMC_TAGGED_CONTENT_INFO.EncodedContentInfo", encoded_content_info, 0x40, 0x80, true, 0xc6d27a9fc7484fca)
#else
#define _m00
#define _m01
#endif