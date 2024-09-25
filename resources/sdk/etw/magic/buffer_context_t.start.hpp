#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_BUFFER_CONTEXT.ProcessorNumber", processor_number, 0x0, 0x8, true, 0x6b5409095189f3c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_BUFFER_CONTEXT.Alignment", alignment, 0x8, 0x8, true, 0xe0231a595c5aabdc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_BUFFER_CONTEXT.ProcessorIndex", processor_index, 0x0, 0x10, true, 0xd400ced07413563a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_BUFFER_CONTEXT.LoggerId", logger_id, 0x10, 0x10, true, 0xc1297da437bac37a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif