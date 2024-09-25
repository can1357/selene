#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_registration_record_t*), "_NT_TIB.ExceptionList", exception_list, 0x0, 0x40, true, 0x641a2910b654d1d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NT_TIB.StackBase", stack_base, 0x40, 0x40, true, 0x6141941ad746d18e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NT_TIB.StackLimit", stack_limit, 0x80, 0x40, true, 0xa06c3b1182b3c55)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NT_TIB.SubSystemTib", sub_system_tib, 0xc0, 0x40, true, 0x127cea30d7c9e958)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NT_TIB.FiberData", fiber_data, 0x100, 0x40, true, 0x435c7824f8df664e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB.Version", version, 0x100, 0x20, true, 0xa5f2c089789710bb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NT_TIB.ArbitraryUserPointer", arbitrary_user_pointer, 0x140, 0x40, true, 0x1a74b295f7d43aef)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct os::tib_t*), "_NT_TIB.Self", self, 0x180, 0x40, true, 0xd24733147c93939c)
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