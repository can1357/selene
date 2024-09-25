#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_15.Size", size, 0x0, 0x0, false, 0x8de8b5bdfdd0dc57)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::devpropkey_t*), "_WDF_DEVICE_PROPERTY_DATA_V1_15.PropertyKey", property_key, 0x0, 0x0, false, 0x1c3f24d516045516)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_15.Lcid", lcid, 0x0, 0x0, false, 0xc5c578b8febbe6a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_15.Flags", flags, 0x0, 0x0, false, 0xb2f2a9fc9ccd5be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif