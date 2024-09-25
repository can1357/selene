#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.hPrivateData", h_private_data, 0x0, 0x40, true, 0x4cde2494873f1f41)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.PresentAtQpc", present_at_qpc, 0x40, 0x40, true, 0xea8277f6775d5e5e)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.Flags.Discard", discard, 0x0, 0x1, true, 0x786b95e6eeced052, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.Flags.PresentAt", present_at, 0x1, 0x1, true, 0x5b55af477bbe4232, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.Flags.Value", value, 0x0, 0x20, true, 0xd383cc4554dce4bc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.Flags", flags, 0x80, 0x20, true, 0x62679dc820f882d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif