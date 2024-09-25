#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK32.ActiveFrame", active_frame, 0x0, 0x20, true, 0x8d8f829c9d493727)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_ACTIVATION_CONTEXT_STACK32.FrameListCache", frame_list_cache, 0x20, 0x40, true, 0x63ac88f107a2a516)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK32.Flags", flags, 0x60, 0x20, true, 0x7550656998e5806d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK32.NextCookieSequenceNumber", next_cookie_sequence_number, 0x80, 0x20, true, 0xe932cc561da3dc55)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK32.StackId", stack_id, 0xa0, 0x20, true, 0x2be87558ec294a4a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif