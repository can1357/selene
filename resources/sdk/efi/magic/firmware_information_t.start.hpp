#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_FIRMWARE_INFORMATION.FirmwareVersion", firmware_version, 0x0, 0x20, true, 0x4fcf182c41cf478c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::virtual_efi_runtime_services_t*), "_EFI_FIRMWARE_INFORMATION.VirtualEfiRuntimeServices", virtual_efi_runtime_services, 0x40, 0x40, true, 0x63cb3c2a84a9f431)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EFI_FIRMWARE_INFORMATION.SetVirtualAddressMapStatus", set_virtual_address_map_status, 0x80, 0x20, true, 0x3dd58e1603f82aab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_FIRMWARE_INFORMATION.MissedMappingsCount", missed_mappings_count, 0xa0, 0x20, true, 0xc6511fc6f51821d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EFI_FIRMWARE_INFORMATION.FirmwareResourceList", firmware_resource_list, 0xc0, 0x80, true, 0x8bd88eb01e189f20)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EFI_FIRMWARE_INFORMATION.EfiMemoryMap", efi_memory_map, 0x140, 0x40, true, 0x6d50d970a0d6d6e9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_FIRMWARE_INFORMATION.EfiMemoryMapSize", efi_memory_map_size, 0x180, 0x20, true, 0xab21e31402f1ea22)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_FIRMWARE_INFORMATION.EfiMemoryMapDescriptorSize", efi_memory_map_descriptor_size, 0x1a0, 0x20, true, 0x89a1cb34ee2c7eb3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif