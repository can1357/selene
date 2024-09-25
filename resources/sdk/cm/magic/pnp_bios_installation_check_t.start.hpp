#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CM_PNP_BIOS_INSTALLATION_CHECK.Signature", signature, 0x0, 0x20, true, 0xccf030453b8a649e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.Revision", revision, 0x20, 0x8, true, 0x6472105427e9e307)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.Length", length, 0x28, 0x8, true, 0x3de3f964e81390f5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.ControlField", control_field, 0x30, 0x10, true, 0x35fbf03f9b8d0a0f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.Checksum", checksum, 0x40, 0x8, true, 0x6e9ea6a4db2f2db1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.EventFlagAddress", event_flag_address, 0x48, 0x20, true, 0x7cc987185692f323)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.RealModeEntryOffset", real_mode_entry_offset, 0x68, 0x10, true, 0xd32238f5c5de006c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.RealModeEntrySegment", real_mode_entry_segment, 0x78, 0x10, true, 0xe5be65f114b0dc2e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.ProtectedModeEntryOffset", protected_mode_entry_offset, 0x88, 0x10, true, 0x18e961f741331a6b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.ProtectedModeCodeBaseAddress", protected_mode_code_base_address, 0x98, 0x20, true, 0x7c6bc3e7d378ce45)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.OemDeviceId", oem_device_id, 0xb8, 0x20, true, 0x5804ef63acc316a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.RealModeDataBaseAddress", real_mode_data_base_address, 0xd8, 0x10, true, 0xda780aaadbc2dd59)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PNP_BIOS_INSTALLATION_CHECK.ProtectedModeDataBaseAddress", protected_mode_data_base_address, 0xe8, 0x20, true, 0x603c72306460f908)
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
#endif