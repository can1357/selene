#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_PROCESSOR_SPEED_INFO.ProcessorSpeed", processor_speed, 0x0, 0x20, true, 0x5a75bd805e6b1633)
#else
#define _m00
#endif