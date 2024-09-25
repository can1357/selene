#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VPORT_BLOCK.AdapterLink", adapter_link, 0x0, 0x80, true, 0xf09affab46475c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VPORT_BLOCK.OpenLink", open_link, 0x80, 0x80, true, 0xcc5c7c9cd691ccb2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VPORT_BLOCK.SwitchLink", switch_link, 0x100, 0x80, true, 0x3160589a26cee6c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VPORT_BLOCK.FunctionLink", function_link, 0x180, 0x80, true, 0xbe7d1990ae12c76d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_VPORT_BLOCK.Flags", flags, 0x200, 0x20, true, 0x86939f06bc0dd043)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_VPORT_BLOCK.Miniport", miniport, 0x240, 0x40, true, 0xce8e078ac87c67d6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_VPORT_BLOCK.Open", open, 0x280, 0x40, true, 0x497505f26d28804c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_block_t*), "_NDIS_VPORT_BLOCK.NicSwitch", nic_switch, 0x2c0, 0x40, true, 0xbaceff942e1bd1f7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_VPORT_BLOCK.AttachedFunction", attached_function, 0x300, 0x40, true, 0x13f4150a8f1afac5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_VPORT_BLOCK.Reference", reference, 0x340, 0x20, true, 0x96f45ce43ef47c05)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_vport_parameters_t), "_NDIS_VPORT_BLOCK.VPortParams", v_port_params, 0x380, 0x80, true, 0xeac23551db2fa794)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_VPORT_BLOCK.NumFilters", num_filters, 0x1b00, 0x20, true, 0x40bd8594ca897dd8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VPORT_BLOCK.FilterList", filter_list, 0x1b40, 0x80, true, 0xf58bfb8ca671f1cb)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_rss_parameters_cache_t*), "_NDIS_VPORT_BLOCK.RssParametersBuffer", rss_parameters_buffer, 0x1bc0, 0x40, true, 0xd8b75a671b69cae1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_parameters_t*), "_NDIS_VPORT_BLOCK.CombinedNdisRSSParameters", combined_ndis_rss_parameters, 0x1c00, 0x40, true, 0x5833fbe108be601c)
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