#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSTATSTG.pwcsName", pwcs_name, 0x0, 0x40, true, 0x818d041708065b85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATSTG.type", type, 0x40, 0x20, true, 0xfaa072868e0cd8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSTATSTG.cbSize", cb_size, 0x80, 0x40, true, 0x38fdb0200f2a3871)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagSTATSTG.mtime", mtime, 0xc0, 0x40, true, 0xd51e01bdfb577086)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagSTATSTG.ctime", ctime, 0x100, 0x40, true, 0xd88b6e2f2713a0c0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagSTATSTG.atime", atime, 0x140, 0x40, true, 0x1275a94b080be54d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATSTG.grfMode", grf_mode, 0x180, 0x20, true, 0xaa0205ec5e9fc587)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATSTG.grfLocksSupported", grf_locks_supported, 0x1a0, 0x20, true, 0x3af622aa0384e3eb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSTATSTG.clsid", clsid, 0x1c0, 0x80, true, 0xc71911375350cee1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATSTG.grfStateBits", grf_state_bits, 0x240, 0x20, true, 0x55938fe1ca598b94)
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
#endif