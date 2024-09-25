#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_COLLECTION_INFORMATION.DescriptorSize", descriptor_size, 0x0, 0x20, true, 0x694fec6317e8115b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_COLLECTION_INFORMATION.Polled", polled, 0x20, 0x8, true, 0x6354e2b5bb41b68d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_COLLECTION_INFORMATION.VendorID", vendor_id, 0x30, 0x10, true, 0x2d6148a5781e8e5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_COLLECTION_INFORMATION.ProductID", product_id, 0x40, 0x10, true, 0x66d9dd9a50d1f281)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_COLLECTION_INFORMATION.VersionNumber", version_number, 0x50, 0x10, true, 0x7ef27279e539c42)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif