#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PROCESSOR_IDLESTATE_POLICY.Revision", revision, 0x0, 0x10, true, 0xcb3c6b2b7819da35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PROCESSOR_IDLESTATE_POLICY.Flags.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x835776ec3d7ae4ec)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PROCESSOR_IDLESTATE_POLICY.Flags.AllowScaling", allow_scaling, 0x0, 0x1, true, 0x19aad635bf45167, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PROCESSOR_IDLESTATE_POLICY.Flags.Disabled", disabled, 0x1, 0x1, true, 0xab9e690d96a7f45f, 1, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "PROCESSOR_IDLESTATE_POLICY.Flags", flags, 0x10, 0x10, true, 0xc8af443507d9be3f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_IDLESTATE_POLICY.PolicyCount", policy_count, 0x20, 0x20, true, 0x8a0c1f9710c3a45)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::processor_idlestate_info_t, 3>), "PROCESSOR_IDLESTATE_POLICY.Policy", policy, 0x40, 0xc0, true, 0xdad508a72c5a68da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif