#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_database_t*), "_RTL_TRACE_ENUMERATE.Database", database, 0x0, 0x40, true, 0x17e68accbabd6482)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_ENUMERATE.Index", index, 0x40, 0x20, true, 0x8c58f63f09377f88)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_block_t*), "_RTL_TRACE_ENUMERATE.Block", block, 0x80, 0x40, true, 0x73efa4e325679839)
#else
#define _m00
#define _m01
#define _m02
#endif