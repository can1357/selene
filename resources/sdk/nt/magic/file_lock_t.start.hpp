#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pcomplete_lock_irp_routine_t ), "_FILE_LOCK.CompleteLockIrpRoutine", complete_lock_irp_routine, 0x0, 0x40, true, 0xd0d4bb7412845d96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(punlock_routine_t ), "_FILE_LOCK.UnlockRoutine", unlock_routine, 0x40, 0x40, true, 0xcb18005646ece692)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_LOCK.FastIoIsQuestionable", fast_io_is_questionable, 0x80, 0x8, true, 0x8efef2f799e059e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_FILE_LOCK.SpareC", spare_c, 0x88, 0x18, true, 0xd5fcbdc589782b4e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_LOCK.LockInformation", lock_information, 0xc0, 0x40, true, 0xfc0ee0abd35ba199)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_lock_info_t), "_FILE_LOCK.LastReturnedLockInfo", last_returned_lock_info, 0x100, 0x80, true, 0x7d4e56039cf2e8ca)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_LOCK.LastReturnedLock", last_returned_lock, 0x280, 0x40, true, 0xcc76e10d1d8ff6d0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_FILE_LOCK.LockRequestsInProgress", lock_requests_in_progress, 0x2c0, 0x20, true, 0x88e3bcedddc22882)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif