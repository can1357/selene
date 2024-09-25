#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_BASIC.Size", size, 0x0, 0x40, true, 0x76b9ef310222c70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_BASIC.Format", format, 0x40, 0x20, true, 0x88228a5f6985971d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::activation_context_stack_frame_t), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_BASIC.Frame", frame, 0x80, 0xc0, true, 0x2355bb9b8cf47472)
#else
#define _m00
#define _m01
#define _m02
#endif