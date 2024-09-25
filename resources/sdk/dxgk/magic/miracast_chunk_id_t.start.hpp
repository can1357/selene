#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "DXGK_MIRACAST_CHUNK_ID.FrameNumber", frame_number, 0x0, 0x28, true, 0x4bc52ff75a21edf8, 40, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "DXGK_MIRACAST_CHUNK_ID.PartNumber", part_number, 0x28, 0x18, true, 0xbf618250a3dec0c, 24, uint64_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGK_MIRACAST_CHUNK_ID.Value", value, 0x0, 0x40, true, 0xcf0cc7c754ce273)
#else
#define _m00
#define _m01
#define _m02
#endif