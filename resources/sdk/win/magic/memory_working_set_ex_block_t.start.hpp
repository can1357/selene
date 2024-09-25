#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Valid", valid, 0x0, 0x1, true, 0xdba786b2f8a06ca5, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_WORKING_SET_EX_BLOCK.ShareCount", share_count, 0x1, 0x3, true, 0xb085ab54ea296df7, 3, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MEMORY_WORKING_SET_EX_BLOCK.Win32Protection", win32_protection, 0x4, 0xb, true, 0xa8bda48f142b93a2, 11, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Shared", shared, 0xf, 0x1, true, 0x1f09551413be7d1d, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MEMORY_WORKING_SET_EX_BLOCK.Node", node, 0x10, 0x6, true, 0xa6c34b653e44fb5d, 6, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Locked", locked, 0x16, 0x1, true, 0x39b05d0a4be38494, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.LargePage", large_page, 0x17, 0x1, true, 0xf2c50fa0d30006b0, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_WORKING_SET_EX_BLOCK.Priority", priority, 0x18, 0x3, true, 0x75ad559b29545bed, 3, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.SharedOriginal", shared_original, 0x1e, 0x1, true, 0xb8ba1fced62838ee, 1, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Bad", bad, 0x1f, 0x1, true, 0xc5aeb5ffc34d3452, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MEMORY_WORKING_SET_EX_BLOCK.ReservedUlong", reserved_ulong, 0x24, 0x1c, true, 0x3379b07d141a77ed, 0, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.Valid", valid, 0x0, 0x1, true, 0xbdaf9d3e955d5bfe, 1, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.Shared", shared, 0xf, 0x1, true, 0xdf0f37e60703499b, 1, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.PageTable", page_table, 0x15, 0x1, true, 0x275e1df8144c0139, 1, uint64_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.Location", location, 0x16, 0x2, true, 0xe898b10cac092a36, 2, uint64_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.Priority", priority, 0x18, 0x3, true, 0x45c851f61677eae3, 3, uint64_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.ModifiedList", modified_list, 0x1b, 0x1, true, 0x51665f287647889d, 1, uint64_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.SharedOriginal", shared_original, 0x1e, 0x1, true, 0x70263ef83ed8d9b, 1, uint64_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.Bad", bad, 0x1f, 0x1, true, 0xd24da06452a515d6, 1, uint64_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid.ReservedUlong", reserved_ulong, 0x20, 0x20, true, 0xccb190ce1b5b4f4, 32, uint64_t)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_invalid_t), "_MEMORY_WORKING_SET_EX_BLOCK.Invalid", invalid, 0x0, 0x40, true, 0xa118a8501a8efe4a)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MEMORY_WORKING_SET_EX_BLOCK.Win32GraphicsProtection", win32_graphics_protection, 0x20, 0x4, true, 0x18b67e9c9f0f6036, 4, uint64_t)
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