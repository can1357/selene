#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_device_type_t), "_EXPRESS_PORT.DeviceType", device_type, 0x0, 0x20, true, 0xb171c19c1932ba9)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_EXPRESS_PORT.Device", device, 0x40, 0x40, true, 0x984238e300da7248)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_complex_t*), "_EXPRESS_PORT.RootComplex", root_complex, 0x80, 0x40, true, 0x2bf6ba9c958b01ac)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_EXPRESS_PORT.RootPortBridge", root_port_bridge, 0xc0, 0x40, true, 0x7bb28365c9718f37)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_EXPRESS_PORT.Parent", parent, 0x100, 0x40, true, 0x4ee9f32dc21f828)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_capabilities_register_t), "_EXPRESS_PORT.ExpressCapabilities", express_capabilities, 0x140, 0x10, true, 0x68854313ec40b31)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_register_t), "_EXPRESS_PORT.DeviceControl", device_control, 0x150, 0x10, true, 0x8b26810a887032ae)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_2_register_t), "_EXPRESS_PORT.DeviceControl2", device_control2, 0x170, 0x10, true, 0x813e261aa27e4a00)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_capabilities_register_t), "_EXPRESS_PORT.DeviceCapabilities", device_capabilities, 0x180, 0x20, true, 0xaa4e453cb56e3e1e)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_capabilities_2_register_t), "_EXPRESS_PORT.DeviceCapabilities2", device_capabilities2, 0x1a0, 0x20, true, 0x77e70591fbb23e4f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_slot_capabilities_register_t), "_EXPRESS_PORT.SlotCapabilities", slot_capabilities, 0x1c0, 0x20, true, 0x458c2d3c276eff37)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_port_t*), "_EXPRESS_PORT.Sibling", sibling, 0x200, 0x40, true, 0xed2362b27d1470a4)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_link_t*), "_EXPRESS_PORT.ExpressLink", express_link, 0x240, 0x40, true, 0x250d72c6473d47b8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.AcceptableL0sLatency", acceptable_l0s_latency, 0x280, 0x20, true, 0x216e401ef4bd4a82)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.AcceptableL1Latency", acceptable_l1_latency, 0x2a0, 0x20, true, 0xa6a38da3b2ba4ec3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.ComputedL0sLatency", computed_l0s_latency, 0x2c0, 0x20, true, 0xe6bf6a5f8eef9ddd)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.ComputedL1Latency", computed_l1_latency, 0x2e0, 0x20, true, 0xf76e12128b1cc337)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.BaseVersion11OrGreater", base_version11_or_greater, 0x300, 0x1, true, 0x469b367d2885c669, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.RegisteredForAspmCallback", registered_for_aspm_callback, 0x301, 0x1, true, 0x102f8a32e975e95b, 1, uint32_t)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.SerialNumberCapability", serial_number_capability, 0x320, 0x10, true, 0xa62c41da0022b88a)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXPRESS_PORT.SerialNumber", serial_number, 0x340, 0x40, true, 0xb94d97e4c0b09431)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.AerCapability", aer_capability, 0x380, 0x10, true, 0x1b8b350e05c027cd)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_aer_capability_t), "_EXPRESS_PORT.AerCapabilityBlock", aer_capability_block, 0x3a0, 0x60, true, 0x1120f87e83e3c9ee)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.NextAriFunctionNumber", next_ari_function_number, 0x820, 0x20, true, 0xd3fa109e2ac8002c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.AriCapability", ari_capability, 0x840, 0x10, true, 0xa4d4ed63cdd7184d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.AcsCapability", acs_capability, 0x880, 0x10, true, 0xaed0880cca6413b7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_acs_control_t), "_EXPRESS_PORT.AcsControl", acs_control, 0x890, 0x10, true, 0x81335db7912e6c6e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.AtsCapability", ats_capability, 0x8a0, 0x10, true, 0x7c050f1be9e59b2a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.PasidCapability", pasid_capability, 0x8b0, 0x10, true, 0x4412c0e847549142)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.PriCapability", pri_capability, 0x8c0, 0x10, true, 0x9807ea42737ef93e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, enum nt::device_power_state_t, void*)>*), "_EXPRESS_PORT.HalDevicePowerTransCallback", hal_device_power_trans_callback, 0x940, 0x40, true, 0x8cbaf44e1fdc71bf)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXPRESS_PORT.HalDevicePowerTransCallbackContext", hal_device_power_trans_callback_context, 0x980, 0x40, true, 0x533a8e54083adebf)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.VcCapability", vc_capability, 0x9c0, 0x10, true, 0xaaa96b1481c07df6)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.SriovCapability", sriov_capability, 0xbc0, 0x10, true, 0x8ddb59fc96fd9588)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.FirstVFOffset", first_vf_offset, 0xbd0, 0x10, true, 0xfb6c55fc50c6339f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.VFStride", vf_stride, 0xbe0, 0x10, true, 0x2fc13036a4c8d5ac)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.InitialVFs", initial_v_fs, 0xbf0, 0x10, true, 0xe4d3abc8cb3c4b8b)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.TotalVFs", total_v_fs, 0xc00, 0x10, true, 0x2640b3a009437447)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.NumVFs", num_v_fs, 0xc10, 0x10, true, 0xcfd506f035b5dcd5)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_PORT.EnableSriovDecodes", enable_sriov_decodes, 0xc20, 0x8, true, 0x9fa375a654d86cac)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_PORT.SriovEnabled", sriov_enabled, 0xc28, 0x8, true, 0x1100ad642bcbc75)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_EXPRESS_PORT.ProbedVfBars", probed_vf_bars, 0xc40, 0xc0, true, 0x614e17efb3ccf615)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_error_packet_t), "_EXPRESS_PORT.WheaErrorPacket", whea_error_packet, 0xd00, 0x28, true, 0x9260715037814d3b)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t), "_EXPRESS_PORT.ErrorSource", error_source, 0x1828, 0x60, true, 0x62970278422978d4)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.TphRequesterCapability", tph_requester_capability, 0x3690, 0x10, true, 0xc704b28c81a61b94)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_PORT.TphRequesterCapabilitySaved", tph_requester_capability_saved, 0x36a0, 0x8, true, 0xc731ea3c6d40dd72)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_tph_requester_capability_t), "_EXPRESS_PORT.TphRequesterCapabilityBlock", tph_requester_capability_block, 0x36c0, 0x60, true, 0xcb434a1a480e5135)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_tph_st_table_entry_t*), "_EXPRESS_PORT.TphSteeringTags", tph_steering_tags, 0x3740, 0x40, true, 0xaf831c366b15adfb)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_port_obff_control_t), "_EXPRESS_PORT.Obff", obff, 0x3780, 0x20, true, 0x1a68bfa0953b5d82)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.LtrCapability", ltr_capability, 0x37a0, 0x10, true, 0x145df1a795ecfda2)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_PORT.LtrCapabilitySaved", ltr_capability_saved, 0x37b0, 0x8, true, 0xb9a1fcc26f25608f)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_ltr_capability_t), "_EXPRESS_PORT.LtrCapabilityBlock", ltr_capability_block, 0x37c0, 0x40, true, 0x5bcebdfff109aa7)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_ltr_max_latency_register_t), "_EXPRESS_PORT.LatencyForDownstreamEndpoints", latency_for_downstream_endpoints, 0x37a0, 0x20, true, 0x3550f5ddfe97a9c1)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.ThunderboltCapability", thunderbolt_capability, 0x3800, 0x10, true, 0x12d6647dae9a4ad7)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.L1PmSsCapability", l1_pm_ss_capability, 0x3810, 0x10, true, 0x5541ff17580dcec7)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_PORT.L1PmSsCapabilitySaved", l1_pm_ss_capability_saved, 0x3820, 0x8, true, 0xba7df3b4101fcccf)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_l1_pm_ss_capability_t), "_EXPRESS_PORT.L1PmSsCapabilityBlock", l1_pm_ss_capability_block, 0x3840, 0x80, true, 0xbb13066e346dd70d)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::resizable_bar_info_t), "_EXPRESS_PORT.ResizableBar", resizable_bar, 0x38c0, 0x20, true, 0x99fd0a654078a2c7)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.VcSaveSize", vc_save_size, 0x39e0, 0x20, true, 0xfe9402a5f8201a6e)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_EXPRESS_PORT.VcSaveArea", vc_save_area, 0x3a00, 0x40, true, 0x4b022a9ac9d0f00e)
#define _m060 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.VcCapabilitySaved", vc_capability_saved, 0x3a40, 0x1, true, 0xa0e4544e24c3f62a, 1, uint32_t)
#define _m061 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.AcsCapabilitySaved", acs_capability_saved, 0x3a41, 0x1, true, 0x9e23fd1069693b6c, 1, uint32_t)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.FlagsAsULONG", flags_as_ulong, 0x3a40, 0x20, true, 0x3d5ff100fccf8ac1)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_register_t), "_EXPRESS_PORT.OldDeviceControl", old_device_control, 0x160, 0x10, true, 0x8bf0dbdd6447feb9)
#define _m064 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.SvmEnabled", svm_enabled, 0x302, 0x1, true, 0x28e26c1b46144895, 1, uint32_t)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.ExpressPcCapability", express_pc_capability, 0x390, 0x10, true, 0x9c2553ef000b0f0f)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_dpc_capability_t), "_EXPRESS_PORT.ExpressPcCapabilityBlock", express_pc_capability_block, 0x600, 0x20, true, 0x17b9badb3e8fed54)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.AriForwardingEnableCount", ari_forwarding_enable_count, 0x860, 0x20, true, 0x55981dcd401706fe)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.PtmCapability", ptm_capability, 0x8d0, 0x10, true, 0x9611e77268d6665b)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_ptm_capability_t), "_EXPRESS_PORT.PtmCapabilityBlock", ptm_capability_block, 0x8e0, 0x60, true, 0xff096b5b9709ff53)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.VcCapabilitySize", vc_capability_size, 0x9d0, 0x10, true, 0xd1660e29f295718d)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.NpemCapability", npem_capability, 0x9e0, 0x10, true, 0x506aae894b5f5069)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::npem_interface_context_t), "_EXPRESS_PORT.NpemInterfaceContext", npem_interface_context, 0xa00, 0x80, true, 0xac05d83eeebafefe)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::npem_control_t), "_EXPRESS_PORT.NpemControlBlock", npem_control_block, 0xa80, 0x40, true, 0x49c52e6cae1514ed)
#define _m074 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.PtmCapabilitySaved", ptm_capability_saved, 0x3a42, 0x1, true, 0x976014bcd59619b8, 1, uint32_t)
#define _m075 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.AtsEnabled", ats_enabled, 0x0, 0x0, false, 0x52a72cd990b0d9ec, 1, uint32_t)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_acs_capability_register_t), "_EXPRESS_PORT.AcsCapabilityRegister", acs_capability_register, 0x0, 0x0, false, 0xc42c9ab4fda3b06f)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_ats_control_register_t), "_EXPRESS_PORT.AtsControl", ats_control, 0x0, 0x0, false, 0xb37f209fbb115d25)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXPRESS_PORT.AtsLock", ats_lock, 0x0, 0x0, false, 0xb459f565bd50ac50)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.RcecEpAssocCapability", rcec_ep_assoc_capability, 0x0, 0x0, false, 0xab8dcff3eb0d91b8)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_PORT.RcecEpAssocBitmap", rcec_ep_assoc_bitmap, 0x0, 0x0, false, 0x56bedebbb0d68d1c)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_sriov_control_t), "_EXPRESS_PORT.SriovControl", sriov_control, 0x0, 0x0, false, 0xc3557e23e357d790)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_PORT.PreviousSriovDecodes", previous_sriov_decodes, 0x0, 0x0, false, 0xa8471c7c404d8648)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_PORT.Usb4DvsecCapability", usb4_dvsec_capability, 0x0, 0x0, false, 0x33c9dfcdded66ba0)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_designated_vendor_specific_capability_t), "_EXPRESS_PORT.Usb4DvsecHeader", usb4_dvsec_header, 0x0, 0x0, false, 0x28d8c808210df5b6)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_port_specific_attribute_t), "_EXPRESS_PORT.Usb4DvsecPortAttribute", usb4_dvsec_port_attribute, 0x0, 0x0, false, 0x6ba31911f4a2799d)
#define _m086 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.SriovCapabilitySaved", sriov_capability_saved, 0x0, 0x0, false, 0x489447e1eafb9073, 1, uint32_t)
#define _m087 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_PORT.AtsCapabilitySaved", ats_capability_saved, 0x0, 0x0, false, 0x958ed167c99f05f4, 1, uint32_t)
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
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#endif