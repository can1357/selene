#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_13.Size", size, 0x0, 0x0, false, 0xb9cb79236a8e1c05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::devpropkey_t*), "_WDF_DEVICE_PROPERTY_DATA_V1_13.PropertyKey", property_key, 0x0, 0x0, false, 0x278e7484a38ec65a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_13.Lcid", lcid, 0x0, 0x0, false, 0xc61f08d04caac38b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PROPERTY_DATA_V1_13.Flags", flags, 0x0, 0x0, false, 0x5d2b5150956d6cda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif