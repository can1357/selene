#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RTL_BARRIER.Barrier", barrier, 0x0, 0x20, true, 0x62accc2745851e9d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_BARRIER.LeftBarrier", left_barrier, 0x20, 0x20, true, 0xb1a671a457edf803)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_RTL_BARRIER.WaitEvent", wait_event, 0x40, 0x80, true, 0x7d501a866c6a6fd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_BARRIER.TotalProcessors", total_processors, 0xc0, 0x20, true, 0xb8d26dcae05ce029)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_BARRIER.Spins", spins, 0xe0, 0x20, true, 0x4823658dd242eb0b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_dummyreservedstructname_t), "_RTL_BARRIER.DUMMYRESERVEDSTRUCTNAME", dummyreservedstructname, 0x0, 0x0, true, 0x74d52c844f0cefd2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif