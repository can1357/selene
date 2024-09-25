#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_domain_type_t), "_EXT_IOMMU_DOMAIN.DomainType", domain_type, 0x0, 0x0, false, 0x3b97500f9df02a2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_translation_type_t), "_EXT_IOMMU_DOMAIN.TranslationType", translation_type, 0x0, 0x0, false, 0x5c12466870a20053)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_DOMAIN.Flags.DefaultDomain", default_domain, 0x0, 0x0, false, 0xc164881102326ea, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_DOMAIN.Flags.FirmwareDomain", firmware_domain, 0x0, 0x0, false, 0x424336e34f83f116, 1, uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_EXT_IOMMU_DOMAIN.Flags", flags, 0x0, 0x0, false, 0xf2760517ccb2d494)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU_DOMAIN.FirmwareDomainId", firmware_domain_id, 0x0, 0x0, false, 0x7039bca7b11d82da)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_domain_settings_t), "_EXT_IOMMU_DOMAIN.Settings", settings, 0x0, 0x0, false, 0x3961ecd33ee0e819)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_IOMMU_DOMAIN.ContextId", context_id, 0x0, 0x0, false, 0x2274ca3e0f9b8dd7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_IOMMU_DOMAIN.DeviceCount", device_count, 0x0, 0x0, false, 0x68389afb74b8f024)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXT_IOMMU_DOMAIN.Devices", devices, 0x0, 0x0, false, 0xa5782030bcfd6b03)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::env_spinlock_t), "_EXT_IOMMU_DOMAIN.Lock", lock, 0x0, 0x0, false, 0x4c2d595905b3e64b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_domain_t*), "_EXT_IOMMU_DOMAIN.S2Domain", s2_domain, 0x0, 0x0, false, 0x8f635dc30c604672)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif