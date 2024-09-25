#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.ExceptionList", exception_list, 0x0, 0x40, true, 0xd6161128cf72916d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.StackBase", stack_base, 0x40, 0x40, true, 0x5606bbe7046dc01a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.StackLimit", stack_limit, 0x80, 0x40, true, 0x2f89c69d459ca573)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.SubSystemTib", sub_system_tib, 0xc0, 0x40, true, 0xd10ee17eac0242df)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.FiberData", fiber_data, 0x100, 0x40, true, 0x3b3287fcfdb6a06d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB64.Version", version, 0x100, 0x20, true, 0x80058872e5c318b8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.ArbitraryUserPointer", arbitrary_user_pointer, 0x140, 0x40, true, 0x6238d675270714eb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_TIB64.Self", self, 0x180, 0x40, true, 0xf2484992c3e77fca)
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