#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_QUEUE_BLOCK.AdapterLink", adapter_link, 0x0, 0x80, true, 0xaf46525ec5e243d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_QUEUE_BLOCK.OpenLink", open_link, 0x80, 0x80, true, 0x87602e7a88e33536)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_QUEUE_BLOCK.FilterList", filter_list, 0x100, 0x80, true, 0x29bd1ff95506293)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_BLOCK.QueueId", queue_id, 0x180, 0x20, true, 0x52fd4d943097960)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::receive_queue_pnp_state_t), "_NDIS_RECEIVE_QUEUE_BLOCK.QueuePnPState", queue_pn_p_state, 0x1a0, 0x20, true, 0x8586a3359daa3d8a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::receive_queue_operational_state_t), "_NDIS_RECEIVE_QUEUE_BLOCK.QueueState", queue_state, 0x1c0, 0x20, true, 0xd8af63586217bf0c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_RECEIVE_QUEUE_BLOCK.Miniport", miniport, 0x200, 0x40, true, 0x1ad0adce04fa3b47)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_RECEIVE_QUEUE_BLOCK.Open", open, 0x240, 0x40, true, 0x72cdce36a398e76f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_RECEIVE_QUEUE_BLOCK.Reference", reference, 0x280, 0x20, true, 0xcb57f17042da6cb9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_BLOCK.NumFilters", num_filters, 0x2a0, 0x20, true, 0x9b5b212300220818)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_RECEIVE_QUEUE_BLOCK.SharedMemoryList", shared_memory_list, 0x2c0, 0x80, true, 0x52831f25e10a8b7a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*), "_NDIS_RECEIVE_QUEUE_BLOCK.AllocateSharedMemoryHandler", allocate_shared_memory_handler, 0x340, 0x40, true, 0xc6371837786c50bb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_RECEIVE_QUEUE_BLOCK.FreeSharedMemoryHandler", free_shared_memory_handler, 0x380, 0x40, true, 0x5e030dbdc779050b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_RECEIVE_QUEUE_BLOCK.MacAddress", mac_address, 0x3c0, 0x30, true, 0xf0d3e04a0561f330)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_queue_parameters_t), "_NDIS_RECEIVE_QUEUE_BLOCK.QueueParameters", queue_parameters, 0x400, 0x40, true, 0x2cce6552cbf666b9)
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