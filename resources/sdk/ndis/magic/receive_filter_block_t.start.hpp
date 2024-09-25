#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_FILTER_BLOCK.AdapterLink", adapter_link, 0x0, 0x80, true, 0xb6d479ca710b0d7f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_FILTER_BLOCK.QueueLink", queue_link, 0x80, 0x80, true, 0x370de05273c69d61)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_FILTER_BLOCK.VPortLink", v_port_link, 0x100, 0x80, true, 0xf65a707bae4d05be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_BLOCK.FilterId", filter_id, 0x180, 0x20, true, 0x4274273ce4d46d98)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_RECEIVE_FILTER_BLOCK.Miniport", miniport, 0x1c0, 0x40, true, 0x377160daa49e1ec8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_RECEIVE_FILTER_BLOCK.Open", open, 0x200, 0x40, true, 0xb081935dea9bf0cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_queue_block_t*), "_NDIS_RECEIVE_FILTER_BLOCK.ReceiveQueue", receive_queue, 0x240, 0x40, true, 0xecaa2e5bd21967ad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_RECEIVE_FILTER_BLOCK.Reference", reference, 0x280, 0x20, true, 0xf20c3aa915bed449)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::connection_info_t), "_NDIS_RECEIVE_FILTER_BLOCK.ConnectionInfo", connection_info, 0x2a0, 0x80, true, 0xd2120f106a190d8b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_parameters_t), "_NDIS_RECEIVE_FILTER_BLOCK.FilterParameters", filter_parameters, 0x420, 0x60, true, 0x76f9d38410330596)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::vport_block_t*), "_NDIS_RECEIVE_FILTER_BLOCK.VPortBlock", v_port_block, 0x580, 0x40, true, 0x7333a475ba3ee329)
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