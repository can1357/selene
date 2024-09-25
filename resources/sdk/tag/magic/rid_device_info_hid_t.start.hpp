#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_HID.dwVendorId", dw_vendor_id, 0x0, 0x20, true, 0xf36fd47b83903180)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_HID.dwProductId", dw_product_id, 0x20, 0x20, true, 0xe35045a58ae78818)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_HID.dwVersionNumber", dw_version_number, 0x40, 0x20, true, 0xa54eb08691df7b79)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRID_DEVICE_INFO_HID.usUsagePage", us_usage_page, 0x60, 0x10, true, 0x5eaf31acdca4260e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRID_DEVICE_INFO_HID.usUsage", us_usage, 0x70, 0x10, true, 0x896e01afb373bb19)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif