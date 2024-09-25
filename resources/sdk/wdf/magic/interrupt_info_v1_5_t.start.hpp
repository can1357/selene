#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_5.Size", size, 0x0, 0x0, false, 0xe8fac290a55caa59)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_5.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0x1d13f40a8006bdc1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_5.MessageNumber", message_number, 0x0, 0x0, false, 0x237bcd0c007ef7c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_5.Vector", vector, 0x0, 0x0, false, 0xbbe48728213a2915)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_5.Irql", irql, 0x0, 0x0, false, 0x73443f0c921a92ed)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_5.Mode", mode, 0x0, 0x0, false, 0x7684c7404a5c91d3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_5.Polarity", polarity, 0x0, 0x0, false, 0xc2cd6bd452c0c91a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_5.MessageSignaled", message_signaled, 0x0, 0x0, false, 0xfee44806c5150be9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_5.ShareDisposition", share_disposition, 0x0, 0x0, false, 0x9741b8719d986e5c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif