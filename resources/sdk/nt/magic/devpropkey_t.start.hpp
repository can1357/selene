#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVPROPKEY.fmtid", fmtid, 0x0, 0x80, true, 0x3882c5f30669ecb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVPROPKEY.pid", pid, 0x80, 0x20, true, 0x24bbf8e87f7e0592)
#else
#define _m00
#define _m01
#endif