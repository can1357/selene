#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "addrinfoexW.ai_flags", ai_flags, 0x0, 0x20, true, 0x9887c0d19df3232c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "addrinfoexW.ai_family", ai_family, 0x20, 0x20, true, 0x5f9d235903fcb05a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "addrinfoexW.ai_socktype", ai_socktype, 0x40, 0x20, true, 0xa737f0ac2f891d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "addrinfoexW.ai_protocol", ai_protocol, 0x60, 0x20, true, 0xb0e0ff205f20caef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "addrinfoexW.ai_addrlen", ai_addrlen, 0x80, 0x40, true, 0xd579a095b55cffdb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "addrinfoexW.ai_canonname", ai_canonname, 0xc0, 0x40, true, 0x5f8af3f28dacfa3f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ndis::sockaddr_t*), "addrinfoexW.ai_addr", ai_addr, 0x100, 0x40, true, 0x4134e913a92099f4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "addrinfoexW.ai_blob", ai_blob, 0x140, 0x40, true, 0xd1bf22f9f651d860)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "addrinfoexW.ai_bloblen", ai_bloblen, 0x180, 0x40, true, 0x8b955f0138d0a2dd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "addrinfoexW.ai_provider", ai_provider, 0x1c0, 0x40, true, 0xaa16e658785a0466)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::addrinfoex_w_t*), "addrinfoexW.ai_next", ai_next, 0x200, 0x40, true, 0xe64ffb58496637ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif