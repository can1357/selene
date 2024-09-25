#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_NODE.Signature", signature, 0x0, 0x10, true, 0x48e95f2a36b47226)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_NODE.Flags", flags, 0x10, 0x10, true, 0xb01b3586a1654bbd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_KEY_NODE.LastWriteTime", last_write_time, 0x20, 0x40, true, 0x4078725ebbe72bab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_KEY_NODE.AccessBits", access_bits, 0x60, 0x8, true, 0x11e94811d829649d)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_CM_KEY_NODE.LayerSemantics", layer_semantics, 0x68, 0x2, true, 0xd5b210fcd5999088, 2, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_NODE.InheritClass", inherit_class, 0x6f, 0x1, true, 0xcec952b9637d892b, 1, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.Parent", parent, 0x80, 0x20, true, 0xc939bb8f9794f820)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_CM_KEY_NODE.SubKeyCounts", sub_key_counts, 0xa0, 0x40, true, 0xfdaaae0f9f356f7e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_CM_KEY_NODE.SubKeyLists", sub_key_lists, 0xe0, 0x40, true, 0xe224f3b2422137de)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::child_list_t), "_CM_KEY_NODE.ValueList", value_list, 0x120, 0x40, true, 0x46a06811301571d5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_reference_t), "_CM_KEY_NODE.ChildHiveReference", child_hive_reference, 0xe0, 0x80, true, 0xd07b5ef8f423c0a5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.Security", security, 0x160, 0x20, true, 0xfa3baf4149a545c9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.Class", _class, 0x180, 0x20, true, 0x32e2d4e811022ab5)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_CM_KEY_NODE.MaxNameLen", max_name_len, 0x1a0, 0x10, true, 0xedf76939fe5be93c, 16, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CM_KEY_NODE.UserFlags", user_flags, 0x1b0, 0x4, true, 0x112142b62a8e0528, 4, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CM_KEY_NODE.VirtControlFlags", virt_control_flags, 0x1b4, 0x4, true, 0x493ce21eed0dec2b, 4, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_CM_KEY_NODE.Debug", debug, 0x1b8, 0x8, true, 0x316dee0f09e6f10d, 8, uint32_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.MaxClassLen", max_class_len, 0x1c0, 0x20, true, 0x196570ec97430692)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.MaxValueNameLen", max_value_name_len, 0x1e0, 0x20, true, 0x6b273b6795dd9d71)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.MaxValueDataLen", max_value_data_len, 0x200, 0x20, true, 0x9e6994bffffbc39b)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_NODE.WorkVar", work_var, 0x220, 0x20, true, 0x3c34915e4f8e4cc8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_NODE.NameLength", name_length, 0x240, 0x10, true, 0xd44c5dacc0845a34)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_NODE.ClassLength", class_length, 0x250, 0x10, true, 0x541d7c689967e085)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CM_KEY_NODE.Name", name, 0x260, 0x10, true, 0x73257f44aa31d93f)
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
#define _m22
#define _m23
#endif