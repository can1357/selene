#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_VIRTUALIZATION_INFORMATION.VirtualizationCandidate", virtualization_candidate, 0x0, 0x1, true, 0x61abf501aed45fa1, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_VIRTUALIZATION_INFORMATION.VirtualizationEnabled", virtualization_enabled, 0x1, 0x1, true, 0xea7c07777620f354, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_VIRTUALIZATION_INFORMATION.VirtualTarget", virtual_target, 0x2, 0x1, true, 0x5029e899ccabf8d8, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_VIRTUALIZATION_INFORMATION.VirtualStore", virtual_store, 0x3, 0x1, true, 0xc2cd1fe519561467, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_VIRTUALIZATION_INFORMATION.VirtualSource", virtual_source, 0x4, 0x1, true, 0x1ec0ce813b4feb80, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif