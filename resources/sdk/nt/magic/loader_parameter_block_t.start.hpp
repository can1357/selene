#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_BLOCK.OsMajorVersion", os_major_version, 0x0, 0x20, true, 0xe9e5b4b66d66a5e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_BLOCK.OsMinorVersion", os_minor_version, 0x20, 0x20, true, 0xde7ebeebc37fce3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_BLOCK.Size", size, 0x40, 0x20, true, 0x627350912f25bcab)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_BLOCK.OsLoaderSecurityVersion", os_loader_security_version, 0x60, 0x20, true, 0x7281c92f98d2b25e)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.LoadOrderListHead", load_order_list_head, 0x80, 0x80, true, 0xd00797a5073cc7a5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.MemoryDescriptorListHead", memory_descriptor_list_head, 0x100, 0x80, true, 0xff4010ba0fd09ca7)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.BootDriverListHead", boot_driver_list_head, 0x180, 0x80, true, 0xba1fca5c78c98008)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.EarlyLaunchListHead", early_launch_list_head, 0x200, 0x80, true, 0x616f8ba0f00033d9)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.CoreDriverListHead", core_driver_list_head, 0x280, 0x80, true, 0x870c3c73eaa6bcaf)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.CoreExtensionsDriverListHead", core_extensions_driver_list_head, 0x300, 0x80, true, 0xaf529ff763378fbf)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_BLOCK.TpmCoreDriverListHead", tpm_core_driver_list_head, 0x380, 0x80, true, 0x551fe873e0dac15)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_BLOCK.KernelStack", kernel_stack, 0x400, 0x40, true, 0x470012719202bec9)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_BLOCK.Prcb", prcb, 0x440, 0x40, true, 0xc5394b1a2da92eb5)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_BLOCK.Process", process, 0x480, 0x40, true, 0x82c906d1c60ffed)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_BLOCK.Thread", thread, 0x4c0, 0x40, true, 0x3b404becae8acc55)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_BLOCK.KernelStackSize", kernel_stack_size, 0x500, 0x20, true, 0x3af765b22ed055b1)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_BLOCK.RegistryLength", registry_length, 0x520, 0x20, true, 0x8b0216ddc6cd21da)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_BLOCK.RegistryBase", registry_base, 0x540, 0x40, true, 0x53155b9522316985)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::configuration_component_data_t*), "_LOADER_PARAMETER_BLOCK.ConfigurationRoot", configuration_root, 0x580, 0x40, true, 0xe6aaa64beb5f8629)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.ArcBootDeviceName", arc_boot_device_name, 0x5c0, 0x40, true, 0xbc76415355f78075)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.ArcHalDeviceName", arc_hal_device_name, 0x600, 0x40, true, 0x7c7d1516ec12874a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.NtBootPathName", nt_boot_path_name, 0x640, 0x40, true, 0x29152ada44e58330)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.NtHalPathName", nt_hal_path_name, 0x680, 0x40, true, 0xed929a65e67e5161)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.LoadOptions", load_options, 0x6c0, 0x40, true, 0x71694300367e7fda)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nls::data_block_t*), "_LOADER_PARAMETER_BLOCK.NlsData", nls_data, 0x700, 0x40, true, 0x8aaa99351ae394e5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::arc_disk_information_t*), "_LOADER_PARAMETER_BLOCK.ArcDiskInformation", arc_disk_information, 0x740, 0x40, true, 0x7d2c91b25408e4c0)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_parameter_extension_t*), "_LOADER_PARAMETER_BLOCK.Extension", extension, 0x780, 0x40, true, 0x279bfa0cd289a9d9)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::i386_loader_block_t), "_LOADER_PARAMETER_BLOCK.I386", i386, 0x7c0, 0x80, true, 0x554ce7e157f9c1e5)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::arm_loader_block_t), "_LOADER_PARAMETER_BLOCK.Arm", arm, 0x7c0, 0x20, true, 0xdec8de79b3a2c706)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::firmware_information_loader_block_t), "_LOADER_PARAMETER_BLOCK.FirmwareInformation", firmware_information, 0x840, 0x0, true, 0xbafaad4d022010e6)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.OsBootstatPathName", os_bootstat_path_name, 0xa40, 0x40, true, 0x902e574cd4ca4ce8)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.ArcOSDataDeviceName", arc_os_data_device_name, 0xa80, 0x40, true, 0x1eac89eae980b94a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_LOADER_PARAMETER_BLOCK.ArcWindowsSysPartName", arc_windows_sys_part_name, 0xac0, 0x40, true, 0x3af5a912942791ad)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_LOADER_PARAMETER_BLOCK.MemoryDescriptorTree", memory_descriptor_tree, 0x0, 0x0, false, 0x6df98ec4dccbd61e)
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
#define _m031
#define _m032
#define _m033
#endif