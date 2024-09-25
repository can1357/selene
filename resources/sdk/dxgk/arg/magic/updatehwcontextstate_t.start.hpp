#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_UPDATEHWCONTEXTSTATE.hHwContext", h_hw_context, 0x0, 0x40, true, 0xe8dc5c67c4a75fc7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_UPDATEHWCONTEXTSTATE.ContextSwitchFence", context_switch_fence, 0x40, 0x40, true, 0x49893a83f5959f59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_UPDATEHWCONTEXTSTATE.Priority", priority, 0x80, 0x20, true, 0xd147247654e228fe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::updatehwcontextstate_flags_t), "_DXGKARG_UPDATEHWCONTEXTSTATE.Flags", flags, 0xa0, 0x20, true, 0xc40b8263d097748c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif