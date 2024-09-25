#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_GROUP_INFO.MaximumProcessorCount", maximum_processor_count, 0x0, 0x8, true, 0x3f359ced208b6a6f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_GROUP_INFO.ActiveProcessorCount", active_processor_count, 0x8, 0x8, true, 0x4d900ed41d13ffce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_GROUP_INFO.ActiveProcessorMask", active_processor_mask, 0x140, 0x40, true, 0xebf68b103e908806)
#else
#define _m00
#define _m01
#define _m02
#endif