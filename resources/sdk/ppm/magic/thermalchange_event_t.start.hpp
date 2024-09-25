#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_THERMALCHANGE_EVENT.ThermalConstraint", thermal_constraint, 0x0, 0x20, true, 0xab57164cd070963)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_THERMALCHANGE_EVENT.Processors", processors, 0x40, 0x40, true, 0xc9581492cf2a3ca8)
#else
#define _m00
#define _m01
#endif