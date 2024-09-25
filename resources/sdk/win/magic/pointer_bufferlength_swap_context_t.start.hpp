#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "POINTER_BUFFERLENGTH_SWAP_CONTEXT.pStubMsg", p_stub_msg, 0x0, 0x40, true, 0xea7c841c693e5b6b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "POINTER_BUFFERLENGTH_SWAP_CONTEXT.LengthSave", length_save, 0x40, 0x20, true, 0x2dfe1a093328c6be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "POINTER_BUFFERLENGTH_SWAP_CONTEXT.DoSwap", do_swap, 0x60, 0x8, true, 0x5f489974cbc148c1)
#else
#define _m00
#define _m01
#define _m02
#endif