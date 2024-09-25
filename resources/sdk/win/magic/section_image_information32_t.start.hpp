#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.TransferAddress", transfer_address, 0x0, 0x20, true, 0xa99a492e52957e7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.ZeroBits", zero_bits, 0x20, 0x20, true, 0xb70d83ddd68da45e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.MaximumStackSize", maximum_stack_size, 0x40, 0x20, true, 0x36b4b8bd7cff808c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.CommittedStackSize", committed_stack_size, 0x60, 0x20, true, 0x75a3995d6d9f7e25)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.SubSystemType", sub_system_type, 0x80, 0x20, true, 0x28beaf942e62b888)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.SubSystemMinorVersion", sub_system_minor_version, 0xa0, 0x10, true, 0xdbcc13c4dd4d647b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.SubSystemMajorVersion", sub_system_major_version, 0xb0, 0x10, true, 0xbaf43b99582a27d9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.SubSystemVersion", sub_system_version, 0xa0, 0x20, true, 0x447d5a9731632554)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.MajorOperatingSystemVersion", major_operating_system_version, 0xc0, 0x10, true, 0x91b327eda93d4769)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.MinorOperatingSystemVersion", minor_operating_system_version, 0xd0, 0x10, true, 0x5f0b5164747ec1ca)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.OperatingSystemVersion", operating_system_version, 0xc0, 0x20, true, 0xe700f5578ca743e4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.ImageCharacteristics", image_characteristics, 0xe0, 0x10, true, 0x61945dd19d9a1caa)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.DllCharacteristics", dll_characteristics, 0xf0, 0x10, true, 0x4968acb006608826)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECTION_IMAGE_INFORMATION32.Machine", machine, 0x100, 0x10, true, 0xe70ebc909e62b937)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECTION_IMAGE_INFORMATION32.ImageContainsCode", image_contains_code, 0x110, 0x8, true, 0xb6c0609e5da2d94d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECTION_IMAGE_INFORMATION32.ImageFlags", image_flags, 0x118, 0x8, true, 0x45f2026934bff24c)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION32.ComPlus", com_plus, 0x118, 0x1, true, 0x152370602987fb2b, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_IMAGE_INFORMATION32.ImageDynamicallyRelocated", image_dynamically_relocated, 0x119, 0x1, true, 0x8d1aef25bf7c4da7, 1, uint8_t)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.LoaderFlags", loader_flags, 0x120, 0x20, true, 0x864740f1544b6b5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.ImageFileSize", image_file_size, 0x140, 0x20, true, 0xf67bcf36a89e48a3)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_IMAGE_INFORMATION32.CheckSum", check_sum, 0x160, 0x20, true, 0xd52adecbd6ad9c67)
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