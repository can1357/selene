#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ACTIVATION_CONTEXT_STACK64.ActiveFrame", active_frame, 0x0, 0x40, true, 0x5f1a1579083b7ab2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_ACTIVATION_CONTEXT_STACK64.FrameListCache", frame_list_cache, 0x40, 0x80, true, 0x14bc8bc9dc63b5ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK64.Flags", flags, 0xc0, 0x20, true, 0x8310410bf2649c77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK64.NextCookieSequenceNumber", next_cookie_sequence_number, 0xe0, 0x20, true, 0xd23479ea4a9d8408)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_STACK64.StackId", stack_id, 0x100, 0x20, true, 0x1beeb47ba0ae049b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif