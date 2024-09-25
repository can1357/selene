#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_REQUEST_BLOCK.Signature", signature, 0x0, 0x20, true, 0xf40d007e93f8d2c7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t*), "_EXTENDED_REQUEST_BLOCK.Pool", pool, 0x40, 0x40, true, 0x9049923fc443dedc)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.OwnedMdl", owned_mdl, 0x80, 0x1, true, 0x31eea98d6a8b4b34, 1, uint8_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.RemoveFromEventQueue", remove_from_event_queue, 0x81, 0x1, true, 0x489ad8ca75b0b1c1, 1, uint8_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EXTENDED_REQUEST_BLOCK.State", state, 0x82, 0x3, true, 0xbb70900563d1af90, 3, uint8_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.RemappedSenseInfo", remapped_sense_info, 0x85, 0x1, true, 0x12c66fe8b6eb471d, 1, uint8_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.CompatSrbInUse", compat_srb_in_use, 0x86, 0x1, true, 0xb1034d27fca81dcd, 1, uint8_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.SrbActivateComponent", srb_activate_component, 0x87, 0x1, true, 0x454dd94aa7cab17f, 1, uint8_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.DoExtraAdapterDereference", do_extra_adapter_dereference, 0x88, 0x1, true, 0xb6df15f042b7ac43, 1, uint8_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.DoExtraUnitDereference", do_extra_unit_dereference, 0x89, 0x1, true, 0x5ee38009a42aa87a, 1, uint8_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.AbortInProgress", abort_in_progress, 0x8a, 0x1, true, 0xe0417972151c1b22, 1, uint8_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.ByPassPausedGateway", by_pass_paused_gateway, 0x8b, 0x1, true, 0x914e04e5d88b9dce, 1, uint8_t)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_EXTENDED_REQUEST_BLOCK.InitiatingProcessor", initiating_processor, 0x90, 0x20, true, 0xc76def59e6008bfa)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_EXTENDED_REQUEST_BLOCK.CompletedLink", completed_link, 0x100, 0x80, true, 0x7d918dd4cb111d4e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_event_queue_entry_t), "_EXTENDED_REQUEST_BLOCK.PendingLink", pending_link, 0x180, 0xc0, true, 0x5159fad1088bebe3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_EXTENDED_REQUEST_BLOCK.Mdl", mdl, 0x340, 0x40, true, 0xd3bbb32faadc06d4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "_EXTENDED_REQUEST_BLOCK.SgList", sg_list, 0x380, 0x40, true, 0xfd00fd238c67c365)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_EXTENDED_REQUEST_BLOCK.RemappedSgListMdl", remapped_sg_list_mdl, 0x3c0, 0x40, true, 0xb547992ca78e3ed0)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "_EXTENDED_REQUEST_BLOCK.RemappedSgList", remapped_sg_list, 0x400, 0x40, true, 0xba09c2707d67d16b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_EXTENDED_REQUEST_BLOCK.DataInMdl", data_in_mdl, 0x440, 0x40, true, 0x761c465ab9b94912)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_EXTENDED_REQUEST_BLOCK.DoubleBufferedMdl", double_buffered_mdl, 0x480, 0x40, true, 0x5bae7c5537314c2d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "_EXTENDED_REQUEST_BLOCK.DataInSgList", data_in_sg_list, 0x4c0, 0x40, true, 0x803a402df61c6671)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_EXTENDED_REQUEST_BLOCK.Irp", irp, 0x500, 0x40, true, 0x1fc74c2a1d178c0a)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_EXTENDED_REQUEST_BLOCK.Srb", srb, 0x540, 0x40, true, 0x9a3e3acfab443be9)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_srb_data_t), "_EXTENDED_REQUEST_BLOCK.SrbData", srb_data, 0x580, 0x40, true, 0x8de8565601591792)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_extension_t*), "_EXTENDED_REQUEST_BLOCK.Adapter", adapter, 0x6c0, 0x40, true, 0xb95cf0cc8948a225)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_extension_t*), "_EXTENDED_REQUEST_BLOCK.Unit", unit, 0x700, 0x40, true, 0xd726b3299b6294e1)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 424>), "_EXTENDED_REQUEST_BLOCK.ScatterGatherBuffer", scatter_gather_buffer, 0x740, 0x40, true, 0xb8097f3139dadbcd)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct stor::port::extended_request_block_t*)>*), "_EXTENDED_REQUEST_BLOCK.CompletionRoutine", completion_routine, 0x1480, 0x40, true, 0x768ae69023112e69)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EXTENDED_REQUEST_BLOCK.CompletionEvent", completion_event, 0x14c0, 0xc0, true, 0x31d1b8a8970f4ee2)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXTENDED_REQUEST_BLOCK.RequestWaitDuration", request_wait_duration, 0x1580, 0x40, true, 0x3ab3afa89b9e76a8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EXTENDED_REQUEST_BLOCK.RequestStartTimeStamp", request_start_time_stamp, 0x15c0, 0x40, true, 0x38f211e397e5c4ed)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EXTENDED_REQUEST_BLOCK.RequestAfterBuildIoTimeStamp", request_after_build_io_time_stamp, 0x1600, 0x40, true, 0x40a88b3cf5a00d64)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EXTENDED_REQUEST_BLOCK.RequestAfterStartIoTimeStamp", request_after_start_io_time_stamp, 0x1640, 0x40, true, 0x6072f14a01702609)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXTENDED_REQUEST_BLOCK.RequestMiniportDuration", request_miniport_duration, 0x1680, 0x40, true, 0xcbabcff2611be5d5)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EXTENDED_REQUEST_BLOCK.ActivityId", activity_id, 0x16c0, 0x80, true, 0xb1c8476d0ab5e9de)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_REQUEST_BLOCK.CompatSrbBufferSize", compat_srb_buffer_size, 0x1740, 0x20, true, 0xe41551a73b0eb79)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_REQUEST_BLOCK.Component", component, 0x1760, 0x20, true, 0xfbb2cf8df49d083a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_EXTENDED_REQUEST_BLOCK.OriginalSrb", original_srb, 0x1780, 0x40, true, 0x476b81d0537f26b8)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXTENDED_REQUEST_BLOCK.CompatSrbBuffer", compat_srb_buffer, 0x17c0, 0x40, true, 0x62cacda235615181)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_EXTENDED_REQUEST_BLOCK.ParentIrp", parent_irp, 0x1800, 0x40, true, 0x4ac8689950ac656d)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_REQUEST_BLOCK.AbortStatus", abort_status, 0x1840, 0x20, true, 0x3bc5801c82ee1128)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXTENDED_REQUEST_BLOCK.ZoneOverflowIo", zone_overflow_io, 0x8c, 0x1, true, 0x6e912e564d9f1770, 1, uint8_t)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_REQUEST_BLOCK.ChannelNumber", channel_number, 0xc0, 0x20, true, 0xbf059f8415ebc36f)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_crypto_key_info_t*), "_EXTENDED_REQUEST_BLOCK.CryptoKeyInfo", crypto_key_info, 0x1880, 0x40, true, 0x6c55e0ba13b6c232)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::startio_token_t*), "_EXTENDED_REQUEST_BLOCK.InitiatingToken", initiating_token, 0x0, 0x0, false, 0xe7b7fe470a1e9cb3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXTENDED_REQUEST_BLOCK.SrbData.OriginalRequest", original_request, 0x0, 0x40, true, 0x13a1780c5e61f200)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXTENDED_REQUEST_BLOCK.SrbData.DataBuffer", data_buffer, 0x40, 0x40, true, 0x46777239467a8bde)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXTENDED_REQUEST_BLOCK.SrbData.DataInBuffer", data_in_buffer, 0x80, 0x40, true, 0x56d3543e3c924138)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXTENDED_REQUEST_BLOCK.SrbData.SenseInfoBuffer", sense_info_buffer, 0xc0, 0x40, true, 0x33161a886348e881)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_REQUEST_BLOCK.SrbData.SenseInfoBufferLength", sense_info_buffer_length, 0x100, 0x8, true, 0x8134833b87e6bfdd)
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
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#endif