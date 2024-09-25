#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_WRITE_AGGREGATION_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xa4b03443b5b33a28)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_WRITE_AGGREGATION_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x2de3ae00df83d40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_WRITE_AGGREGATION_DESCRIPTOR.BenefitsFromWriteAggregation", benefits_from_write_aggregation, 0x40, 0x8, true, 0x9f3fd0c4a916eeec)
#else
#define _m00
#define _m01
#define _m02
#endif