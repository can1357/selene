#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(void*)>*), "_DRIVER_VERIFIER_THUNK_PAIRS.PristineRoutine", pristine_routine, 0x0, 0x40, true, 0xe208f2c64d772e2a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(void*)>*), "_DRIVER_VERIFIER_THUNK_PAIRS.NewRoutine", new_routine, 0x40, 0x40, true, 0xe3f5c28e1d5efc31)
#else
#define _m00
#define _m01
#endif