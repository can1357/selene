#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_DEP_POLICY.Flags", flags, 0x0, 0x20, true, 0xcb0d1c767241435d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_DEP_POLICY.Enable", enable, 0x0, 0x1, true, 0x779ba49712aaca8e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_DEP_POLICY.DisableAtlThunkEmulation", disable_atl_thunk_emulation, 0x1, 0x1, true, 0x9625a0d205b1b5a7, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_MITIGATION_DEP_POLICY.Permanent", permanent, 0x20, 0x8, true, 0xa4e0340f851c6d41)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif