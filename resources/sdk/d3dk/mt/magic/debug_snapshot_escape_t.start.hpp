#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEBUG_SNAPSHOT_ESCAPE.Length", length, 0x0, 0x20, true, 0xea352178f72237cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_D3DKMT_DEBUG_SNAPSHOT_ESCAPE.Buffer", buffer, 0x20, 0x8, true, 0x70a474dcc6399a10)
#else
#define _m00
#define _m01
#endif