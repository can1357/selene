#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDestObject._dwDestCtx", dw_dest_ctx, 0x40, 0x20, true, 0xb2ea68b28ef6ead1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "CDestObject._dcomVersion", dcom_version, 0x60, 0x20, true, 0xc3b217fd19c725ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "CDestObject._comversion", comversion, 0x0, 0x0, false, 0xbf731828b03fc6a8)
#else
#define _m00
#define _m01
#define _m02
#endif