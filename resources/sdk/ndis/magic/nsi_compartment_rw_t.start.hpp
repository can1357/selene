#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NSI_COMPARTMENT_RW.Header", header, 0x0, 0x0, false, 0xc3b9c8b9edbfc0d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_NSI_COMPARTMENT_RW.LoopbackIfLuid", loopback_if_luid, 0x0, 0x0, false, 0x39a63b4e65b5365a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_NSI_COMPARTMENT_RW.LoopbackIfNetworkGuid", loopback_if_network_guid, 0x0, 0x0, false, 0xf2f23c8075e1cb4f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_NSI_COMPARTMENT_RW.LoopbackIfInterfaceGuid", loopback_if_interface_guid, 0x0, 0x0, false, 0x105bc513a19e6e56)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NSI_COMPARTMENT_RW.LoopbackIfDescr", loopback_if_descr, 0x0, 0x0, false, 0x3c1862342afb56f8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NSI_COMPARTMENT_RW.LoopbackIfAlias", loopback_if_alias, 0x0, 0x0, false, 0xc54038f7c8a8be90)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_NSI_COMPARTMENT_RW.CompartmentGuid", compartment_guid, 0x0, 0x0, false, 0x1ccdff655a44a9cb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NSI_COMPARTMENT_RW.CompartmentDescr", compartment_descr, 0x0, 0x0, false, 0x5115ee815af129e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::nsi_compartment_type_t), "_NDIS_NSI_COMPARTMENT_RW.CompartmentType", compartment_type, 0x0, 0x0, false, 0xee769cb73765021a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_COMPARTMENT_RW.Flags", flags, 0x0, 0x0, false, 0x7e69c4e040a6ec7d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_NSI_COMPARTMENT_RW.NamespaceGuid", namespace_guid, 0x0, 0x0, false, 0xa093973b140e1691)
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
#endif