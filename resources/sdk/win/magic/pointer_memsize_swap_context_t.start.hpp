#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "POINTER_MEMSIZE_SWAP_CONTEXT.pStubMsg", p_stub_msg, 0x0, 0x40, true, 0xb4566aad924ad998)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "POINTER_MEMSIZE_SWAP_CONTEXT.MemorySave", memory_save, 0x40, 0x20, true, 0x7b58b2401297955c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "POINTER_MEMSIZE_SWAP_CONTEXT.pBufferSave", p_buffer_save, 0x80, 0x40, true, 0xa742c5fc6d26e4e2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "POINTER_MEMSIZE_SWAP_CONTEXT.DoSwap", do_swap, 0xc0, 0x8, true, 0x7237fc9b19321feb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif