#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_REPORT_ZONES_DATA.ZoneListLength", zone_list_length, 0x0, 0x20, true, 0xb8eeb41fcbc99fd)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_REPORT_ZONES_DATA.Same", same, 0x20, 0x4, true, 0xccb4b7f1c834b83c, 4, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_REPORT_ZONES_DATA.MaxLBA", max_lba, 0x40, 0x40, true, 0x8eeca13a1a81f23d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::zone_descriptior_t, 1>), "_REPORT_ZONES_DATA.ZoneDescriptors", zone_descriptors, 0x200, 0x0, true, 0x57077fd98542e7fa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif