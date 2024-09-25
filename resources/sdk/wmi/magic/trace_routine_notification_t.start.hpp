#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TRACE_ROUTINE_NOTIFICATION.Version", version, 0x0, 0x20, true, 0xfea2bfafa1a14cf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_TRACE_ROUTINE_NOTIFICATION.RoutineGroup", routine_group, 0x40, 0x40, true, 0x194a49f27b336fd8)
#else
#define _m00
#define _m01
#endif