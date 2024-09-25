#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.SwitchSelectorBit0", switch_selector_bit0, 0x0, 0x0, false, 0xe41289900793e76, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.ActiveListBit0", active_list_bit0, 0x0, 0x0, false, 0x5b45673fea0ce4a8, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.OverflowActiveListBit0", overflow_active_list_bit0, 0x0, 0x0, false, 0x36c5ffcbd87be271, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.SwitchSelectorBit1", switch_selector_bit1, 0x0, 0x0, false, 0x1a5223409c8b1ac9, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.ActiveListBit1", active_list_bit1, 0x0, 0x0, false, 0x9cb6b6fd02b4cf61, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.OverflowActiveListBit1", overflow_active_list_bit1, 0x0, 0x0, false, 0x1d9f7765be55cf74, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.ReaderDidTheSwitch", reader_did_the_switch, 0x0, 0x0, false, 0x9778a57af6f6d985, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.ReaderBusy", reader_busy, 0x0, 0x0, false, 0x49560095dc216265, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.UpdateReady", update_ready, 0x0, 0x0, false, 0xa641898f8dd66e5c, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_TRIPLE_LIST.ControlBits.OverflowUpdateReady", overflow_update_ready, 0x0, 0x0, false, 0x45e26216565af65e, 1, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_control_bits_t), "_TRIPLE_LIST.ControlBits", control_bits, 0x0, 0x0, false, 0x11b17b9c2e7ad312)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_TRIPLE_LIST.CombinedControlBits", combined_control_bits, 0x0, 0x0, false, 0x6af42ccac661dcd7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::triple_list_entry_t), "_TRIPLE_LIST.Head", head, 0x0, 0x0, false, 0x92b8f2f1878f7fbe)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::triple_list_entry_t*, 3>), "_TRIPLE_LIST.Tail", tail, 0x0, 0x0, false, 0xfdf42dc27431beea)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptriple_list_remove_callback_routine_t ), "_TRIPLE_LIST.RemoveCallback", remove_callback, 0x0, 0x0, false, 0x978a7d052c7a3f08)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TRIPLE_LIST.RemoveContext", remove_context, 0x0, 0x0, false, 0x7ed710e51e2a8cf8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::triple_list_entry_t*), "_TRIPLE_LIST.PendingHead", pending_head, 0x0, 0x0, false, 0x8ac0afe82cf642f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::triple_list_entry_t**), "_TRIPLE_LIST.PendingTailPtr", pending_tail_ptr, 0x0, 0x0, false, 0xcb683f8c2225c7c1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIPLE_LIST.PendingListIndex", pending_list_index, 0x0, 0x0, false, 0x24c5614aba65542e)
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
#define _m16
#define _m17
#define _m18
#endif