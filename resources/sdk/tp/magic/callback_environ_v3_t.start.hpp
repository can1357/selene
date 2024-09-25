#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TP_CALLBACK_ENVIRON_V3.Version", version, 0x0, 0x20, true, 0xf4461908a1ab7f77)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tp::pool_t*), "_TP_CALLBACK_ENVIRON_V3.Pool", pool, 0x40, 0x40, true, 0xce58ade822fcefab)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tp::cleanup_group_t*), "_TP_CALLBACK_ENVIRON_V3.CleanupGroup", cleanup_group, 0x80, 0x40, true, 0xe7f4414237680d3e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_TP_CALLBACK_ENVIRON_V3.CleanupGroupCancelCallback", cleanup_group_cancel_callback, 0xc0, 0x40, true, 0xfe26275a60b56c71)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TP_CALLBACK_ENVIRON_V3.RaceDll", race_dll, 0x100, 0x40, true, 0xff5fca1111b059a4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_TP_CALLBACK_ENVIRON_V3.ActivationContext", activation_context, 0x140, 0x40, true, 0x30a69bbb773f8663)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ptp_simple_callback_t ), "_TP_CALLBACK_ENVIRON_V3.FinalizationCallback", finalization_callback, 0x180, 0x40, true, 0x81986050903eec0f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TP_CALLBACK_ENVIRON_V3.Flags", flags, 0x1c0, 0x20, true, 0x9df124fb1b023bba)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TP_CALLBACK_ENVIRON_V3.LongFunction", long_function, 0x1c0, 0x1, true, 0xc44d51889cd036ba, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TP_CALLBACK_ENVIRON_V3.Persistent", persistent, 0x1c1, 0x1, true, 0x1632c6df903028d0, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_TP_CALLBACK_ENVIRON_V3.Private", _private, 0x1c2, 0x1e, true, 0xf879ad627591eb90, 30, uint32_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum tp::callback_priority_t), "_TP_CALLBACK_ENVIRON_V3.CallbackPriority", callback_priority, 0x1e0, 0x20, true, 0xb1fa6ca2dd42f4dd)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TP_CALLBACK_ENVIRON_V3.Size", size, 0x200, 0x20, true, 0xb82d0bfd65933a1d)
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
#endif