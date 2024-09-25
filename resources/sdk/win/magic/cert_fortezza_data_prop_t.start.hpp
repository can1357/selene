#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CERT_FORTEZZA_DATA_PROP.SerialNumber", serial_number, 0x0, 0x40, true, 0x616d6541f85696b2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_FORTEZZA_DATA_PROP.CertIndex", cert_index, 0x40, 0x20, true, 0x85f4543319117974)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 36>), "_CERT_FORTEZZA_DATA_PROP.CertLabel", cert_label, 0x60, 0x20, true, 0x2d22a47cea31f09f)
#else
#define _m00
#define _m01
#define _m02
#endif