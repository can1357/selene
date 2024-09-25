#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY.Flags", flags, 0x0, 0x20, true, 0xd184fcc2986a910e)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY.DisableExtensionPoints", disable_extension_points, 0x0, 0x1, true, 0x19a2f0b2d3c0768, 1, uint32_t)
#else
#define _m00
#define _m01
#endif