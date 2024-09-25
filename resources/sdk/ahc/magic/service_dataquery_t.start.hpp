#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::statistics_t), "_AHC_SERVICE_DATAQUERY.Stats", stats, 0x0, 0xa0, true, 0xab0ccb84f1f5c030)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_DATAQUERY.DataSize", data_size, 0x1a0, 0x20, true, 0x77e79f28c3d2a259)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_AHC_SERVICE_DATAQUERY.Data", data, 0x1c0, 0x40, true, 0xca33c3111d48f419)
#else
#define _m00
#define _m01
#define _m02
#endif