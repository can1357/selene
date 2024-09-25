#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_device_type_t), "_EXPRESS_BRIDGE.BridgeType", bridge_type, 0x0, 0x20, true, 0xae7bad78df9c30d7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_t*), "_EXPRESS_BRIDGE.PciBridge", pci_bridge, 0x40, 0x40, true, 0xe41eef92765cb8e1)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_complex_t*), "_EXPRESS_BRIDGE.RootComplex", root_complex, 0x80, 0x40, true, 0x7af0f53f4143009e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_EXPRESS_BRIDGE.Parent", parent, 0xc0, 0x40, true, 0x5defb1cdfe1f8aaf)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_EXPRESS_BRIDGE.InterfaceDereference", interface_dereference, 0x100, 0x40, true, 0xc92a8f7de7509434)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, union pci::express_ltr_max_latency_register_t*, enum pci::express_port_obff_control_t*)>*), "_EXPRESS_BRIDGE.GetPowerParameters", get_power_parameters, 0x140, 0x40, true, 0xa25bdf78b1a0d335)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, uint8_t)>*, sdk::function<uint8_t(void*, uint8_t)>*>), "_EXPRESS_BRIDGE.AriForwardingEnable", ari_forwarding_enable, 0x180, 0x40, true, 0x44e33a3d1872bad5)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum pci::express_port_obff_control_t)>*), "_EXPRESS_BRIDGE.ObffControl", obff_control, 0x1c0, 0x40, true, 0x8daac90af79f072b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_EXPRESS_BRIDGE.Sibling", sibling, 0x240, 0x40, true, 0x56c23e9d28eb5eb)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_capabilities_register_t), "_EXPRESS_BRIDGE.ExpressCapabilities", express_capabilities, 0x280, 0x10, true, 0x323b85218957be76)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.AerCapability", aer_capability, 0x290, 0x10, true, 0xebba3be65408d55d)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.AriForwardingSupported", ari_forwarding_supported, 0x2b0, 0x8, true, 0xd10139c807cb21b5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.AriForwardingEnabled", ari_forwarding_enabled, 0x2b8, 0x8, true, 0xc033cf6378eadfbf)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.AcsCapability", acs_capability, 0x380, 0x10, true, 0x9ed087729f0bcc06)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t), "_EXPRESS_BRIDGE.ErrorSource", error_source, 0x440, 0x60, true, 0xd2ac3ed25fc452d5)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_ltr_max_latency_register_t), "_EXPRESS_BRIDGE.UpstreamLatency", upstream_latency, 0x2de0, 0x20, true, 0xe7b4546c11651e57)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_port_obff_control_t), "_EXPRESS_BRIDGE.ObffConfiguration", obff_configuration, 0x2e00, 0x20, true, 0x654b496b45789408)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.ThunderboltCapability", thunderbolt_capability, 0x2e20, 0x10, true, 0x1a30b6cc07b8d6)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.PhysicalSlotNumber", physical_slot_number, 0x2e30, 0x10, true, 0xe77c8ee642d6d6ac)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_EXPRESS_BRIDGE.HotPlugCommandTimer", hot_plug_command_timer, 0x3000, 0x0, true, 0x6c6f7ebd790d1949)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_EXPRESS_BRIDGE.HotPlugCommandDpc", hot_plug_command_dpc, 0x3200, 0x0, true, 0xe770b6d6cea09f5c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_EXPRESS_BRIDGE.HotPlugWorkItem", hot_plug_work_item, 0x3400, 0x40, true, 0x6c08fd38a43edb8b)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hotplug_worker_parameters_t), "_EXPRESS_BRIDGE.HotPlugWorkerParameters", hot_plug_worker_parameters, 0x3440, 0xc0, true, 0x8f862ff53f6060f1)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_downstream_t), "_EXPRESS_BRIDGE.Downstream", downstream, 0x3500, 0x40, true, 0x6b5714e479a29a70)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::upstream_switchport_t), "_EXPRESS_BRIDGE.UpstreamSwitchPort", upstream_switch_port, 0x3500, 0x80, true, 0xeaa0d15e0ae418)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_EXPRESS_BRIDGE.SetLtrEnable", set_ltr_enable, 0x200, 0x40, true, 0x64f265d8e8720a33)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.ExpressPcCapability", express_pc_capability, 0x2a0, 0x10, true, 0xf2b70884e605bb1)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EXPRESS_BRIDGE.AriForwardingEnableLock", ari_forwarding_enable_lock, 0x2c0, 0xc0, true, 0xd8c724545b9191d3)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_error_packet_t), "_EXPRESS_BRIDGE.WheaErrorPacket", whea_error_packet, 0x22a0, 0x28, true, 0x66302176a7b8bb52)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.PtmCapability", ptm_capability, 0x2e40, 0x10, true, 0x47ce5aea47798d2e)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_ptm_capability_t), "_EXPRESS_BRIDGE.PtmCapabilityBlock", ptm_capability_block, 0x2e60, 0x60, true, 0x50c667aac5956c83)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_EXPRESS_BRIDGE.PtmContext", ptm_context, 0x2ec0, 0x40, true, 0x89c8cf502fda52e7)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_BRIDGE.PtmRefCount", ptm_ref_count, 0x2f00, 0x20, true, 0xaf1d33df08fb5d04)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.ForceLowPowerLinks", force_low_power_links, 0x2f20, 0x8, true, 0xed7f0dbb2af321ab)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.AspmPolicy", aspm_policy, 0x2f28, 0x8, true, 0x9e0d8858d77627a9)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EXPRESS_BRIDGE.AspmLock", aspm_lock, 0x2f40, 0xc0, true, 0xbbd9478bdc9bcf6b)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.AcsNotNeeded", acs_not_needed, 0x390, 0x8, true, 0x64ce51d6c356ccaf)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 7>), "_EXPRESS_BRIDGE.AcsEnableCount", acs_enable_count, 0x3a0, 0x70, true, 0x54cd2d5fdccd283f)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.AtsCapability", ats_capability, 0x410, 0x10, true, 0xe89cbb7ec578a6e7)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_BRIDGE.WheaInitialized", whea_initialized, 0x420, 0x20, true, 0x9f5b1bcbbfd7ee86)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_acs_capability_register_t), "_EXPRESS_BRIDGE.AcsCapabilityRegister", acs_capability_register, 0x0, 0x0, false, 0x37c149c1871d3a6d)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::acs_hierarchy_support_t), "_EXPRESS_BRIDGE.AcsHierarchySupport", acs_hierarchy_support, 0x0, 0x0, false, 0x59fa8f2980046899)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 3>), "_EXPRESS_BRIDGE.AcsScenarios", acs_scenarios, 0x0, 0x0, false, 0xeafd6e598ca1e441)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::whea_context_t), "_EXPRESS_BRIDGE.WheaContext", whea_context, 0x0, 0x0, false, 0x2e58a86493bf4955)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_link_t), "_EXPRESS_BRIDGE.Downstream.ExpressLink", express_link, 0x0, 0x40, true, 0x3645dda02a694d08)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.Downstream.HotPlugCapable", hot_plug_capable, 0x140, 0x8, true, 0xfed1e4915b49e6b3)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hotplug_controller_t*), "_EXPRESS_BRIDGE.Downstream.HotPlugController", hot_plug_controller, 0x180, 0x40, true, 0x1370228627ef7a01)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXPRESS_BRIDGE.Downstream.InterruptsEnabled", interrupts_enabled, 0x1c0, 0x20, true, 0x7efaa0365bf4d71c)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXPRESS_BRIDGE.Downstream.InterruptStateLock", interrupt_state_lock, 0x200, 0x40, true, 0x63524f1eda229b5c)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXPRESS_BRIDGE.Downstream.DelegatedWorkItems", delegated_work_items, 0x240, 0x20, true, 0x1e4bdde8dcc27350)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_BRIDGE.Downstream.RegistrantsForAspmCallback", registrants_for_aspm_callback, 0x260, 0x20, true, 0x402dcffe1dde704b)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXPRESS_BRIDGE.Downstream.AspmPolicyHandle", aspm_policy_handle, 0x280, 0x40, true, 0x39b4d053df91575e)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.Downstream.AspmL0sOverride", aspm_l0s_override, 0x300, 0x8, true, 0x2290bd48a588a6f4)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.Downstream.AspmL1Override", aspm_l1_override, 0x308, 0x8, true, 0x53e4be7f616f249c)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_BRIDGE.Downstream.AspmOverrideFlags", aspm_override_flags, 0x320, 0x20, true, 0x17124f9a9a74db56)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.Downstream.InterruptConnected", interrupt_connected, 0x340, 0x8, true, 0xce61e6f8d721e807)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_BRIDGE.Downstream.InterruptConnectVersion", interrupt_connect_version, 0x360, 0x20, true, 0xa36a5290bb105119)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.Downstream.RootPort.MaxPayloadSize", max_payload_size, 0x0, 0x10, true, 0x4450bc8e08eff617)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_BRIDGE.Downstream.RootPort.ReadCompletionBoundary", read_completion_boundary, 0x10, 0x10, true, 0x13daa360abe6d636)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_root_control_register_t), "_EXPRESS_BRIDGE.Downstream.RootPort.RootControl", root_control, 0x20, 0x10, true, 0x1ecc238fe7d8827a)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXPRESS_BRIDGE.Downstream.RootPort.ConnectionContext", connection_context, 0x40, 0x40, true, 0xe17b4a82e375cbf5)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXPRESS_BRIDGE.Downstream.RootPort.MessageRoutineSpinLock", message_routine_spin_lock, 0x80, 0x40, true, 0x9112e8859076f68)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.Downstream.RootPort.EnableInterruptsOnS0Callback", enable_interrupts_on_s0_callback, 0x180, 0x8, true, 0x27ac076b60a4a5d3)
#define _m42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_BRIDGE.Downstream.RootPort.OnPmeList", on_pme_list, 0x188, 0x8, true, 0xaa154a7abf96c481)
#define _m43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXPRESS_BRIDGE.Downstream.RootPort.PmeListEntry", pme_list_entry, 0x1c0, 0x80, true, 0x16de6537bc5397f7)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_pme_event_type_t), "_EXPRESS_BRIDGE.Downstream.RootPort.PmeEventType", pme_event_type, 0x240, 0x20, true, 0x6f5eb27a66ef4ad7)
#define _m45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_root_error_command_t), "_EXPRESS_BRIDGE.Downstream.RootPort.RootErrorCommand", root_error_command, 0x500, 0x20, true, 0x65e8f0e660c94845)
#define _m46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_root_error_status_t), "_EXPRESS_BRIDGE.Downstream.RootPort.RootErrorStatus", root_error_status, 0x520, 0x20, true, 0x6bd027bb8d2b009c)
#define _m47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_error_source_id_t), "_EXPRESS_BRIDGE.Downstream.RootPort.ErrorSourceId", error_source_id, 0x540, 0x20, true, 0x389ddd77ca75bb46)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EXPRESS_BRIDGE.Downstream.RootPort.PtmLock", ptm_lock, 0xc0, 0xc0, true, 0x1ca2ddfe1f51ca98)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::pme_requestor_id_buffer_t), "_EXPRESS_BRIDGE.Downstream.RootPort.PmeRequestors", pme_requestors, 0x280, 0x80, true, 0xba377facd6065f0b)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_pme_requestor_id_t), "_EXPRESS_BRIDGE.Downstream.RootPort.PmeRequestorId", pme_requestor_id, 0x0, 0x0, false, 0x5c28dc6bb6adffe4)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_root_port_t), "_EXPRESS_BRIDGE.Downstream.RootPort", root_port, 0x4c0, 0x80, true, 0x33619c9cea861969)
#define _m52 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::downstream_switchport_t), "_EXPRESS_BRIDGE.Downstream.SwitchPort", switch_port, 0x4c0, 0x0, true, 0x32a2a8baf87e1359)
#define _m53 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXPRESS_BRIDGE.Downstream.AspmOverrideHandle", aspm_override_handle, 0x2c0, 0x40, true, 0x44d6ab26d36eacf9)
#define _m54 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_dpc_work_item_t), "_EXPRESS_BRIDGE.Downstream.ExpressPcWorkItem", express_pc_work_item, 0x380, 0x40, true, 0x9fea5ec410c1d8)
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
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#endif