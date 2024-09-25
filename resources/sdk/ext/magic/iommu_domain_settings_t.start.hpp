#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_s1_x64_domain_settings_t), "_EXT_IOMMU_DOMAIN_SETTINGS.S1", s1, 0x0, 0x0, false, 0x5d3e4a78351bb66f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DOMAIN_SETTINGS.S2.PageTableRootLevel", page_table_root_level, 0x0, 0x0, false, 0xd8a29d2b273c1f2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DOMAIN_SETTINGS.S2.InputSize", input_size, 0x0, 0x0, false, 0x415440de4c98cd12)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_DOMAIN_SETTINGS.S2.PageTableRoot", page_table_root, 0x0, 0x0, false, 0x6727125eff258034)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_s2_t), "_EXT_IOMMU_DOMAIN_SETTINGS.S2", s2, 0x0, 0x0, false, 0xb2418be5e74c7f3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif