#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_15.Size", size, 0x0, 0x0, false, 0xb2d8bff87d800fd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_15.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0xe85d9b58e9c6b09f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_15.MessageNumber", message_number, 0x0, 0x0, false, 0xadc2462a42953f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_15.Vector", vector, 0x0, 0x0, false, 0x3af7e3a1316448c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_15.Irql", irql, 0x0, 0x0, false, 0xa3906d7ffe3bfd4b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_15.Mode", mode, 0x0, 0x0, false, 0x4bf0ad0cce148682)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_15.Polarity", polarity, 0x0, 0x0, false, 0xb6f47a8725c0bd7c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_15.MessageSignaled", message_signaled, 0x0, 0x0, false, 0x21a4f813e44cb800)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_15.ShareDisposition", share_disposition, 0x0, 0x0, false, 0x293ddc16f7cff260)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_INTERRUPT_INFO_V1_15.Group", group, 0x0, 0x0, false, 0x9b9180d5672ac700)
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