#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_7.Size", size, 0x0, 0x20, true, 0xf7f362d100aaef2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_7.TargetProcessorSet", target_processor_set, 0x80, 0x40, true, 0x50a9abbaa2a8e178)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_7.MessageNumber", message_number, 0xe0, 0x20, true, 0x73a5ded99766c3f4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_7.Vector", vector, 0x100, 0x20, true, 0x3e54b0b3c764142a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_7.Irql", irql, 0x120, 0x8, true, 0xcb3e2666120c08f5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_7.Mode", mode, 0x140, 0x20, true, 0xb84374c8d7860a23)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_7.Polarity", polarity, 0x160, 0x20, true, 0xc4a3a3394eb651aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_7.MessageSignaled", message_signaled, 0x180, 0x8, true, 0x6b0a6ccf25eab39c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_7.ShareDisposition", share_disposition, 0x188, 0x8, true, 0x36f886055a5c5190)
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