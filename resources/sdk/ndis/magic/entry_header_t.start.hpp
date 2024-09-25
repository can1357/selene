#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pool_header_t*), "_NDIS_ENTRY_HEADER.PoolHeader", pool_header, 0x0, 0x40, true, 0xbcc0f863c23f154e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_ENTRY_HEADER.Linkage", linkage, 0x40, 0x80, true, 0x16269982851af9eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENTRY_HEADER.LookasideProcIndex", lookaside_proc_index, 0xc0, 0x20, true, 0x7ebe64d133b95d0)
#else
#define _m00
#define _m01
#define _m02
#endif