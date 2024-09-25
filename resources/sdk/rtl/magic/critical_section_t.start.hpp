#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_debug_t*), "_RTL_CRITICAL_SECTION.DebugInfo", debug_info, 0x0, 0x40, true, 0x4461d9f6e7df9430)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_CRITICAL_SECTION.LockCount", lock_count, 0x40, 0x20, true, 0x3a62145cf3272b7c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_CRITICAL_SECTION.RecursionCount", recursion_count, 0x60, 0x20, true, 0x497b55d761fed3ae)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CRITICAL_SECTION.OwningThread", owning_thread, 0x80, 0x40, true, 0xa87c957ee3ed1ff)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CRITICAL_SECTION.LockSemaphore", lock_semaphore, 0xc0, 0x40, true, 0x9253f3865280b7cf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CRITICAL_SECTION.SpinCount", spin_count, 0x100, 0x40, true, 0x60155aa13dc5db34)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif