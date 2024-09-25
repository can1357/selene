#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSDBG_LIVEDUMP_CONTROL_ADDPAGES.HypervisorPages", hypervisor_pages, 0x0, 0x1, true, 0xbf63b7e4c9b4a49e, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_LIVEDUMP_CONTROL_ADDPAGES.AsUlong", as_ulong, 0x0, 0x20, true, 0xcde9fd5cb4997045)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSDBG_LIVEDUMP_CONTROL_ADDPAGES.NonEssentialHypervisorPages", non_essential_hypervisor_pages, 0x0, 0x0, false, 0xbe343f22d3715aed, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif