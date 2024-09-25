#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_17.Size", size, 0x0, 0x0, false, 0xb24ad4f5635a27ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_17.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0xfcba07f0348955e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_17.MessageNumber", message_number, 0x0, 0x0, false, 0x42d7790c7e78dd5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_17.Vector", vector, 0x0, 0x0, false, 0x9336a9fdc09929ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_17.Irql", irql, 0x0, 0x0, false, 0x86ae9437c05295e7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_17.Mode", mode, 0x0, 0x0, false, 0xd890e22067472a17)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_17.Polarity", polarity, 0x0, 0x0, false, 0xbb6095047360660c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_17.MessageSignaled", message_signaled, 0x0, 0x0, false, 0x6c075778bfb85fe3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_17.ShareDisposition", share_disposition, 0x0, 0x0, false, 0xbe944c144d1b1fad)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_INTERRUPT_INFO_V1_17.Group", group, 0x0, 0x0, false, 0x2e2682e55d7f6a43)
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
#define _m09
#endif