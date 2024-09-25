#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_MSR.Msr", msr, 0x0, 0x20, true, 0xf87d37ad4a1db124)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_MSR.DataValueLow", data_value_low, 0x20, 0x20, true, 0x223bb89e403b9868)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_MSR.DataValueHigh", data_value_high, 0x40, 0x20, true, 0x23720c5e6a2a93db)
#else
#define _m00
#define _m01
#define _m02
#endif