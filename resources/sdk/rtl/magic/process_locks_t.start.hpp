#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_LOCKS.NumberOfLocks", number_of_locks, 0x0, 0x20, true, 0xd017793789c3ae9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::process_lock_information_t, 1>), "_RTL_PROCESS_LOCKS.Locks", locks, 0x40, 0x80, true, 0xa19d93cb333d631b)
#else
#define _m00
#define _m01
#endif