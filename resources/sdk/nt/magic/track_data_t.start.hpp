#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_DATA.Control", control, 0x8, 0x4, true, 0xbaa9263c0c4d5ea2, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_DATA.Adr", adr, 0xc, 0x4, true, 0x6ade7cec6fe55a4f, 4, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_DATA.TrackNumber", track_number, 0x10, 0x8, true, 0x87f1d6a165b482e8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_DATA.Address", address, 0x20, 0x20, true, 0x72e8fc1f38dff6a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif