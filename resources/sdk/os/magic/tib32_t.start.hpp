#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.ExceptionList", exception_list, 0x0, 0x20, true, 0xcc6b39afb20f41bc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.StackBase", stack_base, 0x20, 0x20, true, 0x95be32443eec8baf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.StackLimit", stack_limit, 0x40, 0x20, true, 0x556425c45ea2790a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.SubSystemTib", sub_system_tib, 0x60, 0x20, true, 0x28f24cea89e79847)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.FiberData", fiber_data, 0x80, 0x20, true, 0x79806aeb65b60a4d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.Version", version, 0x80, 0x20, true, 0xfacd9efbcebd0493)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.ArbitraryUserPointer", arbitrary_user_pointer, 0xa0, 0x20, true, 0xed375f585cdf197f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_TIB32.Self", self, 0xc0, 0x20, true, 0x311b90531d419d30)
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