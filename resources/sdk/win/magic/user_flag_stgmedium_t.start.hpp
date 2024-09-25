#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_userFLAG_STGMEDIUM.ContextFlags", context_flags, 0x0, 0x20, true, 0x7289528ef5b28dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_userFLAG_STGMEDIUM.fPassOwnership", f_pass_ownership, 0x20, 0x20, true, 0x9d1065bec41b23d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::user_stgmedium_t), "_userFLAG_STGMEDIUM.Stgmed", stgmed, 0x40, 0x40, true, 0x93bfbb5d3410ce87)
#else
#define _m00
#define _m01
#define _m02
#endif