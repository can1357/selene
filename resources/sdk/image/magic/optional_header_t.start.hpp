#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.Magic", magic, 0x0, 0x10, true, 0x4b2c4782516d4a28)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_OPTIONAL_HEADER.MajorLinkerVersion", major_linker_version, 0x10, 0x8, true, 0x35b2fcb8f26fcb5f)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_OPTIONAL_HEADER.MinorLinkerVersion", minor_linker_version, 0x18, 0x8, true, 0xd1e0d51847f5fd8a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfCode", size_of_code, 0x20, 0x20, true, 0x9c6b35a1f6d3a66e)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfInitializedData", size_of_initialized_data, 0x40, 0x20, true, 0xdf0b883cabde6c77)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfUninitializedData", size_of_uninitialized_data, 0x60, 0x20, true, 0x7c3ee7c8c4702b79)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.AddressOfEntryPoint", address_of_entry_point, 0x80, 0x20, true, 0xeb06b5ff3ad94c0c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.BaseOfCode", base_of_code, 0xa0, 0x20, true, 0x50b040b83cee6e1b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.BaseOfData", base_of_data, 0xc0, 0x20, true, 0xb2d815c42b647953)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.ImageBase", image_base, 0xe0, 0x20, true, 0xba8b1fd9534f001e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SectionAlignment", section_alignment, 0x100, 0x20, true, 0x1d76acaa2cae3d28)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.FileAlignment", file_alignment, 0x120, 0x20, true, 0xc56945eb02320804)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.MajorOperatingSystemVersion", major_operating_system_version, 0x140, 0x10, true, 0x41ca294a0f66a4ea)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.MinorOperatingSystemVersion", minor_operating_system_version, 0x150, 0x10, true, 0xd45c75cdce19678f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.MajorImageVersion", major_image_version, 0x160, 0x10, true, 0x442ad28495fc1fa6)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.MinorImageVersion", minor_image_version, 0x170, 0x10, true, 0x7dfabc960478bfc)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.MajorSubsystemVersion", major_subsystem_version, 0x180, 0x10, true, 0x49fed7f38944f741)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.MinorSubsystemVersion", minor_subsystem_version, 0x190, 0x10, true, 0xbcd040d2520904c2)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.Win32VersionValue", win32_version_value, 0x1a0, 0x20, true, 0x57d4b2578feb6bd0)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfImage", size_of_image, 0x1c0, 0x20, true, 0xf228a87504f9c6fa)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfHeaders", size_of_headers, 0x1e0, 0x20, true, 0xf41da1f2faf93551)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.CheckSum", check_sum, 0x200, 0x20, true, 0x8c849a528c4f0f7c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.Subsystem", subsystem, 0x220, 0x10, true, 0x333e57973b8ee569)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER.DllCharacteristics", dll_characteristics, 0x230, 0x10, true, 0xc1f253af1fc3048a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfStackReserve", size_of_stack_reserve, 0x240, 0x20, true, 0xace4a08896e56ae6)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfStackCommit", size_of_stack_commit, 0x260, 0x20, true, 0x48dd7dbb13ad51ae)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfHeapReserve", size_of_heap_reserve, 0x280, 0x20, true, 0x3c8f108c825059cf)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.SizeOfHeapCommit", size_of_heap_commit, 0x2a0, 0x20, true, 0x8ec13b5d89087553)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.LoaderFlags", loader_flags, 0x2c0, 0x20, true, 0xaf4ec8c86bf09d4a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER.NumberOfRvaAndSizes", number_of_rva_and_sizes, 0x2e0, 0x20, true, 0x4d7fe630f0b68958)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct image::data_directory_t, 16>), "_IMAGE_OPTIONAL_HEADER.DataDirectory", data_directory, 0x300, 0x0, true, 0x933ea6cfdaee7448)
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
#define _m030
#endif