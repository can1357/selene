#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_WS_WATCH_INFORMATION.FaultingPc", faulting_pc, 0x0, 0x40, true, 0xab029be692677104)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_WS_WATCH_INFORMATION.FaultingVa", faulting_va, 0x40, 0x40, true, 0x6541b9c4d3b0a219)
#else
#define _m00
#define _m01
#endif