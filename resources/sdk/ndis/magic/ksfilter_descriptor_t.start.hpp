#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksfilter_dispatch_t*), "_KSFILTER_DESCRIPTOR.Dispatch", dispatch, 0x0, 0x0, false, 0xac54d207d0c150e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksautomation_table_t*), "_KSFILTER_DESCRIPTOR.AutomationTable", automation_table, 0x0, 0x0, false, 0xe6183c540f6aa76b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.Version", version, 0x0, 0x0, false, 0x4d63d52d2a202a7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.Flags", flags, 0x0, 0x0, false, 0xca300e77f8abd1cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_KSFILTER_DESCRIPTOR.ReferenceGuid", reference_guid, 0x0, 0x0, false, 0x3ea9ebcafbaa04b5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.PinDescriptorsCount", pin_descriptors_count, 0x0, 0x0, false, 0xb8a7626d02da9fed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.PinDescriptorSize", pin_descriptor_size, 0x0, 0x0, false, 0x444d784688fd0397)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::kspin_descriptor_ex_t*), "_KSFILTER_DESCRIPTOR.PinDescriptors", pin_descriptors, 0x0, 0x0, false, 0x8673506b6cb0b3fe)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.CategoriesCount", categories_count, 0x0, 0x0, false, 0xfa65e61c87a571bc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_KSFILTER_DESCRIPTOR.Categories", categories, 0x0, 0x0, false, 0x968ad64a147d6e3a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.NodeDescriptorsCount", node_descriptors_count, 0x0, 0x0, false, 0x188c2eefb12aa5a6)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.NodeDescriptorSize", node_descriptor_size, 0x0, 0x0, false, 0x31705735cb40f333)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksnode_descriptor_t*), "_KSFILTER_DESCRIPTOR.NodeDescriptors", node_descriptors, 0x0, 0x0, false, 0x81d3140e42a33c5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSFILTER_DESCRIPTOR.ConnectionsCount", connections_count, 0x0, 0x0, false, 0xf1f4ae43896e0848)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::kstopology_connection_t*), "_KSFILTER_DESCRIPTOR.Connections", connections, 0x0, 0x0, false, 0xcb5441ee4b3f4293)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::kscomponentid_t*), "_KSFILTER_DESCRIPTOR.ComponentId", component_id, 0x0, 0x0, false, 0xc7416a7684a28d94)
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
#define _m15
#endif