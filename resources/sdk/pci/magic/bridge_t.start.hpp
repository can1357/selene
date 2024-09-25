#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_BRIDGE.Bus", bus, 0x0, 0x40, true, 0x519b59368eb92737)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::slot_number_t), "_PCI_BRIDGE.Slot", slot, 0x40, 0x20, true, 0x8b1b1ade72a28dd9)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BRIDGE.HeaderType", header_type, 0x60, 0x8, true, 0x68bfd5975d5bc760)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_requirements_t), "_PCI_BRIDGE.MinimumRequirements", minimum_requirements, 0x80, 0x0, true, 0xd4064cce176798fd)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_requirements_t), "_PCI_BRIDGE.PreferredRequirements", preferred_requirements, 0x580, 0x0, true, 0x83dc9990b5be1def)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_requirements_t), "_PCI_BRIDGE.FallbackRequirements", fallback_requirements, 0xa80, 0x0, true, 0x3ab55e96398b030)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_requirements_t), "_PCI_BRIDGE.SubtractiveRequirements", subtractive_requirements, 0xf80, 0x0, true, 0x9cb1b29723db8a1f)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::bridge_resources_t), "_PCI_BRIDGE.BiosConfiguration", bios_configuration, 0x1480, 0xc0, true, 0x26eba55480221069)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::bridge_resources_t), "_PCI_BRIDGE.Resources", resources, 0x1840, 0xc0, true, 0xea4a09ca4121876d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_BRIDGE.InterruptResource", interrupt_resource, 0x1c00, 0xa0, true, 0x3b84d261261d4e88)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_attributes_t), "_PCI_BRIDGE.Attributes", attributes, 0x1ca0, 0x20, true, 0x964050ed0a3d46b1)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BRIDGE.AttributesAsULONG", attributes_as_ulong, 0x1ca0, 0x20, true, 0x7a5ff64c776634f9)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.GotRequirements", got_requirements, 0x1cc1, 0x1, true, 0x8d5b4f65c1774cbe, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.IoWindowOnBootConfig", io_window_on_boot_config, 0x1cc2, 0x1, true, 0x3f6c38e43c713fd, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.InterruptConnected", interrupt_connected, 0x1cc3, 0x1, true, 0xd1b1087a4cfe8da, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.HyperTransportPath", hyper_transport_path, 0x1cc4, 0x1, true, 0x6b48f12625a92a78, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.MsiHtConversionPath", msi_ht_conversion_path, 0x1cc5, 0x1, true, 0x8eb35d6408344f37, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.D3Causes66MHzB2", d3_causes66m_hz_b2, 0x1cc6, 0x1, true, 0xb998d905b59a7158, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.AvoidChildD1D2ForSld", avoid_child_d1d2_for_sld, 0x1cc7, 0x1, true, 0xd4a3d74860236e69, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.DisableLinkPowerManagement", disable_link_power_management, 0x1cc8, 0x1, true, 0x299f14a0d22328a3, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.ExpressBaseVersion11OrGreater", express_base_version11_or_greater, 0x1cc9, 0x1, true, 0xdb3bc08aa432e5e5, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.SecondaryBusResetOnLinkStateChange", secondary_bus_reset_on_link_state_change, 0x1cca, 0x1, true, 0x6349d5085686b653, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.LinkDisableOnSlotPowerDown", link_disable_on_slot_power_down, 0x1ccb, 0x1, true, 0x3534d4047dca1418, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.DisableChildPowerManagement", disable_child_power_management, 0x1ccc, 0x1, true, 0x79789f7d265f9c68, 1, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.DownstreamDeviceNotRemovable", downstream_device_not_removable, 0x1ccd, 0x1, true, 0x27adae09c9c3b843, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.EnableAllBridgeInterrupts", enable_all_bridge_interrupts, 0x1cce, 0x1, true, 0x49ec934c6ba74838, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.PathIsExpress", path_is_express, 0x1ccf, 0x1, true, 0xd671508bc05b3b8, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.E2ETLPPrefixSupported", e2etlp_prefix_supported, 0x1cd1, 0x1, true, 0x75ac9bd3053a6044, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.AtomicsRoutingSupported", atomics_routing_supported, 0x1cd2, 0x1, true, 0x93e67db514d3d35, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Atomics32BitCompleterSupported", atomics32_bit_completer_supported, 0x1cd3, 0x1, true, 0xc65e2822ceceabfc, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Atomics64BitCompleterSupported", atomics64_bit_completer_supported, 0x1cd4, 0x1, true, 0xc9ccc79431c3dabf, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Atomics128BitCompleterSupported", atomics128_bit_completer_supported, 0x1cd5, 0x1, true, 0x2ff039e965fee951, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.AcsCapIncorrectFormat", acs_cap_incorrect_format, 0x1cd6, 0x1, true, 0xececce84e0cc5a4a, 1, uint32_t)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BRIDGE.PciXCapability", pci_x_capability, 0x1ce0, 0x8, true, 0xfd9bffa2ed96713b)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BRIDGE.ExpressCapability", express_capability, 0x1ce8, 0x8, true, 0x67004c2dd31a7fa2)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_PCI_BRIDGE.ExpressBridge", express_bridge, 0x1d00, 0x40, true, 0xd6f78c99f0fa450a)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, enum pci::delay_type_t)>*, sdk::function<void(void*, int64_t*)>*>), "_PCI_BRIDGE.DelayPassive", delay_passive, 0x1d40, 0x40, true, 0x7c99ef20d30664af)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PCI_BRIDGE.StallDispatch", stall_dispatch, 0x1d80, 0x40, true, 0x774d221a1b17d6f5)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_BRIDGE.InterfaceContext", interface_context, 0x1dc0, 0x40, true, 0xa7ff103c3e8b2360)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.UnderThunderboltHierarchy", under_thunderbolt_hierarchy, 0x1cd7, 0x1, true, 0x8c78806308b58f3f, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.ThunderboltBridgeNoD3", thunderbolt_bridge_no_d3, 0x1cd8, 0x1, true, 0x9e13d3f39f334bc7, 1, uint32_t)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_BRIDGE.SetExternalFacingPort", set_external_facing_port, 0x1e00, 0x40, true, 0xc2e40a8a10f58079)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, struct nt::interface_t*)>*), "_PCI_BRIDGE.QueryFpgaControlInterface", query_fpga_control_interface, 0x1e40, 0x40, true, 0xfd59c109a4b216cf)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, union pci::express_device_control_register_t*, uint8_t)>*), "_PCI_BRIDGE.ControlErrorReporting", control_error_reporting, 0x1e80, 0x40, true, 0xd0af7197e857c993)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*, uint16_t, struct pci::npem_control_interface_t*, struct pci::npem_control_t**)>*, sdk::function<int32_t(void*, uint16_t, uint16_t, struct pci::npem_control_interface_t*, struct pci::npem_control_t**)>*>), "_PCI_BRIDGE.QueryNpemControlInterface", query_npem_control_interface, 0x1ec0, 0x40, true, 0x77ac08fb9d091f93)
#define _m049 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.RootPortDomain", root_port_domain, 0x1cd0, 0x1, true, 0x17350ff73a0ccab1, 1, uint32_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_device_type_t), "_PCI_BRIDGE.BridgeType", bridge_type, 0x0, 0x0, false, 0xd5bfa4e616a9f780)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, enum pci::delay_type_t, int64_t*)>*), "_PCI_BRIDGE.GetDelayTime", get_delay_time, 0x0, 0x0, false, 0x7ef93f995b6ba17a)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct pci::custom_settings_t**)>*), "_PCI_BRIDGE.QueryDeviceCustomSettings", query_device_custom_settings, 0x0, 0x0, false, 0xac2eb86f04444bc0)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t, enum nt::device_power_state_t)>*), "_PCI_BRIDGE.LogBridgeDStateTransition", log_bridge_d_state_transition, 0x0, 0x0, false, 0xc7952cd107582e9b)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Attributes.LegacyVgaBitSet", legacy_vga_bit_set, 0x0, 0x1, true, 0x959671589ded626, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Attributes.IsaBitSet", isa_bit_set, 0x1, 0x1, true, 0x5fd859d1cdef0f6e, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Attributes.Subtractive", subtractive, 0x2, 0x1, true, 0xb255349c68f33fd4, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BRIDGE.Attributes.ChildOfVgaEnabledBridge", child_of_vga_enabled_bridge, 0x3, 0x1, true, 0x5b91f078e7b2aa3b, 1, uint32_t)
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
#define _m10
#define _m11
#define _m12
#define _m13
#endif