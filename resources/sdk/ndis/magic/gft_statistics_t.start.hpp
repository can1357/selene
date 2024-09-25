#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_STATISTICS.Header", header, 0x0, 0x20, true, 0x4f516d001a27d2c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_STATISTICS.Flags", flags, 0x20, 0x20, true, 0xe4b038d7798f1205)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_STATISTICS.TableId", table_id, 0x40, 0x20, true, 0xe777335b79996c00)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_STATISTICS.VPortId", v_port_id, 0x60, 0x20, true, 0x5169647dc905e247)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.ProviderFlowEntryId", provider_flow_entry_id, 0x80, 0x40, true, 0xe39279ad920f2ea8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.Packets", packets, 0xc0, 0x40, true, 0xe629728b534acd5b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.Bytes", bytes, 0x100, 0x40, true, 0xa365c658f8a15172)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.L1CacheHits", l1_cache_hits, 0x140, 0x40, true, 0x161968d41f1f2b20)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.L2CacheHits", l2_cache_hits, 0x180, 0x40, true, 0xd3a2c87da601976c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.L3CacheHits", l3_cache_hits, 0x1c0, 0x40, true, 0xa992d3fd280be339)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.L1CacheMisses", l1_cache_misses, 0x200, 0x40, true, 0x85b6086b1edef7d4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.L2CacheMisses", l2_cache_misses, 0x240, 0x40, true, 0x277fe236af8765d6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_STATISTICS.L3CacheMisses", l3_cache_misses, 0x280, 0x40, true, 0x9757bf8ee18c711)
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
#define _m09
#define _m10
#define _m11
#define _m12
#endif