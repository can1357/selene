#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_VENDORS.NumberOfVendors", number_of_vendors, 0x0, 0x20, true, 0xb318f7a5888972d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::xsave_vendor_t, 1>), "_XSAVE_VENDORS.Vendor", vendor, 0x40, 0xc0, true, 0xae41d8da0c6acf7a)
#else
#define _m00
#define _m01
#endif