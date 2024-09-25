#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MIPID.mid", mid, 0x0, 0x40, true, 0xcb7fc3c517b9aee5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "MIPID.ipid", ipid, 0x40, 0x80, true, 0xb2b673d26773bce0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MIPID.dwApt", dw_apt, 0xc0, 0x20, true, 0xb91944f535c863c)
#else
#define _m00
#define _m01
#define _m02
#endif