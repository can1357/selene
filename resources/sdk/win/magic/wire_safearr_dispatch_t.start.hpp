#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARR_DISPATCH.Size", size, 0x0, 0x20, true, 0x8cc95e8c346e278b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t**), "_wireSAFEARR_DISPATCH.apDispatch", ap_dispatch, 0x40, 0x40, true, 0x735cd59585218acd)
#else
#define _m00
#define _m01
#endif