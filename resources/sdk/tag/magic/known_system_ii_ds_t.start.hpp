#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagKnownSystemIIDs.pIID", p_iid, 0x0, 0x40, true, 0xafca3acc49478e2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKnownSystemIIDs.dwRpcIfFlags", dw_rpc_if_flags, 0x40, 0x20, true, 0xb1937bb286031e48)
#else
#define _m00
#define _m01
#endif