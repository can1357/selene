#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_S1_X64_DOMAIN_SETTINGS.Flags.EnableTranslation", enable_translation, 0x0, 0x0, false, 0x3d045739353dfbe1, 1, uint8_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_EXT_IOMMU_S1_X64_DOMAIN_SETTINGS.Flags", flags, 0x0, 0x0, false, 0x114b25b43a367942)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXT_IOMMU_S1_X64_DOMAIN_SETTINGS.PasidTable", pasid_table, 0x0, 0x0, false, 0x1f2dd0ef5d68e3f0)
#else
#define _m00
#define _m01
#define _m02
#endif