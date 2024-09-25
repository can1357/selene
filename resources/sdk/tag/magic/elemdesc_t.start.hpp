#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::typedesc_t), "tagELEMDESC.tdesc", tdesc, 0x0, 0x80, true, 0xd8741133e61bf530)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::idldesc_t), "tagELEMDESC.idldesc", idldesc, 0x80, 0x80, true, 0xe16cf4deb1e9892d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::paramdesc_t), "tagELEMDESC.paramdesc", paramdesc, 0x80, 0x80, true, 0x675285fedd02ae)
#else
#define _m00
#define _m01
#define _m02
#endif