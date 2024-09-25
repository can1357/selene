#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PD_BUFFER_8021Q_INFO.UserPriority", user_priority, 0x0, 0x3, true, 0x19743cefddad055, 3, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER_8021Q_INFO.CanonicalFormatId", canonical_format_id, 0x3, 0x1, true, 0x8d571c3b70b65bb2, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PD_BUFFER_8021Q_INFO.VlanId", vlan_id, 0x4, 0xc, true, 0xd756f4e89d45121b, 12, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif