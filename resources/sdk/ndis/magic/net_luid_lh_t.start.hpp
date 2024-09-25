#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NET_LUID_LH.Value", value, 0x0, 0x40, true, 0x4eced99d677a9359)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_NET_LUID_LH.Info.NetLuidIndex", net_luid_index, 0x18, 0x18, true, 0x90aa8e9da29578d9, 24, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_NET_LUID_LH.Info.IfType", if_type, 0x30, 0x10, true, 0xe4584de73e9b0cab, 16, uint64_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_info_t), "_NET_LUID_LH.Info", info, 0x0, 0x40, true, 0xfa43ee37d35f55f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif