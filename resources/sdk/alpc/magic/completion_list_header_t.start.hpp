#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST_HEADER.StartMagic", start_magic, 0x0, 0x40, true, 0xadecb30803e4083d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.TotalSize", total_size, 0x40, 0x20, true, 0x6aa8ec98da3ac80e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.ListOffset", list_offset, 0x60, 0x20, true, 0xb6400110c26ac89c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.ListSize", list_size, 0x80, 0x20, true, 0x17675f79cbf01f54)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.BitmapOffset", bitmap_offset, 0xa0, 0x20, true, 0x42d46eae12deaee7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.BitmapSize", bitmap_size, 0xc0, 0x20, true, 0x17730c85dacd2f7a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.DataOffset", data_offset, 0xe0, 0x20, true, 0xd7ceacfd0ec0b660)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.DataSize", data_size, 0x100, 0x20, true, 0x26b636190650136a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.AttributeFlags", attribute_flags, 0x120, 0x20, true, 0x9864a885eb7a2da7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST_HEADER.AttributeSize", attribute_size, 0x140, 0x20, true, 0x86575191a0d2d8bb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct alpc::completion_list_state_t, volatile struct alpc::completion_list_state_t>), "_ALPC_COMPLETION_LIST_HEADER.State", state, 0x200, 0x40, true, 0xb361477ec98af5c9)
#define _m11 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_ALPC_COMPLETION_LIST_HEADER.LastMessageId", last_message_id, 0x240, 0x20, true, 0x5c94cc7a838ef177, 32, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_ALPC_COMPLETION_LIST_HEADER.LastCallbackId", last_callback_id, 0x260, 0x20, true, 0x888b02cd2d606c24, 32, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_ALPC_COMPLETION_LIST_HEADER.PostCount", post_count, 0x400, 0x20, true, 0xdd5998adb7b6bfc9, 32, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_ALPC_COMPLETION_LIST_HEADER.ReturnCount", return_count, 0x600, 0x20, true, 0x4eff48e2afc0a822, 32, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_ALPC_COMPLETION_LIST_HEADER.LogSequenceNumber", log_sequence_number, 0x800, 0x20, true, 0x6750cf7c1f04fbe0, 32, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "_ALPC_COMPLETION_LIST_HEADER.UserLock", user_lock, 0xa00, 0x40, true, 0xb67b05bfe41f05e3)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST_HEADER.EndMagic", end_magic, 0xa40, 0x40, true, 0xada882f5a33f25f3)
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
#endif