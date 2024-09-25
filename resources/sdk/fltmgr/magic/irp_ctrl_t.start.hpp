#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_IRP_CTRL.Type", type, 0x0, 0x20, true, 0x1fe06e231ae12f14)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IRP_CTRL.Flags", flags, 0x20, 0x20, true, 0x2df7c84faae4021a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP_CTRL.MajorFunction", major_function, 0x60, 0x8, true, 0xa04bd0e34d41dc16)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP_CTRL.CompletionStackLength", completion_stack_length, 0x70, 0x8, true, 0x140d35702a30384d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP_CTRL.NextCompletion", next_completion, 0x78, 0x8, true, 0x3744c3deebce7230)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::completion_node_t*), "_IRP_CTRL.CompletionStack", completion_stack, 0x80, 0x40, true, 0x21933fc41d78c19)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_IRP_CTRL.SyncEvent", sync_event, 0xc0, 0xc0, true, 0xfe72e9fd282a1fe2)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_IRP_CTRL.Irp", irp, 0x180, 0x40, true, 0xe84de124e8826c3d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::filter_callback_data_t*), "_IRP_CTRL.FsFilterData", fs_filter_data, 0x180, 0x40, true, 0x8c666a614c0f22fa)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_callback_data_t*, void*)>*), "_IRP_CTRL.AsyncCompletionRoutine", async_completion_routine, 0x1c0, 0x40, true, 0x8c01214cb1b8ee10)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IRP_CTRL.AsyncCompletionContext", async_completion_context, 0x200, 0x40, true, 0xe5e7670a0fce1420)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_IRP_CTRL.InitiatingInstance", initiating_instance, 0x240, 0x40, true, 0x673127bb9bda55c2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::callback_node_t*), "_IRP_CTRL.PendingCallbackNode", pending_callback_node, 0x280, 0x40, true, 0x3100382d09fb4107)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::callback_node_t*), "_IRP_CTRL.StartingCallbackNode", starting_callback_node, 0x280, 0x40, true, 0xe1d400adc63de68d)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_pre_op_t), "_IRP_CTRL.preOp", pre_op, 0x2c0, 0x40, true, 0xbbeb017a7fb0152e)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_post_op_t), "_IRP_CTRL.postOp", post_op, 0x2c0, 0x40, true, 0x88a3347c8bc9f5d2)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::irp_ctrl_t*)>*), "_IRP_CTRL.PostCompletionRoutine", post_completion_routine, 0x300, 0x40, true, 0x1f8474fe7e650443)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IRP_CTRL.DeviceObject", device_object, 0x340, 0x40, true, 0x1d8f1ebf4fe7a0b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_IRP_CTRL.FileObject", file_object, 0x380, 0x40, true, 0xd9d513ca07d954ab)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_workitem_t), "_IRP_CTRL.FltWork", flt_work, 0x3c0, 0x40, true, 0x566e191a685a66dc)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IRP_CTRL.PendingCallbackContext", pending_callback_context, 0x3c0, 0x40, true, 0x682d9d428bf6e974)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::completion_node_t*), "_IRP_CTRL.CachedCompletionNode", cached_completion_node, 0x400, 0x40, true, 0x77e64010cb26398)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IRP_CTRL.PendingStatus", pending_status, 0x440, 0x20, true, 0x68983250c29c17bf)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_create_irp_t), "_IRP_CTRL.CreateIrp", create_irp, 0x500, 0x0, true, 0x6adc8d381892a67a)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_close_irp_t), "_IRP_CTRL.CloseIrp", close_irp, 0x500, 0x40, true, 0xd23b66ce84127160)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::kernel_trace_timestamp_t), "_IRP_CTRL.OperationTimestamp", operation_timestamp, 0x600, 0x0, true, 0xdf0cc7df8cc082ce)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IRP_CTRL.TraceStatus", trace_status, 0x700, 0x20, true, 0x30c3cc3d8157f9fc)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_callback_data_t), "_IRP_CTRL.Data", data, 0x740, 0xc0, true, 0x6b673d61a05ec8e9)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_io_parameter_block_t), "_IRP_CTRL.WorkingParameters", working_parameters, 0xa00, 0x40, true, 0x24323b69dd133c91)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IRP_CTRL.LookAsideProcessorIndex", look_aside_processor_index, 0x40, 0x20, true, 0xf57864a25c60f66a)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP_CTRL.DataScanConflictRetryCount", data_scan_conflict_retry_count, 0x68, 0x8, true, 0x88d920ed76654d87)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::irp_call_ctrl_t*), "_IRP_CTRL.preOp.Icc", icc, 0x0, 0x40, true, 0x17f629b4e7a1b1a0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_IRP_CTRL.postOp.SwappedBufferMdl", swapped_buffer_mdl, 0x0, 0x40, true, 0xe2fe689637bd8a4e)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_create_ctrl_t*), "_IRP_CTRL.CreateIrp.NameCacheCtrl", name_cache_ctrl, 0x0, 0x40, true, 0xc738d8e5951e7f06)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IRP_CTRL.CreateIrp.SavedFsContext", saved_fs_context, 0x40, 0x40, true, 0x6d9c9dbf46b7259a)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_IRP_CTRL.CreateIrp.SavedFileName", saved_file_name, 0x80, 0x80, true, 0x76af341d4b87aeb8)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::stream_list_ctrl_t*), "_IRP_CTRL.CloseIrp.StreamListCtrl", stream_list_ctrl, 0x0, 0x40, true, 0x419177e2c46ceb53)
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
#define _m015
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m028
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m14
#define _m16
#define _m25
#define _m26
#define _m27
#define _m29
#endif