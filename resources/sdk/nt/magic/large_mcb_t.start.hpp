#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t*), "_LARGE_MCB.GuardedMutex", guarded_mutex, 0x0, 0x40, true, 0xff063e2b6586275d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::base_mcb_t), "_LARGE_MCB.BaseMcb", base_mcb, 0x40, 0xc0, true, 0xeb7a392c1e4bdf93)
#else
#define _m00
#define _m01
#endif