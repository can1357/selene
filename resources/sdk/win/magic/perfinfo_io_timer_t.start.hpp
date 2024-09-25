#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_IO_TIMER.DeviceObject", device_object, 0x0, 0x40, true, 0x4c5dfee330a9e653)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_IO_TIMER.RoutineAddress", routine_address, 0x40, 0x40, true, 0xb524ef99588ac8d6)
#else
#define _m00
#define _m01
#endif