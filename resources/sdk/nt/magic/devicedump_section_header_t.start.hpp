#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVICEDUMP_SECTION_HEADER.guidDeviceDataId", guid_device_data_id, 0x0, 0x80, true, 0x3dee416c60607134)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DEVICEDUMP_SECTION_HEADER.sOrganizationID", s_organization_id, 0x80, 0x80, true, 0x9961ef67439c0ed7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SECTION_HEADER.dwFirmwareRevision", dw_firmware_revision, 0x100, 0x20, true, 0xc01ebabda99d1ba5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_DEVICEDUMP_SECTION_HEADER.sModelNumber", s_model_number, 0x120, 0x0, true, 0x235dbde677127a10)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_DEVICEDUMP_SECTION_HEADER.szDeviceManufacturingID", sz_device_manufacturing_id, 0x220, 0x0, true, 0x2989c86a2181a469)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SECTION_HEADER.dwFlags", dw_flags, 0x320, 0x20, true, 0x21ac7dbc51e56522)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SECTION_HEADER.bRestrictedPrivateDataVersion", b_restricted_private_data_version, 0x340, 0x20, true, 0x50a937a49cbd5cde)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SECTION_HEADER.dwFirmwareIssueId", dw_firmware_issue_id, 0x360, 0x20, true, 0x11320f3d335d2538)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 132>), "_DEVICEDUMP_SECTION_HEADER.szIssueDescriptionString", sz_issue_description_string, 0x380, 0x20, true, 0x7af67dbdb1d27f1b)
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
#endif