#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_BUS_INFORMATION_LEVEL_0.TotalBandwidth", total_bandwidth, 0x0, 0x20, true, 0xcaed9fc5120bdd1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_BUS_INFORMATION_LEVEL_0.ConsumedBandwidth", consumed_bandwidth, 0x20, 0x20, true, 0xb58944b08332da97)
#else
#define _m00
#define _m01
#endif