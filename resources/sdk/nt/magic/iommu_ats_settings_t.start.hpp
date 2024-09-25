#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_ATS_SETTINGS.AtsSupported", ats_supported, 0x0, 0x0, false, 0x7d84edc75bf9e2c, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_ATS_SETTINGS.AtsRequired", ats_required, 0x0, 0x0, false, 0xefca98d92d2f9616, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_IOMMU_ATS_SETTINGS.Rsvd", rsvd, 0x0, 0x0, false, 0xb238c60643ddcc24, 6, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOMMU_ATS_SETTINGS.AsUCHAR", as_uchar, 0x0, 0x0, false, 0xcadd55426f465b34)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif