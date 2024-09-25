#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_M_PERIODIC_RECEIVES.NextMiniportBlock", next_miniport_block, 0x0, 0x40, true, 0xac649e3009a59a3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::m_periodic_receive_state_t), "_NDIS_M_PERIODIC_RECEIVES.State", state, 0x40, 0x20, true, 0x458f2c67e191ef77)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_M_PERIODIC_RECEIVES.SpinLock", spin_lock, 0x80, 0x40, true, 0x8b80dd65c2add3be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_M_PERIODIC_RECEIVES.LockThread", lock_thread, 0xc0, 0x40, true, 0x5ae922c994bbae4d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_M_PERIODIC_RECEIVES.NumMQueuedNbls", num_m_queued_nbls, 0x100, 0x20, true, 0x8d747552b1336fb7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_M_PERIODIC_RECEIVES.NumNblsDequeued", num_nbls_dequeued, 0x120, 0x20, true, 0x749afe8e9803092d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_M_PERIODIC_RECEIVES.QueuedHead", queued_head, 0x140, 0x40, true, 0x7ed4b860eca5720)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_M_PERIODIC_RECEIVES.QueuedTail", queued_tail, 0x180, 0x40, true, 0xbf74ebf35b1a8e38)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.BoundToIP", bound_to_ip, 0x1c0, 0x20, true, 0xa3ce76795a6aefdd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_M_PERIODIC_RECEIVES.Paused", paused, 0x1e0, 0x8, true, 0xbbf29cc1d313e56f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_M_PERIODIC_RECEIVES.NblsAllocated", nbls_allocated, 0x200, 0x20, true, 0x1309e3d1309bd62b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.TrackingQueued", tracking_queued, 0x220, 0x20, true, 0x212485894b538561)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.TrackingDequeued", tracking_dequeued, 0x240, 0x20, true, 0x2bc1e45e363f2995)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.TrackingResources", tracking_resources, 0x260, 0x20, true, 0x138f329561c36b1f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.TrackingPending", tracking_pending, 0x280, 0x20, true, 0xd30c1c745ff6cafd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.TrackingIndicated", tracking_indicated, 0x2a0, 0x20, true, 0x7b85e0882f8d14e3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.TrackingEmptied", tracking_emptied, 0x2c0, 0x20, true, 0x7192ff6edb105834)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_M_PERIODIC_RECEIVES.WorkItem", work_item, 0x300, 0x0, true, 0x1b36373046e65961)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_M_PERIODIC_RECEIVES.WorkItemQueued", work_item_queued, 0x400, 0x20, true, 0x431cddcd4074378d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_PERIODIC_RECEIVES.LockDbg", lock_dbg, 0x0, 0x0, false, 0xa58b7099157f3290)
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
#define _m16
#define _m17
#define _m18
#define _m19
#endif