#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_ACTIVATION_CONTEXT_BASIC_INFORMATION.ActivationContext", activation_context, 0x0, 0x40, true, 0x333f18d65d4b6395)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_BASIC_INFORMATION.hActCtx", h_act_ctx, 0x0, 0x40, true, 0x6a716c03d74d0233)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_BASIC_INFORMATION.Flags", flags, 0x40, 0x20, true, 0xe1ae412742c84da5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_BASIC_INFORMATION.dwFlags", dw_flags, 0x40, 0x20, true, 0x972a1397dc65f29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif