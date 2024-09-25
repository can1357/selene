#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVSTATE.fl", fl, 0x0, 0x20, true, 0x82e21992f7a3d409)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagVSTATE.bSystemStable", b_system_stable, 0x20, 0x20, true, 0xe292bd69fffd2ada)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVSTATE.ulRandomSeed", ul_random_seed, 0x40, 0x20, true, 0xeaa0a9851fb50db0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVSTATE.ulFailureMask", ul_failure_mask, 0x60, 0x20, true, 0x51484f131ef67e80)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVSTATE.ulDebugLevel", ul_debug_level, 0x80, 0x20, true, 0x6fb19c7171a9938f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::hsemaphore_t*), "tagVSTATE.hsemPoolTracker", hsem_pool_tracker, 0xc0, 0x40, true, 0x1770f06c0e6e2824)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "tagVSTATE.lePoolTrackerHead", le_pool_tracker_head, 0x100, 0x80, true, 0xeb01fa80792541aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif