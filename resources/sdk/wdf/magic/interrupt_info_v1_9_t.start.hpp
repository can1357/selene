#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_9.Size", size, 0x0, 0x0, false, 0xe75abf98bced74d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_9.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0xd7a44f09c69fbec5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_9.MessageNumber", message_number, 0x0, 0x0, false, 0x58ff314df00ea72a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_9.Vector", vector, 0x0, 0x0, false, 0x6b112803da8829f3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_9.Irql", irql, 0x0, 0x0, false, 0x1f8bb75ec45c2fff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_9.Mode", mode, 0x0, 0x0, false, 0xbafefaf2ed9926b6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_9.Polarity", polarity, 0x0, 0x0, false, 0x22bd32a73795d86e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_9.MessageSignaled", message_signaled, 0x0, 0x0, false, 0xb1a8543b52a7bd59)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_9.ShareDisposition", share_disposition, 0x0, 0x0, false, 0x45bf75d8a6555d7d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_INTERRUPT_INFO_V1_9.Group", group, 0x0, 0x0, false, 0x9933921327dbf7bb)
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