#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ProcessActivatorToken.ProcessGUID", process_guid, 0x0, 0x80, true, 0xc1b2e1eeb2d1cb39)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ProcessActivatorToken.ActivatorIPID", activator_ipid, 0x80, 0x80, true, 0xdaebbc6a20876926)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ProcessActivatorToken.dwFlags", dw_flags, 0x100, 0x20, true, 0x3643be81e9d2268d)
#else
#define _m00
#define _m01
#define _m02
#endif