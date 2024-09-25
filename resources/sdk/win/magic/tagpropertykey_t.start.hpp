#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_tagpropertykey.fmtid", fmtid, 0x0, 0x80, true, 0x5864f9ba5d0f8767)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagpropertykey.pid", pid, 0x80, 0x20, true, 0x8d9461e10b608a7)
#else
#define _m00
#define _m01
#endif