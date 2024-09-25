#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOXID_INFO.dwTid", dw_tid, 0x0, 0x20, true, 0xc5c628b0a6f3fab4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOXID_INFO.dwPid", dw_pid, 0x20, 0x20, true, 0x5725eac361fc158)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOXID_INFO.dwAuthnHint", dw_authn_hint, 0x40, 0x20, true, 0xc971c75e40540c7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "tagOXID_INFO.version", version, 0x60, 0x20, true, 0x669927f9d3002553)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOXID_INFO.ipidRemUnknown", ipid_rem_unknown, 0x80, 0x80, true, 0x228a2830be8e2db1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOXID_INFO.dwFlags", dw_flags, 0x100, 0x20, true, 0x74eb1a2efe6203f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "tagOXID_INFO.psa", psa, 0x140, 0x40, true, 0x4e191a00db41ddf5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOXID_INFO.guidProcessIdentifier", guid_process_identifier, 0x180, 0x80, true, 0xa824962130372802)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif