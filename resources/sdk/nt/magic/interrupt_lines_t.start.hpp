#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_INTERRUPT_LINES.ListEntry", list_entry, 0x0, 0x0, false, 0xde63c39f0582dd54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINES.ControllerId", controller_id, 0x0, 0x0, false, 0xa2170480ab4060b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_INTERRUPT_LINES.MinLine", min_line, 0x0, 0x0, false, 0x414b8100c52f7c5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_INTERRUPT_LINES.MaxLine", max_line, 0x0, 0x0, false, 0xd83952c05495a880)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINES.GsiBase", gsi_base, 0x0, 0x0, false, 0xd4cab6cc111b6819)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interrupt_line_type_t), "_INTERRUPT_LINES.Type", type, 0x0, 0x0, false, 0x5375503eca87a08c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interrupt_line_subtype_t), "_INTERRUPT_LINES.SubType", sub_type, 0x0, 0x0, false, 0x5988b735415e3604)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_line_state_t*), "_INTERRUPT_LINES.State", state, 0x0, 0x0, false, 0xe628ec3dc9be6a05)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_line_internal_state_t*), "_INTERRUPT_LINES.InternalState", internal_state, 0x0, 0x0, false, 0xb0da72f6d884bb11)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_LINES.MsiAddress", msi_address, 0x0, 0x0, false, 0x7562a401c075112e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINES.MsiData", msi_data, 0x0, 0x0, false, 0x441baeeec3a8a3a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_INTERRUPT_LINES.MsiInUse", msi_in_use, 0x0, 0x0, false, 0xdc319918547fd175)
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
#endif