#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagXAptCallback.pfnCallback", pfn_callback, 0x0, 0x40, true, 0xac9f84dd57b91a88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagXAptCallback.pParam", p_param, 0x40, 0x40, true, 0xa6ecea99752bcbcd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagXAptCallback.pServerCtx", p_server_ctx, 0x80, 0x40, true, 0x36f9c06515c2dec5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagXAptCallback.pUnk", p_unk, 0xc0, 0x40, true, 0xd656ee978c634113)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagXAptCallback.iid", iid, 0x100, 0x80, true, 0x16330dc5aec5d677)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagXAptCallback.iMethod", i_method, 0x180, 0x20, true, 0x5974638e2cb07c7f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagXAptCallback.guidProcessSecret", guid_process_secret, 0x1a0, 0x80, true, 0x44abc0762a0c12a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif