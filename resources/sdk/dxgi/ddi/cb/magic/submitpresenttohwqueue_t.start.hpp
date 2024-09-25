#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.pDXGIContext", p_dxgi_context, 0x0, 0x40, true, 0x864a16f5d54fdb31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.BroadcastSrcAllocations", broadcast_src_allocations, 0x40, 0x40, true, 0x96ef51e7a4b4057f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.BroadcastDstAllocations", broadcast_dst_allocations, 0x80, 0x40, true, 0xd74ea265c0007ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.hHwQueues", h_hw_queues, 0xc0, 0x40, true, 0xf6ae037803f75081)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.BroadcastHwQueueCount", broadcast_hw_queue_count, 0x100, 0x20, true, 0x81c39dd14ed9aae7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.PrivateDriverDataSize", private_driver_data_size, 0x120, 0x20, true, 0xcd3d6fd29a5455c1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.pPrivateDriverData", p_private_driver_data, 0x140, 0x40, true, 0x481ba438457d7fc7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.bOptimizeForComposition", b_optimize_for_composition, 0x180, 0x8, true, 0x17195241b0c9a7c3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.SyncIntervalOverrideValid", sync_interval_override_valid, 0x1a0, 0x20, true, 0xe7725f9fc5d472bd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.SyncIntervalOverride", sync_interval_override, 0x1c0, 0x20, true, 0x61358c5476b698ed)
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
#endif