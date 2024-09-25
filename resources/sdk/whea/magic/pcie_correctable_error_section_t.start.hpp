#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(whea_pcie_correctable_error_section_header_t ), "_WHEA_PCIE_CORRECTABLE_ERROR_SECTION.Header", header, 0x0, 0x0, false, 0x91307b1c20ddff5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::pcie_correctable_error_devices_t, 1>), "_WHEA_PCIE_CORRECTABLE_ERROR_SECTION.Devices", devices, 0x0, 0x0, false, 0x1b1f6157f1f57d32)
#else
#define _m00
#define _m01
#endif