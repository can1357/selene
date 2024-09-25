#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_X_FILTER.OpenList", open_list, 0x0, 0x40, true, 0xae4dd024894349c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_X_FILTER.NoFTypeOpenList", no_f_type_open_list, 0x40, 0x40, true, 0xcb88f22d28dc8da4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_X_FILTER.FTypeOpenList", f_type_open_list, 0x80, 0x40, true, 0xf7774ac79d1999f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::frame_type_record_t), "_X_FILTER.FrameTypeRecord", frame_type_record, 0xc0, 0x40, true, 0xd7dbf22c0da51039)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::rw_lock_ex_t*), "_X_FILTER.BindListLock", bind_list_lock, 0x900, 0x40, true, 0x151248735742e60d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_X_FILTER.Miniport", miniport, 0x940, 0x40, true, 0xb006a3286d55430c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.CombinedPacketFilter", combined_packet_filter, 0x980, 0x20, true, 0x52ab8f5c1561aaed)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.OldCombinedPacketFilter", old_combined_packet_filter, 0x9a0, 0x20, true, 0x4124839d67b69846)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.MiniportPacketFilter", miniport_packet_filter, 0x9c0, 0x20, true, 0x1a766cc9e3e3af54)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.NumOpens", num_opens, 0x9e0, 0x20, true, 0x1410e3ae04cee452)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.NumNoETypeOpens", num_no_e_type_opens, 0xa00, 0x20, true, 0x898558bae0c93f38)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_X_FILTER.SingleActiveOpen", single_active_open, 0xa40, 0x40, true, 0xc48ea6b228cd4035)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_X_FILTER.AdapterAddress", adapter_address, 0xa80, 0x30, true, 0x57eecca18ceeff71)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.MaxMulticastAddresses", max_multicast_addresses, 0xac0, 0x20, true, 0x27cedbb1247fcee7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>*), "_X_FILTER.NextMCastAddressBuf", next_m_cast_address_buf, 0xb00, 0x40, true, 0xb8c9ae41533895a7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>*), "_X_FILTER.NextOldMCastAddressBuf", next_old_m_cast_address_buf, 0xb40, 0x40, true, 0xe2a09830f71854e7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.NextNumAddresses", next_num_addresses, 0xb80, 0x20, true, 0xd2798476e528e8cf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.NextOldNumAddresses", next_old_num_addresses, 0xba0, 0x20, true, 0x36b679c24df035d1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>*), "_X_FILTER.MiniportMCastAddressBuf", miniport_m_cast_address_buf, 0xbc0, 0x40, true, 0x2d8551ff1ff9b9bb)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.MiniportNumAddresses", miniport_num_addresses, 0xc00, 0x20, true, 0x711daa15cbb3ebdb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>*), "_X_FILTER.MiniportOldMCastAddressBuf", miniport_old_m_cast_address_buf, 0xc40, 0x40, true, 0xdc3edb790b7f4b54)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X_FILTER.MiniportOldNumAddresses", miniport_old_num_addresses, 0xc80, 0x20, true, 0x4dd1f67117e27f5e)
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