#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "COM_CATALOG_CACHE_SECTION.CacheTicks", cache_ticks, 0x0, 0x40, true, 0x94301dc1239b5ac3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "COM_CATALOG_CACHE_SECTION.ComPlusCatalogVer", com_plus_catalog_ver, 0x40, 0x40, true, 0xcae003d80341883f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "COM_CATALOG_CACHE_SECTION.WinRTActivationStoreSequence", win_rt_activation_store_sequence, 0x80, 0x40, true, 0x7e1aea0f7b13fe97)
#else
#define _m00
#define _m01
#define _m02
#endif