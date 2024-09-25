#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_DEVICE_ATTRIBUTES.Size", size, 0x0, 0x20, true, 0x2464273bd7b4883)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_DEVICE_ATTRIBUTES.VendorID", vendor_id, 0x20, 0x10, true, 0x1f607d634ed1604b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_DEVICE_ATTRIBUTES.ProductID", product_id, 0x30, 0x10, true, 0xb57faf5c683820fe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_DEVICE_ATTRIBUTES.VersionNumber", version_number, 0x40, 0x10, true, 0xfe151904be61d9bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif