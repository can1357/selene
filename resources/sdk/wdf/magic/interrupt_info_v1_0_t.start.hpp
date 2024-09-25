#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_0.Size", size, 0x0, 0x0, false, 0xfb96bb9f8b452740)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_INTERRUPT_INFO_V1_0.MessageAddress", message_address, 0x0, 0x0, false, 0x96197be5f2dfb1bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_0.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0xd30cc39d1b5ae987)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_0.MessageData", message_data, 0x0, 0x0, false, 0xcecf760c521b06d9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_0.MessageNumber", message_number, 0x0, 0x0, false, 0x1d0918a180668ba7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_0.Vector", vector, 0x0, 0x0, false, 0x49dbaff63c973737)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_0.Irql", irql, 0x0, 0x0, false, 0xfbe5b02e584522a4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_0.Mode", mode, 0x0, 0x0, false, 0xd90a69d3612da92d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_0.Polarity", polarity, 0x0, 0x0, false, 0x904b614ffba6aa0d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_0.MessageSignaled", message_signaled, 0x0, 0x0, false, 0x37c1e1a8cbb17084)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_0.ShareDisposition", share_disposition, 0x0, 0x0, false, 0xb550ecb19739d92d)
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
#define _m10
#endif