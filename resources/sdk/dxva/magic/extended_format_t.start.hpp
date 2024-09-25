#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_DXVA_ExtendedFormat.SampleFormat", sample_format, 0x0, 0x8, true, 0x387e8cc91f974f5d, 8, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXVA_ExtendedFormat.VideoChromaSubsampling", video_chroma_subsampling, 0x8, 0x4, true, 0xc1269ec3e568268b, 4, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int3_t), "_DXVA_ExtendedFormat.NominalRange", nominal_range, 0xc, 0x3, true, 0x60f5596a5b249214, 3, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int3_t), "_DXVA_ExtendedFormat.VideoTransferMatrix", video_transfer_matrix, 0xf, 0x3, true, 0xbfe542380c061a5f, 3, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int4_t), "_DXVA_ExtendedFormat.VideoLighting", video_lighting, 0x12, 0x4, true, 0x290c3fbebee71112, 4, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int5_t), "_DXVA_ExtendedFormat.VideoPrimaries", video_primaries, 0x16, 0x5, true, 0x4d70fae7f6908862, 5, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int5_t), "_DXVA_ExtendedFormat.VideoTransferFunction", video_transfer_function, 0x1b, 0x5, true, 0x87835223a3cd3aa, 5, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif