#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_short_t*), "_MMVAD_SHORT.NextVad", next_vad, 0x0, 0x40, true, 0x3cda04d0c726f89b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MMVAD_SHORT.VadNode", vad_node, 0x0, 0xc0, true, 0x682f5c69d07a0909)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMVAD_SHORT.StartingVpn", starting_vpn, 0xc0, 0x20, true, 0xf4498978c9e185bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMVAD_SHORT.EndingVpn", ending_vpn, 0xe0, 0x20, true, 0x64b80ae447de8d05)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMVAD_SHORT.StartingVpnHigh", starting_vpn_high, 0x100, 0x8, true, 0xd3adda50c50977b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMVAD_SHORT.EndingVpnHigh", ending_vpn_high, 0x108, 0x8, true, 0xfad000fa767fbe44)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMVAD_SHORT.CommitChargeHigh", commit_charge_high, 0x110, 0x8, true, 0x79ef01dff1ad25a2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMVAD_SHORT.SpareNT64VadUChar", spare_nt64_vad_u_char, 0x118, 0x8, true, 0x14d7be465c7aa517)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MMVAD_SHORT.ReferenceCount", reference_count, 0x120, 0x20, true, 0xfd926932b353d4f1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MMVAD_SHORT.PushLock", push_lock, 0x140, 0x40, true, 0xed6dfe189996f590)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMVAD_SHORT.LongFlags", long_flags, 0x180, 0x20, true, 0x2033f26d4ac5718)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_flags_t), "_MMVAD_SHORT.VadFlags", vad_flags, 0x180, 0x20, true, 0xc8eb3a9c41910e79)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMVAD_SHORT.LongFlags1", long_flags1, 0x1a0, 0x20, true, 0xa4ef77bba8f46415)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_flags1_t), "_MMVAD_SHORT.VadFlags1", vad_flags1, 0x1a0, 0x20, true, 0xf30ca19e65406b2f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMVAD_SHORT.ExtraCreateInfo", extra_create_info, 0x40, 0x40, true, 0x5b12dd3f9c7b753d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::private_vad_flags_t), "_MMVAD_SHORT.PrivateVadFlags", private_vad_flags, 0x180, 0x20, true, 0x73bf28a6ee31f4bc)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::graphics_vad_flags_t), "_MMVAD_SHORT.GraphicsVadFlags", graphics_vad_flags, 0x180, 0x20, true, 0x9aad64f99f74ea89)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::shared_vad_flags_t), "_MMVAD_SHORT.SharedVadFlags", shared_vad_flags, 0x180, 0x20, true, 0x3253150cc47728dc)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MMVAD_SHORT.VolatileVadLong", volatile_vad_long, 0x180, 0x20, true, 0x8d6ff0b38a44e5f4)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::vad_event_block_t*), "_MMVAD_SHORT.EventList", event_list, 0x1c0, 0x40, true, 0x948c1e2c6c077014)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMVAD_SHORT.EventListULongPtr", event_list_u_long_ptr, 0x0, 0x0, false, 0x2c9081b8082bdfd0)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMVAD_SHORT.StartingVpnHigher", starting_vpn_higher, 0x0, 0x0, false, 0xe9c519012ef4f4d5, 4, uint8_t)
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
#define _m19
#define _m20
#define _m21
#endif