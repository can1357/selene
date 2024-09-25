#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_STATISTICS.Size", size, 0x0, 0x20, true, 0xddcf119f1c383c94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::main_statistics_t), "_AHC_STATISTICS.Main", main, 0x20, 0xe0, true, 0xa42f6f7c842d30e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::store_statistics_t), "_AHC_STATISTICS.Store", store, 0x100, 0xa0, true, 0xb5f085cee40501ac)
#else
#define _m00
#define _m01
#define _m02
#endif