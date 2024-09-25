#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_DIRECT_ACCESS_EXTENTS.FileOffset", file_offset, 0x0, 0x0, false, 0x5f8675c2d65835f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_DIRECT_ACCESS_EXTENTS.Length", length, 0x0, 0x0, false, 0xc6debb0d8d9ead9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_DIRECT_ACCESS_EXTENTS.Flags", flags, 0x0, 0x0, false, 0xd76a98a90e2dc68f)
#else
#define _m00
#define _m01
#define _m02
#endif