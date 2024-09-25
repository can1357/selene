#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "SharedOrExclusiveLock._sharedLockStorage", shared_lock_storage, 0x80, 0x40, true, 0x656d7a7219d8905a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "SharedOrExclusiveLock._exclusiveLockStorage", exclusive_lock_storage, 0xc0, 0x40, true, 0xa80d2cba097c6ca)
#else
#define _m00
#define _m01
#endif