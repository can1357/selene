#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_FILE_HEADER.Signature1", signature1, 0x0, 0x20, true, 0xaf0a7aa343b9c785)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_FILE_HEADER.Signature2", signature2, 0x20, 0x20, true, 0xb1d2050b79fec48f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_FILE_HEADER.HeaderSize", header_size, 0x40, 0x20, true, 0xa829f6e2075c2b16)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_FILE_HEADER.BuildNumber", build_number, 0x60, 0x20, true, 0x29f3bbe38e0d4b08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif