#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_child_identification_description_header_t ), "FxStaticChildDescription.Header", header, 0x0, 0x20, true, 0x4dba76a2c427bb4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxStaticChildDescription.Pdo", pdo, 0x40, 0x40, true, 0x54ef917fc499440b)
#else
#define _m00
#define _m01
#endif