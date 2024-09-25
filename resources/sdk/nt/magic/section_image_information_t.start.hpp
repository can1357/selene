#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECTION_IMAGE_INFORMATION.TransferAddress", transfer_address, 0x0, 0x40, true, 0xd69b14929166532c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.ZeroBits", zero_bits, 0x40, 0x20, true, 0x5e19834b8b779e83)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION_IMAGE_INFORMATION.MaximumStackSize", maximum_stack_size, 0x80, 0x40, true, 0x985f3ad99bc39d76)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION_IMAGE_INFORMATION.CommittedStackSize", committed_stack_size, 0xc0, 0x40, true, 0xae86fefec0ab9b94)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.SubSystemType", sub_system_type, 0x100, 0x20, true, 0x693b468f49dfe9dc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.SubSystemMinorVersion", sub_system_minor_version, 0x120, 0x10, true, 0xf3c96fd035e539bd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.SubSystemMajorVersion", sub_system_major_version, 0x130, 0x10, true, 0x7ebbd0237723fb42)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.SubSystemVersion", sub_system_version, 0x120, 0x20, true, 0x4a7656b7b1d1a96c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.MajorOperatingSystemVersion", major_operating_system_version, 0x140, 0x10, true, 0x255ac8e5c9c3f24f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.MinorOperatingSystemVersion", minor_operating_system_version, 0x150, 0x10, true, 0x79365306494f7bb)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.OperatingSystemVersion", operating_system_version, 0x140, 0x20, true, 0x3010ff6bdb86103b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.ImageCharacteristics", image_characteristics, 0x160, 0x10, true, 0xb4cd8b85800ac81)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.DllCharacteristics", dll_characteristics, 0x170, 0x10, true, 0x84108c14a4180d19)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION.Machine", machine, 0x180, 0x10, true, 0xbff043dccea0fb97)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECTION_IMAGE_INFORMATION.ImageContainsCode", image_contains_code, 0x190, 0x8, true, 0x193d2292c8106529)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECTION_IMAGE_INFORMATION.ImageFlags", image_flags, 0x198, 0x8, true, 0xcef2803eb575e6ff)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION.ComPlusNativeReady", com_plus_native_ready, 0x198, 0x1, true, 0xdd591e4c095f37af, 1, uint8_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION.ComPlusILOnly", com_plus_il_only, 0x199, 0x1, true, 0x3b872761346ece89, 1, uint8_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION.ImageDynamicallyRelocated", image_dynamically_relocated, 0x19a, 0x1, true, 0xc719359431b7cee9, 1, uint8_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION.ImageMappedFlat", image_mapped_flat, 0x19b, 0x1, true, 0x1e75d3ec4e1f585f, 1, uint8_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION.BaseBelow4gb", base_below4gb, 0x19c, 0x1, true, 0x80bb45fc21c74a6b, 1, uint8_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION.ComPlusPrefer32bit", com_plus_prefer32bit, 0x19d, 0x1, true, 0xe926e4e41cdadd24, 1, uint8_t)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.LoaderFlags", loader_flags, 0x1a0, 0x20, true, 0x36d850039ed4644b)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.ImageFileSize", image_file_size, 0x1c0, 0x20, true, 0x5d48c29d90d3bb5f)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION.CheckSum", check_sum, 0x1e0, 0x20, true, 0xad3c028d4375630a)
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
#define _m24
#endif