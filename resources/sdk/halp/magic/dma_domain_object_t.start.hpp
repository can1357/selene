#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_DOMAIN_OBJECT.ListEntry", list_entry, 0x0, 0x80, true, 0x1a5bb0d65bbd1412)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HALP_DMA_DOMAIN_OBJECT.MaximumPhysicalAddress", maximum_physical_address, 0x80, 0x40, true, 0xb1ab06566153c54b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HALP_DMA_DOMAIN_OBJECT.BoundaryAddressMultiple", boundary_address_multiple, 0xc0, 0x40, true, 0x3b2ddedfdcedd348)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_DOMAIN_OBJECT.CacheCoherent", cache_coherent, 0x100, 0x8, true, 0xc8fdd6ef78942e74)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_DOMAIN_OBJECT.FirmwareReserved", firmware_reserved, 0x108, 0x8, true, 0x8c7b5c94f3aaad42)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::iommu_dma_domain_t*>), "_HALP_DMA_DOMAIN_OBJECT.IommuDomainPointer", iommu_domain_pointer, 0x140, 0x40, true, 0xd1fca254005ee715)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_HALP_DMA_DOMAIN_OBJECT.TranslationType", translation_type, 0x200, 0x20, true, 0x79135fcc16a7cf18, 32, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::adapter_object_t*), "_HALP_DMA_DOMAIN_OBJECT.OwningAdapter", owning_adapter, 0x240, 0x40, true, 0x42e6253cc25176cf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_HALP_DMA_DOMAIN_OBJECT.CommonBufferRoot", common_buffer_root, 0x280, 0x80, true, 0xd2eb00b6e0008db4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_DOMAIN_OBJECT.CommonBufferTreeLock", common_buffer_tree_lock, 0x300, 0x40, true, 0x91da23e7123fd3fb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_DOMAIN_OBJECT.VectorCommonBufferListHead", vector_common_buffer_list_head, 0x340, 0x80, true, 0xb4558d8fc41817bf)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_DOMAIN_OBJECT.VectorCommonBufferLock", vector_common_buffer_lock, 0x3c0, 0x40, true, 0xad661128cf0ae14a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_DOMAIN_OBJECT.DomainRefCount", domain_ref_count, 0x400, 0x20, true, 0x7679e7c4b6978688)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HALP_DMA_DOMAIN_OBJECT.LaState", la_state, 0x180, 0x40, true, 0x3d556dd5dd2c827)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_DOMAIN_OBJECT.LaStateLock", la_state_lock, 0x1c0, 0x40, true, 0xf704aa61db16c91a)
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
#define _m12
#define _m13
#define _m14
#endif