#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::funcdesc_t*), "tagBINDPTR.lpfuncdesc", lpfuncdesc, 0x0, 0x40, true, 0x315f6c493b39794)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::vardesc_t*), "tagBINDPTR.lpvardesc", lpvardesc, 0x0, 0x40, true, 0x8cdd60c2fd013a42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_type_comp_t*), "tagBINDPTR.lptcomp", lptcomp, 0x0, 0x40, true, 0x3524a4f5148cb1f7)
#else
#define _m00
#define _m01
#define _m02
#endif