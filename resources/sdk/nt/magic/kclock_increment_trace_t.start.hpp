#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_INCREMENT_TRACE.ActualIncrement", actual_increment, 0x0, 0x0, false, 0x2d7ab9032a599d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_INCREMENT_TRACE.RequestedIncrement", requested_increment, 0x0, 0x0, false, 0xfc788def10ba60ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_INCREMENT_TRACE.InterruptTime", interrupt_time, 0x0, 0x0, false, 0x4e124aaf81b8cf0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_INCREMENT_TRACE.PerformanceCounter", performance_counter, 0x0, 0x0, false, 0x679b9a00deb08b68)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KCLOCK_INCREMENT_TRACE.OneShot", one_shot, 0x0, 0x0, false, 0x15691569a67cae7a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif