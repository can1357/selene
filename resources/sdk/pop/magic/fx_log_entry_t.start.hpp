#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_LOG_ENTRY.Timestamp", timestamp, 0x0, 0x40, true, 0x63c56521a67a2781)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_LOG_ENTRY.Operation", operation, 0x40, 0x8, true, 0xd97114c0b40fee96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_LOG_ENTRY.Component", component, 0x48, 0x8, true, 0xcbd167f7c326d2f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_POP_FX_LOG_ENTRY.Processor", processor, 0x50, 0x10, true, 0x82a8843c4110a3b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_POP_FX_LOG_ENTRY.Process", process, 0x60, 0x10, true, 0x33cd7d3042af0064)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_POP_FX_LOG_ENTRY.Thread", thread, 0x70, 0x10, true, 0x89cb59163960a639)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_LOG_ENTRY.Information", information, 0x80, 0x40, true, 0x86c4059dc8f65562)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif