#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::activation_context_stack_frame_t*), "_ACTIVATION_CONTEXT_STACK.ActiveFrame", active_frame, 0x0, 0x40, true, 0x2dc2d8f314291175)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ACTIVATION_CONTEXT_STACK.FrameListCache", frame_list_cache, 0x40, 0x80, true, 0xdf7f314b81d21d6a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK.Flags", flags, 0xc0, 0x20, true, 0xd3b11686b09d520a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK.NextCookieSequenceNumber", next_cookie_sequence_number, 0xe0, 0x20, true, 0x1e28b7d1d5a55eeb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK.StackId", stack_id, 0x100, 0x20, true, 0xe5855f4ef1c43192)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif