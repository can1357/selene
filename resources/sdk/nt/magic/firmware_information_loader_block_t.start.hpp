#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FIRMWARE_INFORMATION_LOADER_BLOCK.FirmwareTypeUefi", firmware_type_uefi, 0x0, 0x1, true, 0x438df11bdd3f0979, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FIRMWARE_INFORMATION_LOADER_BLOCK.EfiRuntimeUseIum", efi_runtime_use_ium, 0x1, 0x1, true, 0x10b37fb102f19701, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FIRMWARE_INFORMATION_LOADER_BLOCK.EfiRuntimePageProtectionSupported", efi_runtime_page_protection_supported, 0x2, 0x1, true, 0xc6759d922c9f41e, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct efi::firmware_information_t), "_FIRMWARE_INFORMATION_LOADER_BLOCK.EfiInformation", efi_information, 0x40, 0xc0, true, 0x1e40f8ffdee7ee53)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pcat_firmware_information_t), "_FIRMWARE_INFORMATION_LOADER_BLOCK.PcatInformation", pcat_information, 0x40, 0x20, true, 0x5818386579dc0fd2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif