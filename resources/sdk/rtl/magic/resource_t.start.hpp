#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "_RTL_RESOURCE.CriticalSection", critical_section, 0x0, 0x40, true, 0xd4d3d7bdc503a8ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RESOURCE.SharedSemaphore", shared_semaphore, 0x140, 0x40, true, 0x700f4600270f2bf1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_RTL_RESOURCE.NumberOfWaitingShared", number_of_waiting_shared, 0x180, 0x20, true, 0xc7b2da17a8f3423c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RESOURCE.ExclusiveSemaphore", exclusive_semaphore, 0x1c0, 0x40, true, 0x3b80d35ca129641b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_RTL_RESOURCE.NumberOfWaitingExclusive", number_of_waiting_exclusive, 0x200, 0x20, true, 0xac18b9d912d20e8a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RTL_RESOURCE.NumberOfActive", number_of_active, 0x220, 0x20, true, 0x5796b707254b81ea)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RESOURCE.ExclusiveOwnerThread", exclusive_owner_thread, 0x240, 0x40, true, 0xd7ab518b53eecefd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RESOURCE.Flags", flags, 0x280, 0x20, true, 0x4559678bac7d5a4f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_debug_t*), "_RTL_RESOURCE.DebugInfo", debug_info, 0x2c0, 0x40, true, 0xb8e25dbca389d22a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif