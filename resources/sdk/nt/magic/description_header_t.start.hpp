#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DESCRIPTION_HEADER.Signature", signature, 0x0, 0x20, true, 0xfe0349b6c6fc545e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DESCRIPTION_HEADER.Length", length, 0x20, 0x20, true, 0x449d162fb24970b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DESCRIPTION_HEADER.Revision", revision, 0x40, 0x8, true, 0x4eb5c8a9292192f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DESCRIPTION_HEADER.Checksum", checksum, 0x48, 0x8, true, 0xa2d9d1f2471370f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 6>), "_DESCRIPTION_HEADER.OEMID", oemid, 0x50, 0x30, true, 0xa9e102f633714ab5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 8>), "_DESCRIPTION_HEADER.OEMTableID", oem_table_id, 0x80, 0x40, true, 0x38e17322a8d3aedf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DESCRIPTION_HEADER.OEMRevision", oem_revision, 0xc0, 0x20, true, 0xd49fcb5f475792ca)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 4>), "_DESCRIPTION_HEADER.CreatorID", creator_id, 0xe0, 0x20, true, 0xf12a0177f9b25491)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DESCRIPTION_HEADER.CreatorRev", creator_rev, 0x100, 0x20, true, 0x1556b8f3f54762a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif