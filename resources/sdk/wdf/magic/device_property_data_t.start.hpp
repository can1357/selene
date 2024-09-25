#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA.Size", size, 0x0, 0x20, true, 0xefa79f349b5dde0b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct nt::devpropkey_t*), "_WDF_DEVICE_PROPERTY_DATA.PropertyKey", property_key, 0x40, 0x40, true, 0xcb8d70814937db59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA.Lcid", lcid, 0x80, 0x20, true, 0xfde1ac4b559c35cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA.Flags", flags, 0xa0, 0x20, true, 0xd75d10fb171807c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif