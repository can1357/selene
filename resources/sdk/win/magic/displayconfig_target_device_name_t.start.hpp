#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME.header", header, 0x0, 0xa0, true, 0x5f03f33fa9e26c65)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(displayconfig_target_device_name_flags_t ), "DISPLAYCONFIG_TARGET_DEVICE_NAME.flags", flags, 0xa0, 0x20, true, 0x598d29524c50efee)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME.outputTechnology", output_technology, 0xc0, 0x20, true, 0xd72cffce4431ce18, 32, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME.edidManufactureId", edid_manufacture_id, 0xe0, 0x10, true, 0x3a069c8d0605a5fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME.edidProductCodeId", edid_product_code_id, 0xf0, 0x10, true, 0x82bbabeb8ae7773)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_TARGET_DEVICE_NAME.connectorInstance", connector_instance, 0x100, 0x20, true, 0x2d4c19f4dfd59454)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "DISPLAYCONFIG_TARGET_DEVICE_NAME.monitorFriendlyDeviceName", monitor_friendly_device_name, 0x120, 0x0, true, 0xf954b6325953a666)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "DISPLAYCONFIG_TARGET_DEVICE_NAME.monitorDevicePath", monitor_device_path, 0x520, 0x0, true, 0xf735d034aa6bbf22)
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