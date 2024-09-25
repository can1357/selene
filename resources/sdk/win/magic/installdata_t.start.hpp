#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::installspectype_t), "_INSTALLDATA.Type", type, 0x0, 0x20, true, 0x7f5fec996085c69e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::installspec_t), "_INSTALLDATA.Spec", spec, 0x40, 0xc0, true, 0x915558d34954f0d7)
#else
#define _m00
#define _m01
#endif