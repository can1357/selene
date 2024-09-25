#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_FLTP_FRAME.Type", type, 0x0, 0x20, true, 0xcb96dc40fc0ad53a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLTP_FRAME.Links", links, 0x40, 0x80, true, 0x263f862bf269688a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLTP_FRAME.FrameID", frame_id, 0xc0, 0x20, true, 0xa81eac7ea12c5456)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLTP_FRAME.AltitudeIntervalLow", altitude_interval_low, 0x100, 0x80, true, 0x9917617b9b028c2f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLTP_FRAME.AltitudeIntervalHigh", altitude_interval_high, 0x180, 0x80, true, 0xf61702b8f1143743)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLTP_FRAME.LargeIrpCtrlStackSize", large_irp_ctrl_stack_size, 0x200, 0x8, true, 0x3afa0de015e8c817)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLTP_FRAME.SmallIrpCtrlStackSize", small_irp_ctrl_stack_size, 0x208, 0x8, true, 0x2612945ec6227d64)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_FLTP_FRAME.RegisteredFilters", registered_filters, 0x240, 0x0, true, 0x712e63bbf54d336)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_FLTP_FRAME.AttachedVolumes", attached_volumes, 0x640, 0x0, true, 0x4bb6b1d395279982)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLTP_FRAME.MountingVolumes", mounting_volumes, 0xa40, 0x80, true, 0x5768d63189e3ff34)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_FLTP_FRAME.AttachedFileSystems", attached_file_systems, 0xac0, 0x80, true, 0x27465bb861d106a3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_FLTP_FRAME.ZombiedFltObjectContexts", zombied_flt_object_contexts, 0xd40, 0x80, true, 0xeaae84edd1c1033)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLTP_FRAME.KtmResourceManagerHandle", ktm_resource_manager_handle, 0xfc0, 0x40, true, 0x7b7c7183eb682246)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kresourcemanager_t*), "_FLTP_FRAME.KtmResourceManager", ktm_resource_manager, 0x1000, 0x40, true, 0xd0242a4fff62a1fb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_FLTP_FRAME.FilterUnloadLock", filter_unload_lock, 0x1040, 0x40, true, 0x4874f77ce548f563)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_FLTP_FRAME.DeviceObjectAttachLock", device_object_attach_lock, 0x1380, 0xc0, true, 0xcc562a130671b0ed)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_prcb_t*), "_FLTP_FRAME.Prcb", prcb, 0x1540, 0x40, true, 0x4219f4e4049e4bc7)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLTP_FRAME.PrcbPoolToFree", prcb_pool_to_free, 0x1580, 0x40, true, 0xc668e02a312e4677)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLTP_FRAME.LookasidePoolToFree", lookaside_pool_to_free, 0x15c0, 0x40, true, 0xde2a36b474f85a9b)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_irpctrl_stack_profiler_t), "_FLTP_FRAME.IrpCtrlStackProfiler", irp_ctrl_stack_profiler, 0x1600, 0xc0, true, 0x89b56569d94a9302)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_FLTP_FRAME.SmallIrpCtrlLookasideList", small_irp_ctrl_lookaside_list, 0x2000, 0x0, true, 0x742fcaa565aeee7e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_FLTP_FRAME.LargeIrpCtrlLookasideList", large_irp_ctrl_lookaside_list, 0x2400, 0x0, true, 0x5add303ac472259e)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::reserve_irpctrl_t), "_FLTP_FRAME.ReserveIrpCtrls", reserve_irp_ctrls, 0x2800, 0x40, true, 0x8b8764dbf451a069)
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
#define _m20
#define _m21
#define _m22
#endif