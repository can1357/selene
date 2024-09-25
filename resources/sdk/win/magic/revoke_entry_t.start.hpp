#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RevokeEntry.clsid", clsid, 0x0, 0x80, true, 0x365f3976aa828186)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RevokeEntry.dwReg", dw_reg, 0x80, 0x20, true, 0xf1e3dedd833825e8)
#else
#define _m00
#define _m01
#endif