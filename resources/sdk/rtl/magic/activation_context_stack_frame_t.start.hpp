#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::activation_context_stack_frame_t*), "_RTL_ACTIVATION_CONTEXT_STACK_FRAME.Previous", previous, 0x0, 0x40, true, 0x595c8764b1867469)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_RTL_ACTIVATION_CONTEXT_STACK_FRAME.ActivationContext", activation_context, 0x40, 0x40, true, 0x540c7a61f44a1a5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ACTIVATION_CONTEXT_STACK_FRAME.Flags", flags, 0x80, 0x20, true, 0xb6051f376cbbac82)
#else
#define _m00
#define _m01
#define _m02
#endif