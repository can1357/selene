#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::db_header_t), "_ZDB_HEADER.SdbHeader", sdb_header, 0x0, 0x60, true, 0x43c451000602727d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::zdb_compression_algorithm_t), "_ZDB_HEADER.CompressionMethod", compression_method, 0x60, 0x20, true, 0xbff2d9cfe8681161)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZDB_HEADER.dwExpandedSize", dw_expanded_size, 0x80, 0x20, true, 0xfc83a8d97bfeb9be)
#else
#define _m00
#define _m01
#define _m02
#endif