#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::memory_partition_charge_sharing_type_t), "_MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES.Type", type, 0x0, 0x0, false, 0xb91e04cb2456468)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES.CurrentChargeInPages", current_charge_in_pages, 0x0, 0x0, false, 0xc1110e6b1cd3ac74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES.PeakChargeInPages", peak_charge_in_pages, 0x0, 0x0, false, 0x933b730009182203)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES.ChargeLimitInPages", charge_limit_in_pages, 0x0, 0x0, false, 0x972b915090d12b78)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES.ChargeFailures", charge_failures, 0x0, 0x0, false, 0x34ee040890c67d8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif