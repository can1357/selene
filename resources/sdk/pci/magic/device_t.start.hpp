#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.Signature", signature, 0x0, 0x20, true, 0x1a4f2e92744a4495)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::object_state_t), "_PCI_DEVICE.DeviceState", device_state, 0x20, 0x20, true, 0x8d4c6c76f05ab7c1)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::object_state_t), "_PCI_DEVICE.TentativeNextState", tentative_next_state, 0x40, 0x20, true, 0x7801327b493ff2bf)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_usage_t), "_PCI_DEVICE.DeviceUsage", device_usage, 0x60, 0x80, true, 0xc7b10b64aea3c979)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.BusNumber", bus_number, 0xe0, 0x20, true, 0xf96789ee495e9383)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::slot_number_t), "_PCI_DEVICE.Slot", slot, 0x100, 0x20, true, 0x4d215f200ea6acb9)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.VendorID", vendor_id, 0x120, 0x10, true, 0x4de1572aec6feb57)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.DeviceID", device_id, 0x130, 0x10, true, 0x369945826181363f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.RevisionID", revision_id, 0x140, 0x8, true, 0x97b2d5e9a2bc6fd1)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.BaseClass", base_class, 0x148, 0x8, true, 0xc1c407c3c3282181)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.SubClass", sub_class, 0x150, 0x8, true, 0xf29797a75eedd4b2)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.ProgIf", prog_if, 0x158, 0x8, true, 0x67af0eb11298fb7f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.SubVendorID", sub_vendor_id, 0x160, 0x10, true, 0xb6eb5bad4c3ccb31)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.SubSystemID", sub_system_id, 0x170, 0x10, true, 0x9e6813d6b1f72dbc)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.HeaderType", header_type, 0x180, 0x8, true, 0xc22c384a31dcc9fc)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.InterruptPin", interrupt_pin, 0x188, 0x8, true, 0x305cf62b6d922161)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.FirstCapability", first_capability, 0x190, 0x8, true, 0xcc19cbf70663f30d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.PowerCapability", power_capability, 0x198, 0x8, true, 0xd93b06c8be084657)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.SubIDsCapability", sub_i_ds_capability, 0x1a0, 0x8, true, 0x136a2b62cf9cc9b3)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.AgpCapability", agp_capability, 0x1a8, 0x8, true, 0x59a2c13d91d2dbc2)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.PciXCapability", pci_x_capability, 0x1b0, 0x8, true, 0xd6435705636cf0ca)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.AdvancedFeatures", advanced_features, 0x1b8, 0x8, true, 0x478e2ca4edb70cf9)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.MsiCapability", msi_capability, 0x1c0, 0x8, true, 0x3a395ea7fb3b9a1)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.MsiXCapability", msi_x_capability, 0x1c8, 0x8, true, 0x17e7310df042e6)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.FirstHtCapability", first_ht_capability, 0x1d0, 0x8, true, 0x9a4bb10997075b0e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.HtMsiMapCapability", ht_msi_map_capability, 0x1d8, 0x8, true, 0xaf69bac11e53bb02)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.ExpressCapability", express_capability, 0x1e0, 0x8, true, 0x985dff2e9f0e9870)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.PossibleDecodes", possible_decodes, 0x1f0, 0x10, true, 0xa55894a062cde9e2)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.ResourceDecodes", resource_decodes, 0x200, 0x10, true, 0xe01d743aadd29be7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.PreviousCommand", previous_command, 0x210, 0x10, true, 0x1513ccb158472c59)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PCI_DEVICE.DeviceObject", device_object, 0x400, 0x40, true, 0x81f76a0d988f7af9)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_t*), "_PCI_DEVICE.Root", root, 0x440, 0x40, true, 0x1df9815e661af359)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_DEVICE.Parent", parent, 0x480, 0x40, true, 0xad2f546e4c4f23d4)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_DEVICE.Sibling", sibling, 0x4c0, 0x40, true, 0xd5a5db3af0b38fb2)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_PCI_DEVICE.RemoveLock", remove_lock, 0x500, 0x0, true, 0x96835f7c8395c414)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_compatibility_port_t*), "_PCI_DEVICE.ExpressCompatibilityPort", express_compatibility_port, 0x600, 0x40, true, 0x7eec71c5285f466b)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_port_t*), "_PCI_DEVICE.ExpressPort", express_port, 0x640, 0x40, true, 0x20ceb7b55a952286)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hotplug_slot_t*), "_PCI_DEVICE.HotPlugSlot", hot_plug_slot, 0x680, 0x40, true, 0x8c400bdc9d014040)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.InstanceIdSerialNumber", instance_id_serial_number, 0x6c0, 0x40, true, 0xb530b11a84bce384)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::device_resources_t), "_PCI_DEVICE.Resources", resources, 0x700, 0x20, true, 0x9e9f45b8135b3653)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::device_requirements_t), "_PCI_DEVICE.Requirements", requirements, 0xf40, 0x0, true, 0x8ed1c7615827978)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_interrupt_resource_t), "_PCI_DEVICE.InterruptResource", interrupt_resource, 0x1c40, 0x40, true, 0x8351aac58be33109)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_interrupt_requirement_t), "_PCI_DEVICE.InterruptRequirement", interrupt_requirement, 0x1f80, 0x40, true, 0x5c9df074edf1b2b9)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::save_restore_data_t), "_PCI_DEVICE.SavedRegisters", saved_registers, 0x21c0, 0x50, true, 0x2e0a13c706459316)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.CapturedProcessorCount", captured_processor_count, 0x2220, 0x20, true, 0x15971244ad25bd99)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PCI_DEVICE.LogicalPowerState", logical_power_state, 0x2240, 0x20, true, 0xcfe9043f1d228b9b)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PCI_DEVICE.PreviousPowerState", previous_power_state, 0x2260, 0x20, true, 0x5ea51b7fc2703d2e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PCI_DEVICE.WakeLevel", wake_level, 0x2280, 0x20, true, 0xd465f6b388247307)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_DEVICE.PowerStateChangeDelay", power_state_change_delay, 0x22a0, 0x20, true, 0x77e24c9692de8026)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pm::support_t), "_PCI_DEVICE.PowerSupport", power_support, 0x22c0, 0x8, true, 0x4d08ebc6362edc81)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::ktimer_t, struct ex::timer_t*>), "_PCI_DEVICE.PowerTimer", power_timer, 0x2300, 0x40, true, 0x41d52a9aadecc857)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PCI_DEVICE.DIrp", d_irp, 0x2340, 0x40, true, 0x375699fdd8690e94)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PCI_DEVICE.WakeIrp", wake_irp, 0x2380, 0x40, true, 0xb039912866ffbe30)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::wake_irp_state_t), "_PCI_DEVICE.WakeIrpState", wake_irp_state, 0x23c0, 0x20, true, 0x6b1facd05a493185)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::d3cold_support_t), "_PCI_DEVICE.D3ColdSupport", d3_cold_support, 0x23e0, 0x20, true, 0xc900a87ead21c337)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_PCI_DEVICE.TransactionTimer", transaction_timer, 0x2400, 0x0, true, 0xd2245d6120f7f3ef)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_PCI_DEVICE.TransactionTimerDpc", transaction_timer_dpc, 0x2600, 0x0, true, 0x706f220b85a8805f)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE.D0DelayInMilliseconds", d0_delay_in_milliseconds, 0x2800, 0x10, true, 0x557385ede22b0eb)
#define _m058 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_DEVICE.MpsSizeOverride", mps_size_override, 0x2810, 0x3, true, 0x28eee2ae1fc96c1b, 3, uint8_t)
#define _m059 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.MpsSizeOverrideSet", mps_size_override_set, 0x2813, 0x1, true, 0x6f66cc8e5687c693, 1, uint8_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.TransactionTimeoutPasses", transaction_timeout_passes, 0x2818, 0x8, true, 0xb838ed1601394eb3)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.DstateChangeRetryCount", dstate_change_retry_count, 0x2820, 0x8, true, 0x65c2f3d3c1ad591d)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t), "_PCI_DEVICE.D3ColdFilter", d3_cold_filter, 0x2840, 0x40, true, 0xc2faffa40a0de55f)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.WakeIrpLock", wake_irp_lock, 0x2b40, 0x40, true, 0x3fb7c2027c32935f)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.D0IrpLock", d0_irp_lock, 0x2b80, 0x40, true, 0xe5cc103eb5351e0e)
#define _m065 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.ConfigureMwi", configure_mwi, 0x2bc0, 0x1, true, 0x5148a84ed42f0a7, 1, uint64_t)
#define _m066 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.BusNumbersConfigured", bus_numbers_configured, 0x2bc1, 0x1, true, 0x3414c6c84e9ea49c, 1, uint64_t)
#define _m067 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.OnDebugPath", on_debug_path, 0x2bc2, 0x1, true, 0x8b42d7bddff4ca54, 1, uint64_t)
#define _m068 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.PciOwned", pci_owned, 0x2bc3, 0x1, true, 0x70c2c58d5527893b, 1, uint64_t)
#define _m069 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.LegacyDriver", legacy_driver, 0x2bc4, 0x1, true, 0xf11488650f2ad764, 1, uint64_t)
#define _m070 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.NativeIdeSwitchAllowed", native_ide_switch_allowed, 0x2bc5, 0x1, true, 0xcca2324ce822dda8, 1, uint64_t)
#define _m071 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.IdeInNativeMode", ide_in_native_mode, 0x2bc6, 0x1, true, 0xb38f40f5e2cefd64, 1, uint64_t)
#define _m072 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.IdeInterfaceActive", ide_interface_active, 0x2bc7, 0x1, true, 0xa2af71cb60e5244d, 1, uint64_t)
#define _m073 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.Present", present, 0x2bc8, 0x1, true, 0x5cea09e4f516e05a, 1, uint64_t)
#define _m074 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.ReportedMissing", reported_missing, 0x2bc9, 0x1, true, 0x980c87e044372026, 1, uint64_t)
#define _m075 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.Connected", connected, 0x2bca, 0x1, true, 0xe1677312ddf0d178, 1, uint64_t)
#define _m076 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.PmeOwned", pme_owned, 0x2bcb, 0x1, true, 0xd061b13fe6ff3829, 1, uint64_t)
#define _m077 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.PmeEnabled", pme_enabled, 0x2bcc, 0x1, true, 0x50a4eb47d7c7cffb, 1, uint64_t)
#define _m078 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.TriggeredPme", triggered_pme, 0x2bcd, 0x1, true, 0xc06f4d758773256a, 1, uint64_t)
#define _m079 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.HyperTransport", hyper_transport, 0x2bce, 0x1, true, 0xff03c93c2540ae3c, 1, uint64_t)
#define _m080 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.MsiHtConverter", msi_ht_converter, 0x2bcf, 0x1, true, 0x5bd3fc164928ba5e, 1, uint64_t)
#define _m081 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.ExtendedConfigAvailable", extended_config_available, 0x2bd0, 0x1, true, 0xffa9bf8dc00e999, 1, uint64_t)
#define _m082 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.B2On66MHzSegmentIllegal", b2_on66m_hz_segment_illegal, 0x2bd1, 0x1, true, 0x7a850e4bb6f0ecf8, 1, uint64_t)
#define _m083 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.Device66MHzCapable", device66m_hz_capable, 0x2bd2, 0x1, true, 0x41514690b9a1679c, 1, uint64_t)
#define _m084 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.DsmToIgnoreBootConfigEvaluated", dsm_to_ignore_boot_config_evaluated, 0x2bd3, 0x1, true, 0x77a0bdd99c7417aa, 1, uint64_t)
#define _m085 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.Removed", removed, 0x2bd5, 0x1, true, 0x9326061ca78515e3, 1, uint64_t)
#define _m086 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.AriIsEnabled", ari_is_enabled, 0x2bd6, 0x1, true, 0xf263ebef0f47a324, 1, uint64_t)
#define _m087 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.MultiFunction", multi_function, 0x2bd7, 0x1, true, 0x440646bcffb5eadf, 1, uint64_t)
#define _m088 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.AlreadyBeenStarted", already_been_started, 0x2bd8, 0x1, true, 0xb252dbbf939364fb, 1, uint64_t)
#define _m089 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.WaitingForPowerUp", waiting_for_power_up, 0x2bd9, 0x1, true, 0x923fc8276dadce6a, 1, uint64_t)
#define _m090 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.OnPostPath", on_post_path, 0x2bda, 0x1, true, 0xafca2712ac9e3a21, 1, uint64_t)
#define _m091 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.SriovDeviceDidntGetVfBarSpace", sriov_device_didnt_get_vf_bar_space, 0x2bdb, 0x1, true, 0x20aeda96995760cc, 1, uint64_t)
#define _m092 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.ExtraBusPowerReferenceForWake", extra_bus_power_reference_for_wake, 0x2bdc, 0x1, true, 0x4d305261db2f3801, 1, uint64_t)
#define _m093 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.FirmwareSaysDeviceDoesD3cold", firmware_says_device_does_d3cold, 0x2bdd, 0x1, true, 0x46851e92b46fd5c4, 1, uint64_t)
#define _m094 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.TransactionTimerSetPower", transaction_timer_set_power, 0x2bde, 0x1, true, 0x70141da779939347, 1, uint64_t)
#define _m095 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.SurpriseRemoveAndReenumerateSelf", surprise_remove_and_reenumerate_self, 0x2bdf, 0x1, true, 0xcafdbac5d1bc7dea, 1, uint64_t)
#define _m096 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.BusmasterDisabledOnBoot", busmaster_disabled_on_boot, 0x2be0, 0x1, true, 0xd5ff764e571a005a, 1, uint64_t)
#define _m097 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.DsmForDelayOptimizationEvaluated", dsm_for_delay_optimization_evaluated, 0x2be1, 0x1, true, 0x5f1710f0480c053e, 1, uint64_t)
#define _m098 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.NoInitialConfig", no_initial_config, 0x2be2, 0x1, true, 0x87727e9ec4084801, 1, uint64_t)
#define _m099 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.DisableWheaDuringPLDR", disable_whea_during_pldr, 0x2be3, 0x1, true, 0xf8660d70a63c915b, 1, uint64_t)
#define _m100 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.WheaReportingDisabled", whea_reporting_disabled, 0x2be4, 0x1, true, 0x6ad7a7e7d1300667, 1, uint64_t)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.FlagsAsULONGLONG", flags_as_ulonglong, 0x2bc0, 0x40, true, 0xf5b81c7ab5b6010e)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bridge_flags_t), "_PCI_DEVICE.BridgeFlags", bridge_flags, 0x2c40, 0x20, true, 0x3e464e348ce7b34a)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.HackFlags", hack_flags, 0x2c80, 0x40, true, 0x61f767859c526a00)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::header_operations_t*), "_PCI_DEVICE.Operations", operations, 0x2cc0, 0x40, true, 0x45718a20804514cc)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciBusInterfaceCount", pci_bus_interface_count, 0x2d00, 0x20, true, 0xbb56d4176e73d34d)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.AgpTargetInterfaceRefCount", agp_target_interface_ref_count, 0x2d20, 0x20, true, 0x59767924fd7014d6)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciCardBusInterfaceCount", pci_card_bus_interface_count, 0x2d40, 0x20, true, 0x9835e71203e827ab)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciDevicePresentInterfaceCount", pci_device_present_interface_count, 0x2d60, 0x20, true, 0xcc161b96e23a24d8)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciNativeIdeInterfaceCount", pci_native_ide_interface_count, 0x2d80, 0x20, true, 0xc8cc5cb16c8eba6f)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciLocationInterfaceCount", pci_location_interface_count, 0x2da0, 0x20, true, 0x41d222f74897e986)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciD3ColdSupportInterfaceCount", pci_d3_cold_support_interface_count, 0x2dc0, 0x20, true, 0xd4ce9bd4c4d94d62)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.EnumFailureCode", enum_failure_code, 0x2e40, 0x20, true, 0x103d303de8f14015)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_DEVICE.DebugDevicePowerCallbackHandle", debug_device_power_callback_handle, 0x2e80, 0x40, true, 0xb58dc8428c58b83e)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 7>), "_PCI_DEVICE.DelayInfo", delay_info, 0x2ec0, 0x0, true, 0xfbddaca7634d957e)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.FpbCapability", fpb_capability, 0x1e8, 0x8, true, 0x5ad38d3af188ba25)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_record_t*), "_PCI_DEVICE.CfgRecord", cfg_record, 0x240, 0x40, true, 0x3ecfb117591042db)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::cfg_access_log_t*), "_PCI_DEVICE.PciCfgAccessLog", pci_cfg_access_log, 0x280, 0x40, true, 0xba0ad8e67f7a7e68)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_PCI_DEVICE.StartWorkItem", start_work_item, 0x2c0, 0x40, true, 0xfca03c1cee849352)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_start_worker_parameters_t), "_PCI_DEVICE.StartWorkerParameters", start_worker_parameters, 0x300, 0x0, true, 0x9ced72fecb37dbe4)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.LastPmcsrWriteD0Timestamp", last_pmcsr_write_d0_timestamp, 0x2a80, 0x40, true, 0x7e48cb6b0a9106fb)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.PreviousPowerStateTimestamp", previous_power_state_timestamp, 0x2ac0, 0x40, true, 0xe105cc968e576697)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.HierarchyDepth", hierarchy_depth, 0x2b00, 0x20, true, 0x8e35d625e52c921f)
#define _m125 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.SecureDevice", secure_device, 0x2be5, 0x1, true, 0x479bddbe52cd6ef9, 1, uint64_t)
#define _m126 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.DmaProtected", dma_protected, 0x2be6, 0x1, true, 0x118c3e2ae9030f65, 1, uint64_t)
#define _m127 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.IsThunderboltDevice", is_thunderbolt_device, 0x2be7, 0x1, true, 0xb92d58d68f54d51a, 1, uint64_t)
#define _m128 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.DecodeIoOnBoot", decode_io_on_boot, 0x2be8, 0x1, true, 0x8c07d1cfa71bbb52, 1, uint64_t)
#define _m129 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.FpbNeedRestore", fpb_need_restore, 0x2be9, 0x1, true, 0x6386b7530a38dc1f, 1, uint64_t)
#define _m130 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.ForceSBR", force_sbr, 0x2bea, 0x1, true, 0x70781225adc1d4c1, 1, uint64_t)
#define _m131 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.IsGuestAssigned", is_guest_assigned, 0x2beb, 0x1, true, 0x4e9c21d46284ef74, 1, uint64_t)
#define _m132 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.SurpriseRemoveAndReenumerateSelfResetDevice", surprise_remove_and_reenumerate_self_reset_device, 0x2bec, 0x1, true, 0x7c74621807069c42, 1, uint64_t)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::dma_properties_t), "_PCI_DEVICE.DmaProperties", dma_properties, 0x2c00, 0x20, true, 0x987798107a8eadcc)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.PortUid", port_uid, 0x2c20, 0x20, true, 0xf41eece1e845029)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciD3ColdAuxPowerAndTimingInterfaceCount", pci_d3_cold_aux_power_and_timing_interface_count, 0x2de0, 0x20, true, 0xfd976d804d3a8604)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciPtmControlInterfaceCount", pci_ptm_control_interface_count, 0x2e00, 0x20, true, 0xd8dadbb809e52c80)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciNpemControlInterfaceCount", pci_npem_control_interface_count, 0x2e20, 0x20, true, 0x4f009140b0233f1)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.SecureDeviceToken", secure_device_token, 0x2fc0, 0x40, true, 0x91db89fe872db811)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_aux_power_and_timing_device_info_t), "_PCI_DEVICE.D3ColdAux", d3_cold_aux, 0x3000, 0x40, true, 0xcb205c072337dac9)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_pdo_t), "_PCI_DEVICE.FpbPdoNode", fpb_pdo_node, 0x3140, 0x40, true, 0x264bf5fb39f18047)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_DEVICE.SleepstudyLock", sleepstudy_lock, 0x3880, 0x40, true, 0x422cdfad60426a74)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.BlockerActive", blocker_active, 0x38c0, 0x8, true, 0x8256b99a65045045)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::sleepstudy_blocker_t*), "_PCI_DEVICE.SleepstudyHandle", sleepstudy_handle, 0x3900, 0x40, true, 0x9e0a5b535ac747f0)
#define _m144 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.IgnoreBootConfig", ignore_boot_config, 0x2bd4, 0x1, true, 0x69541ebd64d954be, 1, uint64_t)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::d3cold_interface_request_t), "_PCI_DEVICE.D3ColdInterfaceRequest", d3_cold_interface_request, 0x0, 0x0, false, 0x3fc7c93795acc189)
#define _m146 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.Usb4PowerDependencyProcessed", usb4_power_dependency_processed, 0x0, 0x0, false, 0x4f5df4354b481d6d, 1, uint64_t)
#define _m147 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.HasBootConfig", has_boot_config, 0x0, 0x0, false, 0x98dc3b3d9c6cca2a, 1, uint64_t)
#define _m148 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.KeepDeviceStackOverReset", keep_device_stack_over_reset, 0x0, 0x0, false, 0x822d7bb844eb5610, 1, uint64_t)
#define _m149 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.OnEDpc", on_e_dpc, 0x0, 0x0, false, 0x7aefd29c70b133e9, 1, uint64_t)
#define _m150 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.ImmediateReadiness", immediate_readiness, 0x0, 0x0, false, 0x4b99e265aa4b4a3a, 1, uint64_t)
#define _m151 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.BridgeUseNativeWakeInfo", bridge_use_native_wake_info, 0x0, 0x0, false, 0x14a345f15f58a42b, 1, uint64_t)
#define _m152 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.IsRecoveryEnabled", is_recovery_enabled, 0x0, 0x0, false, 0xedc5d467308e137d, 1, uint64_t)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_early_restore_traces_t), "_PCI_DEVICE.EarlyRestoreTrace", early_restore_trace, 0x0, 0x0, false, 0x52ed34f9a2a4afae)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE.AcsNotNeeded", acs_not_needed, 0x0, 0x0, false, 0x91e9fe2d7380974d)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::acs_hierarchy_support_t), "_PCI_DEVICE.AcsHierarchySupport", acs_hierarchy_support, 0x0, 0x0, false, 0x972e664d8a9139c1)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE.AcsScenarios", acs_scenarios, 0x0, 0x0, false, 0xe6d0b9c225d27acf)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_PCI_DEVICE.D3ColdWorkItem", d3_cold_work_item, 0x0, 0x0, false, 0xf45f162b2aa5c238)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_DEVICE.PciD3ColdPropertyUpdateWorkerQueued", pci_d3_cold_property_update_worker_queued, 0x0, 0x0, false, 0x4331fefbbd56d853)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PCI_DEVICE.Usb4NhiName", usb4_nhi_name, 0x0, 0x0, false, 0x8d52c47fdc7f248b)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PCI_DEVICE.Usb4CMReferenceString", usb4cm_reference_string, 0x0, 0x0, false, 0xfd576cff95880007)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_DEVICE.TargetDeviceChangeNotificationEntry", target_device_change_notification_entry, 0x0, 0x0, false, 0xc43d48608109f3b)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_DEVICE.DriverNotificationEntry", driver_notification_entry, 0x0, 0x0, false, 0x46fd2729956a1dee)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::dsm_ignore_boot_config_state_t), "_PCI_DEVICE.DsmToIgnoreBootConfigState", dsm_to_ignore_boot_config_state, 0x0, 0x0, false, 0xfe7d1eeecb216ef9)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::device_reset_state_t), "_PCI_DEVICE.ResetState", reset_state, 0x0, 0x0, false, 0x44df7d4c23e40ca5)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::custom_settings_t), "_PCI_DEVICE.CustomSettings", custom_settings, 0x0, 0x0, false, 0xa5b0d42577f373e8)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_PCI_DEVICE.PowerTimerDpc", power_timer_dpc, 0x0, 0x0, false, 0x71f76afdb4bc8292)
#define _n02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.BridgeFlags.D3Illegal", d3_illegal, 0x0, 0x1, true, 0xefdd0ab2e74336f4, 1, uint32_t)
#define _n03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE.BridgeFlags.D3Causes66MHzB2", d3_causes66m_hz_b2, 0x1, 0x1, true, 0x8efbba8fd27e60e, 1, uint32_t)
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
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#define _m158
#define _m159
#define _m160
#define _m161
#define _m162
#define _m163
#define _m164
#define _m165
#define _m166
#define _n02
#define _n03
#endif