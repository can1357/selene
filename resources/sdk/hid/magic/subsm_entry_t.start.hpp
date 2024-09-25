#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hid::subsm_flags_t), "_SUBSM_ENTRY.SubSmFlags", sub_sm_flags, 0x0, 0x20, true, 0x84c268f24bb7450a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hid::state_t), "_SUBSM_ENTRY.SubSmStartState", sub_sm_start_state, 0x20, 0x20, true, 0xad491526bfe77e4b)
#else
#define _m00
#define _m01
#endif