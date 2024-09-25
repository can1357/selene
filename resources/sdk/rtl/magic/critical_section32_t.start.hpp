#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION32.DebugInfo", debug_info, 0x0, 0x20, true, 0x8a45b962a17e48b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_CRITICAL_SECTION32.LockCount", lock_count, 0x20, 0x20, true, 0x952078682b362d9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_CRITICAL_SECTION32.RecursionCount", recursion_count, 0x40, 0x20, true, 0x9159a7c097ffa79e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION32.OwningThread", owning_thread, 0x60, 0x20, true, 0x5b0e5a4d4cd3aaa4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION32.LockSemaphore", lock_semaphore, 0x80, 0x20, true, 0x2ee1276038d1e5b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION32.SpinCount", spin_count, 0xa0, 0x20, true, 0x498b3e82b8a5aa98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif