#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_INTERRUPT_INFORMATION.InitialTime", initial_time, 0x0, 0x40, true, 0x11583d4ebfdfdd5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_INTERRUPT_INFORMATION.ServiceRoutine", service_routine, 0x40, 0x40, true, 0xf28b3894708cde0a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_INTERRUPT_INFORMATION.ReturnValue", return_value, 0x80, 0x8, true, 0xe929fc9d6ce26f67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_INTERRUPT_INFORMATION.Vector", vector, 0x88, 0x10, true, 0xa87e865d78383179)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif