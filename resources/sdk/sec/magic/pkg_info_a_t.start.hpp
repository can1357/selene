#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgInfoA.fCapabilities", f_capabilities, 0x0, 0x20, true, 0xfc4de4fa2101ba28)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgInfoA.wVersion", w_version, 0x20, 0x10, true, 0xa811f14bc5c65aa3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgInfoA.wRPCID", w_rpcid, 0x30, 0x10, true, 0x84c3e5f02ca16213)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgInfoA.cbMaxToken", cb_max_token, 0x40, 0x20, true, 0x1ed3b5e5879141db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgInfoA.Name", name, 0x80, 0x40, true, 0xe5194861e0fe3fa8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgInfoA.Comment", comment, 0xc0, 0x40, true, 0x203f0a959b3f45ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif