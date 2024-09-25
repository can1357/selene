#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSI_PROCESS_TUPLE.ProcessHandle", process_handle, 0x0, 0x40, true, 0xb7a5f78f86eb1d95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSI_PROCESS_TUPLE.ProcessReference", process_reference, 0x40, 0x40, true, 0xf5792d18ef33bdcb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmsi_rw_lock_t), "_CMSI_PROCESS_TUPLE.WorkingSetLock", working_set_lock, 0x0, 0x0, false, 0x156cd3edf15f92e9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSI_PROCESS_TUPLE.LockedPageCharges", locked_page_charges, 0x0, 0x0, false, 0xf2eae5cbdf0648cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSI_PROCESS_TUPLE.WorkingSetMinimum", working_set_minimum, 0x0, 0x0, false, 0x1bb92ab698b4b65c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSI_PROCESS_TUPLE.WorkingSetMaximum", working_set_maximum, 0x0, 0x0, false, 0x6b6736f4806b3740)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif