#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_KTRANSITION_STACK.Stack", stack, 0x0, 0x0, false, 0xba1404cb00f5a9b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 480>), "_KTRANSITION_STACK.IstStack", ist_stack, 0x0, 0x0, false, 0x35af1c0828f06562)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kist_base_frame_t), "_KTRANSITION_STACK.IstFrame", ist_frame, 0x0, 0x0, false, 0x3e881bbe236f7ff7)
#else
#define _m00
#define _m01
#define _m02
#endif