#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FIBER.FiberData", fiber_data, 0x0, 0x40, true, 0xf158ad14dbd451d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_registration_record_t*), "_FIBER.ExceptionList", exception_list, 0x40, 0x40, true, 0xda783fe98c350257)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FIBER.StackBase", stack_base, 0x80, 0x40, true, 0x28aedd304877b0d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FIBER.StackLimit", stack_limit, 0xc0, 0x40, true, 0xaab8e20dd60ea127)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FIBER.DeallocationStack", deallocation_stack, 0x100, 0x40, true, 0xbff53a0185cd9fd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_FIBER.FiberContext", fiber_context, 0x180, 0x80, true, 0x78ca2cc2f39b5aa1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wx86tib_t*), "_FIBER.Wx86Tib", wx86_tib, 0x2800, 0x40, true, 0xa73e57baba70d8a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_stack_t*), "_FIBER.ActivationContextStackPointer", activation_context_stack_pointer, 0x2840, 0x40, true, 0x4d12db13ef4a9389)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FIBER.FlsData", fls_data, 0x2880, 0x40, true, 0x4837baeda45307ef)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIBER.GuaranteedStackBytes", guaranteed_stack_bytes, 0x28c0, 0x20, true, 0x11d18a94f0d5493b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FIBER.TebFlags", teb_flags, 0x28e0, 0x10, true, 0xbec1be42722bbca)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FIBER.FiberCookie", fiber_cookie, 0x2900, 0x40, true, 0x6fbaae04be8dbfbb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif