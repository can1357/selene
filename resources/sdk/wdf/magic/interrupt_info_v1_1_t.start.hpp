#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_1.Size", size, 0x0, 0x0, false, 0x5e43d073c3086a3e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_INTERRUPT_INFO_V1_1.MessageAddress", message_address, 0x0, 0x0, false, 0x62ab88748f184020)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO_V1_1.TargetProcessorSet", target_processor_set, 0x0, 0x0, false, 0x5664a10feb1ddafc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_1.MessageData", message_data, 0x0, 0x0, false, 0xfc59009bf671dde0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_1.MessageNumber", message_number, 0x0, 0x0, false, 0xdcd9e262855aedb5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO_V1_1.Vector", vector, 0x0, 0x0, false, 0x36ea6463b04da506)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_1.Irql", irql, 0x0, 0x0, false, 0x39a0fd00cbf3fc84)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO_V1_1.Mode", mode, 0x0, 0x0, false, 0xed02fc5a85d647d0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO_V1_1.Polarity", polarity, 0x0, 0x0, false, 0xc410ae8805303efc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_1.MessageSignaled", message_signaled, 0x0, 0x0, false, 0xf66c264ae10d3989)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO_V1_1.ShareDisposition", share_disposition, 0x0, 0x0, false, 0x36f1098b9da650bf)
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