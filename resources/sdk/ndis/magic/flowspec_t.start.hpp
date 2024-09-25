#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.TokenRate", token_rate, 0x0, 0x20, true, 0x9c75086479423b06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.TokenBucketSize", token_bucket_size, 0x20, 0x20, true, 0x3acf90792eb80589)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.PeakBandwidth", peak_bandwidth, 0x40, 0x20, true, 0x97a3733239f4839f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.Latency", latency, 0x60, 0x20, true, 0xb265b7c749c43b08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.DelayVariation", delay_variation, 0x80, 0x20, true, 0x8c574032b72a31ba)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.ServiceType", service_type, 0xa0, 0x20, true, 0xab7d27293fb7ef56)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.MaxSduSize", max_sdu_size, 0xc0, 0x20, true, 0x3c1cf86ffc34f2de)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_flowspec.MinimumPolicedSize", minimum_policed_size, 0xe0, 0x20, true, 0x9a04aea8f156f467)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif