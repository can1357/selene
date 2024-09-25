#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.Thread", thread, 0x0, 0x40, true, 0xb6a72a664d5575e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.ThCallbackStack", th_callback_stack, 0x40, 0x20, true, 0x134c7f448f251c33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.ThCallbackBStore", th_callback_b_store, 0x60, 0x20, true, 0x9583123f8166a4a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.NextCallback", next_callback, 0x80, 0x20, true, 0xe18e8e4fec699db8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.FramePointer", frame_pointer, 0xa0, 0x20, true, 0xb1b2af194ba9d53c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.KiCallUserMode", ki_call_user_mode, 0xc0, 0x40, true, 0xb1d6593e955740b3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.KeUserCallbackDispatcher", ke_user_callback_dispatcher, 0x100, 0x40, true, 0x55d6d9bdae915beb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.SystemRangeStart", system_range_start, 0x140, 0x40, true, 0xa915548a47f7c1ba)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.KiUserExceptionDispatcher", ki_user_exception_dispatcher, 0x180, 0x40, true, 0x6aeb3df4705b1679)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.StackBase", stack_base, 0x1c0, 0x40, true, 0xa67282caed9e77dd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.StackLimit", stack_limit, 0x200, 0x40, true, 0x35cedb6983b30d86)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.BuildVersion", build_version, 0x240, 0x20, true, 0xc68f29b2cc67e44c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.RetpolineStubFunctionTableSize", retpoline_stub_function_table_size, 0x260, 0x20, true, 0x86ad6346341bcdf7)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDHELP64.RetpolineStubFunctionTable", retpoline_stub_function_table, 0x280, 0x40, true, 0x3b630acb553d1e4f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.RetpolineStubOffset", retpoline_stub_offset, 0x2c0, 0x20, true, 0xf3b89b45ab07e75f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDHELP64.RetpolineStubSize", retpoline_stub_size, 0x2e0, 0x20, true, 0x68394fe9f165d04e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif