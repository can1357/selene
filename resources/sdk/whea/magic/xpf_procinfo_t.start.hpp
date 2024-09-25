#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_XPF_PROCINFO.CheckInfoId", check_info_id, 0x0, 0x80, true, 0x1ae3f2d27899bcc9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::xpf_procinfo_validbits_t), "_WHEA_XPF_PROCINFO.ValidBits", valid_bits, 0x80, 0x40, true, 0x5ad916a3f561a8d2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::xpf_cache_check_t), "_WHEA_XPF_PROCINFO.CheckInfo.CacheCheck", cache_check, 0x0, 0x40, true, 0x5d30fa7223111dd1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::xpf_tlb_check_t), "_WHEA_XPF_PROCINFO.CheckInfo.TlbCheck", tlb_check, 0x0, 0x40, true, 0x8f0f628c8479bd7e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::xpf_bus_check_t), "_WHEA_XPF_PROCINFO.CheckInfo.BusCheck", bus_check, 0x0, 0x40, true, 0xde02dbab78992dd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::xpf_ms_check_t), "_WHEA_XPF_PROCINFO.CheckInfo.MsCheck", ms_check, 0x0, 0x40, true, 0x9be29a9018928280)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCINFO.CheckInfo.AsULONGLONG", as_ulonglong, 0x0, 0x40, true, 0x2af488f607350dc0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_check_info_t), "_WHEA_XPF_PROCINFO.CheckInfo", check_info, 0xc0, 0x40, true, 0x61e485459684bc87)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCINFO.TargetId", target_id, 0x100, 0x40, true, 0x46b465c6d08106e6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCINFO.RequesterId", requester_id, 0x140, 0x40, true, 0x406a25e5ad5b1b39)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCINFO.ResponderId", responder_id, 0x180, 0x40, true, 0x8eb7791943dc935e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCINFO.InstructionPointer", instruction_pointer, 0x1c0, 0x40, true, 0x20fb2dc90605bd5c)
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
#define _m11
#endif