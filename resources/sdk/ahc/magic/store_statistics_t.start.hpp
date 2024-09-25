#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_STORE_STATISTICS.LookupHits", lookup_hits, 0x0, 0x20, true, 0x7372bda0ead38cfe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_STORE_STATISTICS.LookupMisses", lookup_misses, 0x20, 0x20, true, 0xe2929d3dccf83b75)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_STORE_STATISTICS.Inserted", inserted, 0x40, 0x20, true, 0x86c4cc36cf512bc6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_STORE_STATISTICS.Replaced", replaced, 0x60, 0x20, true, 0xf919352fb8ab83bf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_STORE_STATISTICS.Updated", updated, 0x80, 0x20, true, 0x6277fbfa5937496e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif