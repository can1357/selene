#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.Version", version, 0x0, 0x0, false, 0xdb5229f9c8f5f75e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_KSR_FIRMWARE_INFORMATION.EfiVersionString", efi_version_string, 0x0, 0x0, false, 0x629a336b1fb49598)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::virtual_efi_runtime_services_t), "_KSR_FIRMWARE_INFORMATION.EfiRuntimeServices", efi_runtime_services, 0x0, 0x0, false, 0x2b5e5dc59f67d639)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.EfiMemoryMap", efi_memory_map, 0x0, 0x0, false, 0x4ae83f0cf1467aa5)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.EfiMemoryMapSize", efi_memory_map_size, 0x0, 0x0, false, 0x552e9bf0af1f5bdc)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.EfiMemoryMapDescriptorSize", efi_memory_map_descriptor_size, 0x0, 0x0, false, 0xc8aebb3f53d50afd)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::memory_caching_requirements_t*), "_KSR_FIRMWARE_INFORMATION.CachingRequirements", caching_requirements, 0x0, 0x0, false, 0x329228a1ff8538ab)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.CachingRequirementsCount", caching_requirements_count, 0x0, 0x0, false, 0xc5e56638c83dbc86)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.Smbios", smbios, 0x0, 0x0, false, 0xe42de83bbd83ae0f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::inbv_display_context_t*), "_KSR_FIRMWARE_INFORMATION.DisplayContext", display_context, 0x0, 0x0, false, 0x36af6ba2326abd8a)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.SecureBootPolicy", secure_boot_policy, 0x0, 0x0, false, 0x9c1abbf0277ccc15)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.SecureBootPolicySize", secure_boot_policy_size, 0x0, 0x0, false, 0x99ba8d98e3afcdb9)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::debug_memory_requirements_t), "_KSR_FIRMWARE_INFORMATION.DebugDeviceMemory", debug_device_memory, 0x0, 0x0, false, 0x3a81791d86c39bae)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.SoftRestartCount", soft_restart_count, 0x0, 0x0, false, 0xa56bf65e2121d41f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.CodeIntegrityPolicy", code_integrity_policy, 0x0, 0x0, false, 0xeb4a4429d5025eaf)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.CodeIntegrityPolicySize", code_integrity_policy_size, 0x0, 0x0, false, 0xb5ff4d49b474f106)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.EfiMemoryAttributes", efi_memory_attributes, 0x0, 0x0, false, 0x1dc96eb42c376489)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.Esrt", esrt, 0x0, 0x0, false, 0xba1a4a2ffc13b45d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.EsrtSize", esrt_size, 0x0, 0x0, false, 0xab752e7168004c3b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.CodeIntegrityPolicyHash", code_integrity_policy_hash, 0x0, 0x0, false, 0xd78fbc75fd6b4dd9)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.CodeIntegrityPolicyHashSize", code_integrity_policy_hash_size, 0x0, 0x0, false, 0x5a817fb6419e4f23)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSR_FIRMWARE_INFORMATION.CodeIntegrityPolicyOriginalHash", code_integrity_policy_original_hash, 0x0, 0x0, false, 0x9038ebd4a0c90965)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.CodeIntegrityPolicyOriginalHashSize", code_integrity_policy_original_hash_size, 0x0, 0x0, false, 0x67c8479f08e240d0)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::physical_memory_range_t*), "_KSR_FIRMWARE_INFORMATION.BadPageRanges", bad_page_ranges, 0x0, 0x0, false, 0x1a6a38fccc32ccb0)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_FIRMWARE_INFORMATION.BadPageRangeCount", bad_page_range_count, 0x0, 0x0, false, 0x67fc4f9daf8096c4)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::ksr_capabilities_t), "_KSR_FIRMWARE_INFORMATION.Capabilities", capabilities, 0x0, 0x0, false, 0x2a7b4bd6048dd3d9)
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
#endif