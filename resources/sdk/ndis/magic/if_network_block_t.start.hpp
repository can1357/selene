#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_NETWORK_BLOCK.Link", link, 0x0, 0x0, false, 0x901be7ad22396054)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_NETWORK_BLOCK.CompartmentLink", compartment_link, 0x0, 0x0, false, 0x117b3f0e1d1b6890)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_IF_NETWORK_BLOCK.NetworkGuid", network_guid, 0x0, 0x0, false, 0xaa4ab077c475f9ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_compartment_block_t*), "_NDIS_IF_NETWORK_BLOCK.Compartment", compartment, 0x0, 0x0, false, 0x6a48bddced490785)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_NETWORK_BLOCK.InterfaceLink", interface_link, 0x0, 0x0, false, 0x761f8621f9be1df1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_NETWORK_BLOCK.Flags", flags, 0x0, 0x0, false, 0x7379c63c7ae66f3b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_IF_NETWORK_BLOCK.Ref", ref, 0x0, 0x0, false, 0xd5bc50df62452e4b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nsi_network_rw_t), "_NDIS_IF_NETWORK_BLOCK.NetworkInfo", network_info, 0x0, 0x0, false, 0x529517f13b965367)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_IF_NETWORK_BLOCK.AsyncEvent", async_event, 0x0, 0x0, false, 0xa5d01861562b7ad2)
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
#endif