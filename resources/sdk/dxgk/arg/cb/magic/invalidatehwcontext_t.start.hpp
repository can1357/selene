#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_INVALIDATEHWCONTEXT.hAdapter", h_adapter, 0x0, 0x40, true, 0x5279152ed1083c96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_INVALIDATEHWCONTEXT.hHwContext", h_hw_context, 0x40, 0x40, true, 0x10d4b49f2675444a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::invalidatehwcontextflags_t), "_DXGKARGCB_INVALIDATEHWCONTEXT.Flags", flags, 0x80, 0x20, true, 0xda84c4d27c34a988)
#else
#define _m00
#define _m01
#define _m02
#endif