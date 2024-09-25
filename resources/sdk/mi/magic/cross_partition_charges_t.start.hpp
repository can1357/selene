#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_CROSS_PARTITION_CHARGES.CurrentCharges", current_charges, 0x0, 0x40, true, 0x2e84c8f41f316626)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_CROSS_PARTITION_CHARGES.ChargeFailures", charge_failures, 0x40, 0x40, true, 0x92f14ca4ef9e32a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_CROSS_PARTITION_CHARGES.ChargePeak", charge_peak, 0x80, 0x40, true, 0xcae7ca957f42fb7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_CROSS_PARTITION_CHARGES.ChargeMinimum", charge_minimum, 0xc0, 0x40, true, 0x57bbf34753147793)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_CROSS_PARTITION_CHARGES.ChargeMaximum", charge_maximum, 0x0, 0x0, false, 0x841f617989d1d596)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_CROSS_PARTITION_CHARGES.MaximumAllowed", maximum_allowed, 0x0, 0x0, false, 0x4542ba5b6c619344)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif