#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_REDISTRIBUTOR.Type", type, 0x0, 0x0, false, 0x8a5d084f65db712c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_REDISTRIBUTOR.Length", length, 0x0, 0x0, false, 0xa1fe371842b98994)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GIC_REDISTRIBUTOR.DiscoveryRangeBaseAddress", discovery_range_base_address, 0x0, 0x0, false, 0x9f9404703fa747d6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GIC_REDISTRIBUTOR.DiscoveryRangeLength", discovery_range_length, 0x0, 0x0, false, 0x2e97de8b586ba06a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif