#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUSPENDCONTEXT.hContext", h_context, 0x0, 0x40, true, 0xee53f77aa7a08def)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SUSPENDCONTEXT.contextSuspendFence", context_suspend_fence, 0x40, 0x40, true, 0xc70035acee15122)
#else
#define _m00
#define _m01
#endif