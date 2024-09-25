#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_13.Size", size, 0x0, 0x0, false, 0xacfd41d38e3859d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_13.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0x70a839a64b8d6495)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_13.MessageNumber", message_number, 0x0, 0x0, false, 0x9f25a4cf2114ec0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_13.Vector", vector, 0x0, 0x0, false, 0x9cfa313857e40649)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_13.Irql", irql, 0x0, 0x0, false, 0x93dd8181ac6cad3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_13.Mode", mode, 0x0, 0x0, false, 0x2e9ed15d264aaafc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_13.Polarity", polarity, 0x0, 0x0, false, 0x2e04beb0ca64a249)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_13.MessageSignaled", message_signaled, 0x0, 0x0, false, 0x6a95cb82e84fa511)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_13.ShareDisposition", share_disposition, 0x0, 0x0, false, 0x384913e3f5034544)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_INTERRUPT_INFO_V1_13.Group", group, 0x0, 0x0, false, 0xd345d87cca2a0c3e)
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