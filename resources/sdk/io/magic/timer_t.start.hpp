#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IO_TIMER.Type", type, 0x0, 0x10, true, 0x9a67473641467cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IO_TIMER.TimerFlag", timer_flag, 0x10, 0x10, true, 0x38a5ea4d6607fe4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IO_TIMER.TimerList", timer_list, 0x40, 0x80, true, 0x65cd4a6ca1d1420a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, void*)>*), "_IO_TIMER.TimerRoutine", timer_routine, 0xc0, 0x40, true, 0x57a8bec2e1415857)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_TIMER.Context", context, 0x100, 0x40, true, 0xb19b8c2132ff06af)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_TIMER.DeviceObject", device_object, 0x140, 0x40, true, 0x63e567e5bdc301f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif