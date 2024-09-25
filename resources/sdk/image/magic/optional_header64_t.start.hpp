#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.Magic", magic, 0x0, 0x10, true, 0x4cff0f5621050d2b)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_OPTIONAL_HEADER64.MajorLinkerVersion", major_linker_version, 0x10, 0x8, true, 0x47236690eb381731)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_OPTIONAL_HEADER64.MinorLinkerVersion", minor_linker_version, 0x18, 0x8, true, 0x84c758466b900b60)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfCode", size_of_code, 0x20, 0x20, true, 0x33d2e921d97cdf74)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfInitializedData", size_of_initialized_data, 0x40, 0x20, true, 0x75f3773e0a1aee90)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfUninitializedData", size_of_uninitialized_data, 0x60, 0x20, true, 0xea86c6bb5e3b59d9)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.AddressOfEntryPoint", address_of_entry_point, 0x80, 0x20, true, 0x18140e38acb76a8a)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.BaseOfCode", base_of_code, 0xa0, 0x20, true, 0xc401749597eff903)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_OPTIONAL_HEADER64.ImageBase", image_base, 0xc0, 0x40, true, 0xb60b56ec47ea6893)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.SectionAlignment", section_alignment, 0x100, 0x20, true, 0xc151ab4a262d5f6b)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.FileAlignment", file_alignment, 0x120, 0x20, true, 0x5263b72fbcc06b77)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.MajorOperatingSystemVersion", major_operating_system_version, 0x140, 0x10, true, 0xd45803732facdd49)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.MinorOperatingSystemVersion", minor_operating_system_version, 0x150, 0x10, true, 0xb2ec5750050a6a77)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.MajorImageVersion", major_image_version, 0x160, 0x10, true, 0x23a4ca0da18cb30a)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.MinorImageVersion", minor_image_version, 0x170, 0x10, true, 0x603accb0ebf56674)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.MajorSubsystemVersion", major_subsystem_version, 0x180, 0x10, true, 0xfdd757fdf5bdb96a)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.MinorSubsystemVersion", minor_subsystem_version, 0x190, 0x10, true, 0x7a67ee12dde747cb)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.Win32VersionValue", win32_version_value, 0x1a0, 0x20, true, 0xac9cf88a37eb4b74)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfImage", size_of_image, 0x1c0, 0x20, true, 0x8e7cddd7c05a06ec)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfHeaders", size_of_headers, 0x1e0, 0x20, true, 0xa2c2948a6f37174a)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.CheckSum", check_sum, 0x200, 0x20, true, 0x9a3b06ae41a2420c)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.Subsystem", subsystem, 0x220, 0x10, true, 0x926aa685ad94b3c9)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OPTIONAL_HEADER64.DllCharacteristics", dll_characteristics, 0x230, 0x10, true, 0xeb63b54a158a05cd)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfStackReserve", size_of_stack_reserve, 0x240, 0x40, true, 0xb59c108003226438)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfStackCommit", size_of_stack_commit, 0x280, 0x40, true, 0x9d33f7b50eb50efc)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfHeapReserve", size_of_heap_reserve, 0x2c0, 0x40, true, 0xee878b851c56948c)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_OPTIONAL_HEADER64.SizeOfHeapCommit", size_of_heap_commit, 0x300, 0x40, true, 0xf272935eeb86312a)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.LoaderFlags", loader_flags, 0x340, 0x20, true, 0xfb8905591f7dda55)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_OPTIONAL_HEADER64.NumberOfRvaAndSizes", number_of_rva_and_sizes, 0x360, 0x20, true, 0xd7804296cfb6f40e)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct image::data_directory_t, 16>), "_IMAGE_OPTIONAL_HEADER64.DataDirectory", data_directory, 0x380, 0x0, true, 0xf7e6934adee1d1f)
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