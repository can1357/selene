#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_REGISTERED_IOMMU.ListEntry", list_entry, 0x0, 0x0, false, 0x2dc5420b3ec90b94)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REGISTERED_IOMMU.InternalData", internal_data, 0x0, 0x0, false, 0xf8bd068835d403d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.InternalDataSize", internal_data_size, 0x0, 0x0, false, 0x78269af3cf44c334)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REGISTERED_IOMMU.InterruptContext", interrupt_context, 0x0, 0x0, false, 0xb5e93a1c723525f6)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_REGISTERED_IOMMU.Irql", irql, 0x0, 0x0, false, 0xea7e457ae9da9898)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REGISTERED_IOMMU.Gsi", gsi, 0x0, 0x0, false, 0xacb4fa4bbf3598a6)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_REGISTERED_IOMMU.InterruptPolarity", interrupt_polarity, 0x0, 0x0, false, 0x9ca0cac8150dfbd3)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_REGISTERED_IOMMU.InterruptMode", interrupt_mode, 0x0, 0x0, false, 0x9e6a7d0a1df6ec47)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_function_table_t), "_REGISTERED_IOMMU.FunctionTable", function_table, 0x0, 0x0, false, 0xb766bb5cd6a5cb8c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_function_table_extended_t), "_REGISTERED_IOMMU.FunctionTableExtended", function_table_extended, 0x0, 0x0, false, 0x8f3b887d6908ec07)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.Flags", flags, 0x0, 0x0, false, 0x8c4ddc5489c8d6b8)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_REGISTERED_IOMMU.PasidTableListHead", pasid_table_list_head, 0x0, 0x0, false, 0x136b8c396fdb714f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_page_handling_data_t), "_REGISTERED_IOMMU.PageHandling", page_handling, 0x0, 0x0, false, 0xf64f91cef9b2cfcf)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.MaximumDomainIds", maximum_domain_ids, 0x0, 0x0, false, 0x3f299799c56293b2)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REGISTERED_IOMMU.DomainIdBitmapLock", domain_id_bitmap_lock, 0x0, 0x0, false, 0xc04bcf33a446a69f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_REGISTERED_IOMMU.DomainIdBitmap", domain_id_bitmap, 0x0, 0x0, false, 0x45e6968ba7a258f8)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.Capabilities", capabilities, 0x0, 0x0, false, 0x86b955feb2bc589d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_known_iommu_type_t), "_REGISTERED_IOMMU.KnownType", known_type, 0x0, 0x0, false, 0x12801127f8b5ffc5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.PciSegment", pci_segment, 0x0, 0x0, false, 0xb00d02dd3a09e8b9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.PciBus", pci_bus, 0x0, 0x0, false, 0x91d973a4d5d28806)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::slot_number_t), "_REGISTERED_IOMMU.PciSlot", pci_slot, 0x0, 0x0, false, 0x4451fdc90b2b4f92)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_REGISTERED_IOMMU.MsiAddress", msi_address, 0x0, 0x0, false, 0xcf7cec16edf4635d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REGISTERED_IOMMU.MsiData", msi_data, 0x0, 0x0, false, 0xa692123da419f585)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.MaximumAsids", maximum_asids, 0x0, 0x0, false, 0x9259c5df7ee97e14)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_IOMMU.Identifier", identifier, 0x0, 0x0, false, 0xfdea97e21dc58057)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_REGISTERED_IOMMU.ResourceId", resource_id, 0x0, 0x0, false, 0x1046b94abdcc62ff)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_reserved_device_list_t*), "_REGISTERED_IOMMU.ReservedDevices", reserved_devices, 0x0, 0x0, false, 0x3f95ed8e21962092)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif