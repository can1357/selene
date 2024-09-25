#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_17.Size", size, 0x0, 0x0, false, 0x93a87d128886f13f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::devpropkey_t*), "_WDF_DEVICE_PROPERTY_DATA_V1_17.PropertyKey", property_key, 0x0, 0x0, false, 0xae6b294fe24a67c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_17.Lcid", lcid, 0x0, 0x0, false, 0xf288f1ed43cf7991)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_17.Flags", flags, 0x0, 0x0, false, 0x27d5b40c3800c676)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif