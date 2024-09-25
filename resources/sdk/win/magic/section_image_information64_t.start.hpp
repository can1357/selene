#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION_IMAGE_INFORMATION64.TransferAddress", transfer_address, 0x0, 0x40, true, 0x1e0fb3613dc2113e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.ZeroBits", zero_bits, 0x40, 0x20, true, 0xf5fb3c369e3f59e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION_IMAGE_INFORMATION64.MaximumStackSize", maximum_stack_size, 0x80, 0x40, true, 0xc3ad0e9ea833f55a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECTION_IMAGE_INFORMATION64.CommittedStackSize", committed_stack_size, 0xc0, 0x40, true, 0x98171212f3460515)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.SubSystemType", sub_system_type, 0x100, 0x20, true, 0x8a9827e753bc218)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.SubSystemMinorVersion", sub_system_minor_version, 0x120, 0x10, true, 0x20d9edb9be7ec6d6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.SubSystemMajorVersion", sub_system_major_version, 0x130, 0x10, true, 0x40839a2d0c0e39e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.SubSystemVersion", sub_system_version, 0x120, 0x20, true, 0xe85296bc00e2bf45)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.MajorOperatingSystemVersion", major_operating_system_version, 0x140, 0x10, true, 0xa0184d3eab57efe1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.MinorOperatingSystemVersion", minor_operating_system_version, 0x150, 0x10, true, 0x3296d3e12648f072)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.OperatingSystemVersion", operating_system_version, 0x140, 0x20, true, 0x2f303b4676409448)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.ImageCharacteristics", image_characteristics, 0x160, 0x10, true, 0x5772e683331506f1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.DllCharacteristics", dll_characteristics, 0x170, 0x10, true, 0x65913ce42c4ba60c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION64.Machine", machine, 0x180, 0x10, true, 0x800809cc73ad986a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECTION_IMAGE_INFORMATION64.ImageContainsCode", image_contains_code, 0x190, 0x8, true, 0x263ce0adc2833044)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECTION_IMAGE_INFORMATION64.ImageFlags", image_flags, 0x198, 0x8, true, 0x4718d7e75953d8f6)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION64.ComPlus", com_plus, 0x198, 0x1, true, 0xb371b7b94fee9f28, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION64.ImageDynamicallyRelocated", image_dynamically_relocated, 0x199, 0x1, true, 0x57c422306f0d4925, 1, uint8_t)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.LoaderFlags", loader_flags, 0x1a0, 0x20, true, 0xfad5b959b317462d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.ImageFileSize", image_file_size, 0x1c0, 0x20, true, 0x5b2828220493bec4)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION64.CheckSum", check_sum, 0x1e0, 0x20, true, 0xf1382e21f37625e8)
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
#endif