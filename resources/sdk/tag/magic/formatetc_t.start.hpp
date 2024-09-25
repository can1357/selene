#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagFORMATETC.cfFormat", cf_format, 0x0, 0x10, true, 0x4726b1ce76240886)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dvtargetdevice_t*), "tagFORMATETC.ptd", ptd, 0x40, 0x40, true, 0x545f7744171c1e00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFORMATETC.dwAspect", dw_aspect, 0x80, 0x20, true, 0xb4786ca502eb236b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagFORMATETC.lindex", lindex, 0xa0, 0x20, true, 0x3a4ce7ed301598ec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFORMATETC.tymed", tymed, 0xc0, 0x20, true, 0x1075d3c98e49a232)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif