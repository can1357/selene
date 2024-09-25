#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_11.Size", size, 0x0, 0x0, false, 0xa4a072eb0167588f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_11.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0x56e65a917d800d94)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_11.MessageNumber", message_number, 0x0, 0x0, false, 0x32553ec180b73bc6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_11.Vector", vector, 0x0, 0x0, false, 0x90177e6725d1de19)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_11.Irql", irql, 0x0, 0x0, false, 0x9ca5269424a44dd1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_11.Mode", mode, 0x0, 0x0, false, 0xd059af044f681f17)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_11.Polarity", polarity, 0x0, 0x0, false, 0x6b361ed9d2057114)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_11.MessageSignaled", message_signaled, 0x0, 0x0, false, 0x32491799ad525251)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_11.ShareDisposition", share_disposition, 0x0, 0x0, false, 0x60be6f2cdd2a3870)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_INTERRUPT_INFO_V1_11.Group", group, 0x0, 0x0, false, 0xbc64b5dc59421215)
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