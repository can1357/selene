#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "POINTER_BUFFER_SWAP_CONTEXT.pStubMsg", p_stub_msg, 0x0, 0x40, true, 0x655dcbeaff34e78e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "POINTER_BUFFER_SWAP_CONTEXT.pBufferSave", p_buffer_save, 0x40, 0x40, true, 0xe6199852263d8db5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "POINTER_BUFFER_SWAP_CONTEXT.DoSwap", do_swap, 0x80, 0x8, true, 0xa3437e051e233dc8)
#else
#define _m00
#define _m01
#define _m02
#endif