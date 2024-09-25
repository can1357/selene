#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_SETTINGS.EnabledCapabilities.BroadcastTlbMaintenance", broadcast_tlb_maintenance, 0x0, 0x0, false, 0x1ff73e2eac631f95, 1, uint64_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_enabled_capabilities_t), "_EXT_IOMMU_SETTINGS.EnabledCapabilities", enabled_capabilities, 0x0, 0x0, false, 0xc1656a86863eee08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_address_translation_policy_t), "_EXT_IOMMU_SETTINGS.TranslationPolicy", translation_policy, 0x0, 0x0, false, 0x3ef468b17baf779a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_interrupt_remapping_policy_t), "_EXT_IOMMU_SETTINGS.RemappingPolicy", remapping_policy, 0x0, 0x0, false, 0xb1ab4166e1a614ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_IOMMU_SETTINGS.RemappingTableEntries", remapping_table_entries, 0x0, 0x0, false, 0xbf61e8b91f7dee82)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif