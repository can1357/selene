#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRegIf.hServerIf", h_server_if, 0x0, 0x40, true, 0xca14b8636033deec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRegIf.dwRegFlags", dw_reg_flags, 0x40, 0x20, true, 0x3d082c2a0b0c0b79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "tagRegIf.pfnSecurityCB", pfn_security_cb, 0x80, 0x40, true, 0xdca3dab39aea7dce)
#else
#define _m00
#define _m01
#define _m02
#endif