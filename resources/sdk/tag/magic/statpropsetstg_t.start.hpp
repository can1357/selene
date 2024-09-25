#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSTATPROPSETSTG.fmtid", fmtid, 0x0, 0x80, true, 0x6a4014ebea5d71b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSTATPROPSETSTG.clsid", clsid, 0x80, 0x80, true, 0xd54cd2aa4bb5ea25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATPROPSETSTG.grfFlags", grf_flags, 0x100, 0x20, true, 0x57c889d1bd7d3ad6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagSTATPROPSETSTG.mtime", mtime, 0x120, 0x40, true, 0xec68a885852b8db9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagSTATPROPSETSTG.ctime", ctime, 0x160, 0x40, true, 0x1ec1a21e95d93db4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagSTATPROPSETSTG.atime", atime, 0x1a0, 0x40, true, 0xb8ca4b2e00782d1a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATPROPSETSTG.dwOSVersion", dw_os_version, 0x1e0, 0x20, true, 0xec4eae0503f40f62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif