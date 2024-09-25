#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CDualStringArray._cRef", c_ref, 0x40, 0x20, true, 0xa737b44c713efb01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "CDualStringArray._pdsa", pdsa, 0x0, 0x40, true, 0x94f9893413f8e072)
#else
#define _m00
#define _m01
#endif