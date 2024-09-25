#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.Signature", signature, 0x0, 0x20, true, 0xc1f6e9296dfe1a7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.Revision", revision, 0x20, 0x10, true, 0xf32023d98f086a26)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.Size", size, 0x30, 0x10, true, 0xc08bd8379e8edb29)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockSize", miniport_block_size, 0x40, 0x10, true, 0xac06faf8b6caa374)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportAdapterContextOffset", miniport_adapter_context_offset, 0x50, 0x10, true, 0x60c7bdbb1508bcd9)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.AdapterInstanceNameOffset", adapter_instance_name_offset, 0x60, 0x10, true, 0x126ecddabd25ae5f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportLowestFilterOffset", miniport_lowest_filter_offset, 0x70, 0x10, true, 0xd5ed680808076e93)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportOpenQueueOffset", miniport_open_queue_offset, 0x80, 0x10, true, 0xd3d5f5aa8c5537ca)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportDriverHandleOffset", miniport_driver_handle_offset, 0x90, 0x10, true, 0xd2d08737011dbddd)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportPendingOidOffset", miniport_pending_oid_offset, 0xa0, 0x10, true, 0xaf6f2371c208f145)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportSymbolicLinkOffset", miniport_symbolic_link_offset, 0xb0, 0x10, true, 0xa26573d7c5e58935)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MDriverBlockSize", m_driver_block_size, 0xc0, 0x10, true, 0x4ef579d24a7a5409)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportServiceNameOffset", miniport_service_name_offset, 0xd0, 0x10, true, 0x4ff7c3d5f467b00)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportImageNameOffset", miniport_image_name_offset, 0xe0, 0x10, true, 0x1efb04bea23eedbe)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterBlockSize", filter_block_size, 0xf0, 0x10, true, 0x22938988ec702174)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterDriverOffset", filter_driver_offset, 0x100, 0x10, true, 0x7d7affca135a4729)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterModuleContextOffset", filter_module_context_offset, 0x110, 0x10, true, 0x89a255b28e1aa415)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterHigherFilterOffset", filter_higher_filter_offset, 0x120, 0x10, true, 0xff9b0d09fb0e4d92)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterFriendlyNameOffset", filter_friendly_name_offset, 0x130, 0x10, true, 0x47e6f9c346ef1b93)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterPendingOidOffset", filter_pending_oid_offset, 0x140, 0x10, true, 0x55f8ba1a0064aa98)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterMiniportOffset", filter_miniport_offset, 0x150, 0x10, true, 0x32021c07fb885e5e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterDriverBlockSize", filter_driver_block_size, 0x160, 0x10, true, 0x2d59688fe7436564)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterDriverFriendlyNameOffset", filter_driver_friendly_name_offset, 0x170, 0x10, true, 0x91833916526daf71)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterServiceNameOffset", filter_service_name_offset, 0x180, 0x10, true, 0x30ff2bdfdd62b05)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.FilterImageNameOffset", filter_image_name_offset, 0x190, 0x10, true, 0x296f9666c70c80e2)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.OpenBlockSize", open_block_size, 0x1a0, 0x10, true, 0xa4dce792161dd134)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.ProtocolHandleOffset", protocol_handle_offset, 0x1b0, 0x10, true, 0x92da43f889bf3275)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.ProtocolBindingContextOffset", protocol_binding_context_offset, 0x1c0, 0x10, true, 0x1c3334856d81ba4b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportNextOpenOffset", miniport_next_open_offset, 0x1d0, 0x10, true, 0x7fef0c0a3c22933e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.OpenMiniportOffset", open_miniport_offset, 0x1e0, 0x10, true, 0x4ee14abd7e199b1e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.ProtocolBlockSize", protocol_block_size, 0x1f0, 0x10, true, 0xdf0145151677a73e)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.ProtocolNameOffset", protocol_name_offset, 0x200, 0x10, true, 0xf35e9f0cad91bbd0)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.ProtocolImageNameOffset", protocol_image_name_offset, 0x210, 0x10, true, 0x45c9c73c98f62a2d)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NBLPoolListOffset", nbl_pool_list_offset, 0x220, 0x10, true, 0xe6f20934c15270fe)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.AllocatedListOffset", allocated_list_offset, 0x230, 0x10, true, 0x317400ea8671340e)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.OwnerHandleOffset", owner_handle_offset, 0x240, 0x10, true, 0xc6fe680c9741660c)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.LookasideListOffset", lookaside_list_offset, 0x250, 0x10, true, 0x92a0fb6065281f8a)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.EntryLinkageOffset", entry_linkage_offset, 0x260, 0x10, true, 0xc314336f00c112c6)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.EntryHeaderSize", entry_header_size, 0x270, 0x10, true, 0xfd3f9288a618ba09)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.LookasideListSize", lookaside_list_size, 0x280, 0x10, true, 0xc864eecdfa5700be)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.SListHeadOffset", s_list_head_offset, 0x290, 0x10, true, 0xbc1b4153b5adb190)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BackupSListHeadOffset", backup_s_list_head_offset, 0x2a0, 0x10, true, 0xf42536727a8a9c1a)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NblSize", nbl_size, 0x2b0, 0x10, true, 0x805782c0b831f074)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NblCurrentOwnerOffset", nbl_current_owner_offset, 0x2c0, 0x10, true, 0x61048324e41bb19c)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.SourceHandleOffset", source_handle_offset, 0x2d0, 0x10, true, 0x805908afd4f6c766)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisOidRequestSize", ndis_oid_request_size, 0x2e0, 0x10, true, 0x6388431b84e18dff)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisTrackNblOwner", ndis_track_nbl_owner, 0x2f0, 0x10, true, 0xa49759bb87fb563c)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MaxNumberOfProcessors", max_number_of_processors, 0x300, 0x10, true, 0x81641c2b1a47e576)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.GlobalNetBufferListPoolList", global_net_buffer_list_pool_list, 0x340, 0x40, true, 0x7861b3e9ab57abf5)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BugcheckMiniport", bugcheck_miniport, 0x380, 0x40, true, 0x66589689d3e98845)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 32>), "_NDIS_GLOBAL_TRIAGE_BLOCK.PendingNBL", pending_nbl, 0x3c0, 0x0, true, 0x4242d877d47e3f98)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 32>), "_NDIS_GLOBAL_TRIAGE_BLOCK.PendingNBLCount", pending_nbl_count, 0xbc0, 0x0, true, 0xbaeadaa83281b19a)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NblTrackerContextOffset", nbl_tracker_context_offset, 0xdc0, 0x10, true, 0x8487e72761e9c755)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportPnPEventLogOffset", miniport_pn_p_event_log_offset, 0xdd0, 0x10, true, 0x85b3ab722e8acf9)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportSelectiveSuspendOffset", miniport_selective_suspend_offset, 0xde0, 0x10, true, 0xcc6ccbbefc87e2f3)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportSelectiveSuspendSize", miniport_selective_suspend_size, 0xdf0, 0x10, true, 0xd4c8fa4bec6a964a)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportAoAcOffset", miniport_ao_ac_offset, 0xe00, 0x10, true, 0x801e8c1f70f12f5a)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportAoAcSize", miniport_ao_ac_size, 0xe10, 0x10, true, 0x8250072b4ada0c72)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_miniport_block_bindings_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockBindings", miniport_block_bindings, 0xe20, 0x40, true, 0x4a5eb468205b56a)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bind_protocol_link_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindProtocolLink", bind_protocol_link, 0xe60, 0x40, true, 0x84e15ac112967abd)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_bind_filter_link_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindFilterLink", bind_filter_link, 0xea0, 0x40, true, 0x108ee260816111c2)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_bind_state_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindState", bind_state, 0xee0, 0x20, true, 0x6ad8c174a59d995e)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_ndis_event_log_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisEventLog", ndis_event_log, 0xf00, 0x30, true, 0x2cd22676558b4e34)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportHookAdapterHandleOffset", miniport_hook_adapter_handle_offset, 0xf30, 0x10, true, 0x1f81d1725c757975)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MDriverHookDriverHandleOffset", m_driver_hook_driver_handle_offset, 0xf40, 0x10, true, 0x2b39a60a54c88640)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MDriverHookDriverTypeOffset", m_driver_hook_driver_type_offset, 0xf50, 0x10, true, 0xdbb20c2d7e242e95)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MDriverHookRegisteredOffset", m_driver_hook_registered_offset, 0xf60, 0x10, true, 0xea72a94edd23a7f5)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NblTrackerSize", nbl_tracker_size, 0xf70, 0x10, true, 0x3d8908d0ddb5e9a7)
#define _m58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockBindings.NumProtocolsOffset", num_protocols_offset, 0x0, 0x10, true, 0xe10654e23a2d6ae9)
#define _m59 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockBindings.ProtocolListOffset", protocol_list_offset, 0x10, 0x10, true, 0x29de44ee16efb592)
#define _m60 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockBindings.NumFiltersOffset", num_filters_offset, 0x20, 0x10, true, 0x9395daf37dc86d66)
#define _m61 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockBindings.FilterListOffset", filter_list_offset, 0x30, 0x10, true, 0xf49b78dfac9ce75b)
#define _m63 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindProtocolLink.Size", size, 0x0, 0x10, true, 0x463edbec7717f357)
#define _m64 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindProtocolLink.BindStateOffset", bind_state_offset, 0x10, 0x10, true, 0x9c7a8f22946ac9aa)
#define _m65 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindProtocolLink.BindDriverOffset", bind_driver_offset, 0x20, 0x10, true, 0x8698af4de30a7358)
#define _m66 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindProtocolLink.BindDriverSize", bind_driver_size, 0x30, 0x10, true, 0x40e28b4640892465)
#define _m68 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindFilterLink.Size", size, 0x0, 0x10, true, 0xfb28fb0f8585559f)
#define _m69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindFilterLink.BindStateOffset", bind_state_offset, 0x10, 0x10, true, 0xfe2ef067606dd992)
#define _m70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindFilterLink.BindDriverOffset", bind_driver_offset, 0x20, 0x10, true, 0x7f6d3acab8439ca5)
#define _m71 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindFilterLink.BindDriverSize", bind_driver_size, 0x30, 0x10, true, 0xec17bf7975a81080)
#define _m73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindState.NumContextsOffset", num_contexts_offset, 0x0, 0x10, true, 0x1e061e8d36f766ae)
#define _m74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.BindState.ContextListOffset", context_list_offset, 0x10, 0x10, true, 0xea62f859399b55c5)
#define _m76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisEventLog.Size", size, 0x0, 0x10, true, 0x972ff4c56a696e19)
#define _m77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisEventLog.NumEntriesOffset", num_entries_offset, 0x10, 0x10, true, 0xab99349855adf182)
#define _m78 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisEventLog.EntrySizeOffset", entry_size_offset, 0x20, 0x10, true, 0xd7a5e16c6ebd1b72)
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
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
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
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m062
#define _m067
#define _m072
#define _m075
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m58
#define _m59
#define _m60
#define _m61
#define _m63
#define _m64
#define _m65
#define _m66
#define _m68
#define _m69
#define _m70
#define _m71
#define _m73
#define _m74
#define _m76
#define _m77
#define _m78
#endif