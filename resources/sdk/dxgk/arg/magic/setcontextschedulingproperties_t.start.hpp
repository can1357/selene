#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.hContext", h_context, 0x0, 0x40, true, 0x96dba39aa445f200)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::scheduling_priority_band_t), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.priorityBand", priority_band, 0x40, 0x20, true, 0xaec3d59d6af40d42)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.realtimeBandPriorityLevel", realtime_band_priority_level, 0x60, 0x20, true, 0xec0fe7e8003863f4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.inProcessPriority", in_process_priority, 0x80, 0x20, true, 0x4df563c32024cde9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.quantum", quantum, 0xc0, 0x40, true, 0x9ca5127d06f21f4e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.gracePeriodSamePriority", grace_period_same_priority, 0x100, 0x40, true, 0x7bc54fcc8c4eb21d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.gracePeriodLowerPriority", grace_period_lower_priority, 0x140, 0x40, true, 0x73e5e95d041c16eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif