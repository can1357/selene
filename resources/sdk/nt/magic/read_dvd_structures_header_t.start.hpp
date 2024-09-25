#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_DVD_STRUCTURES_HEADER.Length", length, 0x0, 0x10, true, 0xf3e229626f731ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_READ_DVD_STRUCTURES_HEADER.Data", data, 0x20, 0x0, true, 0x35d07da3ef290ad2)
#else
#define _m00
#define _m01
#endif