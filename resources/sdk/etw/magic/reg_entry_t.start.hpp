#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_REG_ENTRY.RegList", reg_list, 0x0, 0x80, true, 0xb75f3356d9c433ce)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_REG_ENTRY.GroupRegList", group_reg_list, 0x80, 0x80, true, 0xffefe8fa2adec89)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::guid_entry_t*), "_ETW_REG_ENTRY.GuidEntry", guid_entry, 0x100, 0x40, true, 0x253a5e51c7017a10)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::guid_entry_t*), "_ETW_REG_ENTRY.GroupEntry", group_entry, 0x140, 0x40, true, 0x5c2b0e5ac0df8bc6)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::reply_queue_t*), "_ETW_REG_ENTRY.ReplyQueue", reply_queue, 0x180, 0x40, true, 0x49ca0079b949f805)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::queue_entry_t*, 4>), "_ETW_REG_ENTRY.ReplySlot", reply_slot, 0x180, 0x0, true, 0x1b1ced35085a2c99)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REG_ENTRY.Caller", caller, 0x180, 0x40, true, 0x34a7066b77e3bd8a)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REG_ENTRY.SessionId", session_id, 0x1c0, 0x20, true, 0xc68bcdd79aac276d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_ETW_REG_ENTRY.Process", process, 0x280, 0x40, true, 0x8b6615611fb0939b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REG_ENTRY.CallbackContext", callback_context, 0x280, 0x40, true, 0x8b6ea55b1a9b92b1)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REG_ENTRY.Callback", callback, 0x2c0, 0x40, true, 0x6d03c8af8ae6cadd)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_REG_ENTRY.Index", index, 0x300, 0x10, true, 0xe7f1936efc942555)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_REG_ENTRY.Flags", flags, 0x310, 0x10, true, 0xd758d9f0b680f60a)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgKernelRegistration", dbg_kernel_registration, 0x310, 0x1, true, 0xcb9df8837d3bffe7, 1, uint16_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgUserRegistration", dbg_user_registration, 0x311, 0x1, true, 0x242b3e8bf5f7f13e, 1, uint16_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgReplyRegistration", dbg_reply_registration, 0x312, 0x1, true, 0xa8815c68f0791c24, 1, uint16_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgClassicRegistration", dbg_classic_registration, 0x313, 0x1, true, 0x2f1024b8a8a322c5, 1, uint16_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgSessionSpaceRegistration", dbg_session_space_registration, 0x314, 0x1, true, 0xbb87ea9acc05db8c, 1, uint16_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgModernRegistration", dbg_modern_registration, 0x315, 0x1, true, 0xa03db2a864bccc97, 1, uint16_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgClosed", dbg_closed, 0x316, 0x1, true, 0xfce89a97051ec6fc, 1, uint16_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgInserted", dbg_inserted, 0x317, 0x1, true, 0xa95a17534d0e23de, 1, uint16_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgWow64", dbg_wow64, 0x318, 0x1, true, 0xdd691fd9a0d1cb0d, 1, uint16_t)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REG_ENTRY.EnableMask", enable_mask, 0x320, 0x8, true, 0x137b8c4fe6ce7fe4)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REG_ENTRY.GroupEnableMask", group_enable_mask, 0x328, 0x8, true, 0xb07110f15fc769af)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::provider_traits_t*), "_ETW_REG_ENTRY.Traits", traits, 0x340, 0x40, true, 0x6837eac50dda3a35)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgUseDescriptorType", dbg_use_descriptor_type, 0x319, 0x1, true, 0x689d6b440459bd61, 1, uint16_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REG_ENTRY.DbgDropProviderTraits", dbg_drop_provider_traits, 0x31a, 0x1, true, 0xf1f958a493e4ff61, 1, uint16_t)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REG_ENTRY.HostEnableMask", host_enable_mask, 0x330, 0x8, true, 0x6f9c978c757811d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REG_ENTRY.HostGroupEnableMask", host_group_enable_mask, 0x338, 0x8, true, 0x948d8fea43186cda)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REG_ENTRY.UseDescriptorType", use_descriptor_type, 0x0, 0x0, false, 0xf3762e5a6dc1a540)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#endif