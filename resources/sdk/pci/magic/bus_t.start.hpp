#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.Signature", signature, 0x0, 0x20, true, 0xd0e9608041d0f732)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::object_state_t), "_PCI_BUS.DeviceState", device_state, 0x20, 0x20, true, 0x433998f5da7beebd)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::object_state_t), "_PCI_BUS.TentativeNextState", tentative_next_state, 0x40, 0x20, true, 0x76a49004d0c68794)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_usage_t), "_PCI_BUS.DeviceUsage", device_usage, 0x60, 0x80, true, 0xe86b182744a2e3d2)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_PCI_BUS.RemoveLock", remove_lock, 0x100, 0x0, true, 0x582f64f7c7c9c4ea)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_BUS.ParentBus", parent_bus, 0x340, 0x40, true, 0xd59ada178f202e8d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_BUS.SiblingBus", sibling_bus, 0x380, 0x40, true, 0xfd7c2312b3ccf5ce)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_BUS.ChildBuses", child_buses, 0x3c0, 0x40, true, 0x56bc2476df6297f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_BUS.ChildBusTail", child_bus_tail, 0x400, 0x40, true, 0x21522474cd60e7e5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_t*), "_PCI_BUS.Root", root, 0x440, 0x40, true, 0xce21389efc4a3563)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_t*), "_PCI_BUS.PciBridge", pci_bridge, 0x480, 0x40, true, 0xdcc3a38f9b88f975)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_BUS.ChildDevices", child_devices, 0x4c0, 0x40, true, 0x618b4c68929931aa)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_BUS.ChildDeviceTail", child_device_tail, 0x500, 0x40, true, 0xa3856abd86d57566)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_BUS.ChildDeviceLock", child_device_lock, 0x540, 0xc0, true, 0x12389f28c964e916)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_BUS.ExpressLinkQuiescentEvent", express_link_quiescent_event, 0x600, 0xc0, true, 0x13b5b493d1603519)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_PCI_BUS.EvaluatedRidMap", evaluated_rid_map, 0x6c0, 0x80, true, 0x6dc89cd6152077e3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_PCI_BUS.EvaluatedRidMapBuffer", evaluated_rid_map_buffer, 0x740, 0x0, true, 0x7ad5e522418cdcb5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PCI_BUS.DeviceObject", device_object, 0x840, 0x40, true, 0xee629bc3e656e528)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PCI_BUS.AttachedDeviceObject", attached_device_object, 0x880, 0x40, true, 0x41036d34997292e1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PCI_BUS.PhysicalDeviceObject", physical_device_object, 0x8c0, 0x40, true, 0xb3499fc3af27ab87)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::hardware_interface_t), "_PCI_BUS.SecondaryInterface", secondary_interface, 0x900, 0x20, true, 0xf4cdbac7fd033c10)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.SecondaryBusNumber", secondary_bus_number, 0x920, 0x20, true, 0xbfc16204697b055b)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.SubordinateBusNumber", subordinate_bus_number, 0x940, 0x20, true, 0xd5ea1ce79cfb012f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_PCI_BUS.BusNumberMap", bus_number_map, 0x980, 0x80, true, 0x8b8aacc80b9561c8)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_PCI_BUS.BusNumberMapBuffer", bus_number_map_buffer, 0xa00, 0x0, true, 0x364718e5d698d8ba)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS.CapturedBusNumberCount", captured_bus_number_count, 0xb00, 0x8, true, 0x2a306e586e14b266)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PCI_BUS.PowerState", power_state, 0xb20, 0x20, true, 0x4bd46c4add2d0b68)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_PCI_BUS.SystemStateMapping", system_state_mapping, 0xb40, 0xe0, true, 0x24905a95f04c6b8d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_PCI_BUS.SystemWake", system_wake, 0xc20, 0x20, true, 0x1f9065f8d886588b)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PCI_BUS.DeviceWake", device_wake, 0xc40, 0x20, true, 0x4f9361335bab5d0b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_wake_depth_t), "_PCI_BUS.IdleDState", idle_d_state, 0xc60, 0x20, true, 0xfe43b310582ddf9b)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_BUS.DevicesPoweredDown", devices_powered_down, 0xc80, 0x20, true, 0xf4fe9333a2df4c84)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PCI_BUS.SIrp", s_irp, 0xcc0, 0x40, true, 0xaad62c67461b122e)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PCI_BUS.WakeIrp", wake_irp, 0xd00, 0x40, true, 0x5a41547b893f67d3)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS.WokeSystem", woke_system, 0xd40, 0x8, true, 0x1366236bda5a14f0)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForWaitStateMachine", waiting_for_wait_state_machine, 0xd80, 0x80, true, 0x1996909a4c66f36)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForD0Send", waiting_for_d0_send, 0xe00, 0x80, true, 0x46b208b58039ef25)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForWaitWakeSend", waiting_for_wait_wake_send, 0xe80, 0x80, true, 0x9ced5f0d2be39e78)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForWaitWakeComplete", waiting_for_wait_wake_complete, 0xf00, 0x80, true, 0x30f1f9c9e908b23a)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForWaitWakeCancel", waiting_for_wait_wake_cancel, 0xf80, 0x80, true, 0x3be4871111032fa4)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForChildD0Retirement", waiting_for_child_d0_retirement, 0x1000, 0x80, true, 0xfe8652d483cb8ddf)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.BusPowerLock", bus_power_lock, 0x1180, 0x40, true, 0xde9870ad9fea86d5)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.BusWakeLock", bus_wake_lock, 0x11c0, 0x40, true, 0xc3b11f7ccd9e9e9b)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PCI_BUS.TimeOfPowerUp", time_of_power_up, 0x1280, 0x40, true, 0x7b20f28a3ee15b0f)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_BUS.BusPowerEvent", bus_power_event, 0x12c0, 0xc0, true, 0x6ce989320d8d7d65)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::bus_power_states_t), "_PCI_BUS.BusPowerState", bus_power_state, 0x1380, 0x20, true, 0xbe7c3f36f6931f06)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_BUS.ChildWakeCount", child_wake_count, 0x13a0, 0x10, true, 0xcaef364b89590246)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.BusWakeState", bus_wake_state, 0x13c0, 0x20, true, 0xeafe348934e6f4be)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::conventional_wake_states_t), "_PCI_BUS.BusWakeAsConventional", bus_wake_as_conventional, 0x13c0, 0x20, true, 0xfa43e18449ced91e)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_wake_states_t), "_PCI_BUS.BusWakeAsExpress", bus_wake_as_express, 0x13c0, 0x20, true, 0xcd8f208fbc7a306d)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_BUS.WakeIrpStatus", wake_irp_status, 0x13e0, 0x20, true, 0xc3e3c94bd5d59358)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 10>), "_PCI_BUS.BusPowerReferenceReason", bus_power_reference_reason, 0x1400, 0x40, true, 0xed0fc05ea3b95d1e)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::instance_t*), "_PCI_BUS.MemoryArbiter", memory_arbiter, 0x1540, 0x40, true, 0x644afe8a4d09581d)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::instance_t*), "_PCI_BUS.IoArbiter", io_arbiter, 0x1580, 0x40, true, 0xc20b5e1cb1c8c55a)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::instance_t*), "_PCI_BUS.BusNumberArbiter", bus_number_arbiter, 0x15c0, 0x40, true, 0x8a954b9b7f2b0f6e)
#define _m055 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.AcquiredHPP", acquired_hpp, 0x16c0, 0x1, true, 0xcd15f5604c82572c, 1, uint32_t)
#define _m056 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.AcquiredHPX", acquired_hpx, 0x16c1, 0x1, true, 0xf251f674287d5f1b, 1, uint32_t)
#define _m057 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ArbitersInitialized", arbiters_initialized, 0x16c2, 0x1, true, 0x461db100cc6a0ec6, 1, uint32_t)
#define _m058 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.IoArbiterVideoHackApplied", io_arbiter_video_hack_applied, 0x16c3, 0x1, true, 0xfcf13859ea74d26d, 1, uint32_t)
#define _m059 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ExtendedConfigAvailable", extended_config_available, 0x16c4, 0x1, true, 0x512a5b83c38146d4, 1, uint32_t)
#define _m060 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.StartedAlready", started_already, 0x16c6, 0x1, true, 0x9e9086c21b1030e2, 1, uint32_t)
#define _m061 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.NeedToScanAfterHibernate", need_to_scan_after_hibernate, 0x16c7, 0x1, true, 0x764897b4f55079f4, 1, uint32_t)
#define _m062 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.BusPowerAvailable", bus_power_available, 0x16c8, 0x1, true, 0xaf85966089e934a3, 1, uint32_t)
#define _m063 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.FirstBusScanDone", first_bus_scan_done, 0x16c9, 0x1, true, 0xfd6ce36f90fb45b, 1, uint32_t)
#define _m064 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.RetiringChildD0Irps", retiring_child_d0_irps, 0x16ca, 0x1, true, 0xa71e39ba77a9eeac, 1, uint32_t)
#define _m065 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ExpectingS0Irp", expecting_s0_irp, 0x16cb, 0x1, true, 0x8b64780b242e55c0, 1, uint32_t)
#define _m066 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.PepPoweredOff", pep_powered_off, 0x16cc, 0x1, true, 0x4e09a0dd1fffb2b2, 1, uint32_t)
#define _m067 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.WakeStatePowerOn", wake_state_power_on, 0x16cd, 0x1, true, 0xbed91d49f3a5e18b, 1, uint32_t)
#define _m068 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ArmedForWake", armed_for_wake, 0x16ce, 0x1, true, 0xe7869b1a7867f57a, 1, uint32_t)
#define _m069 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.Removing", removing, 0x16cf, 0x1, true, 0xa6f5a83b0f897516, 1, uint32_t)
#define _m070 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.PmeEventDeferred", pme_event_deferred, 0x16d0, 0x1, true, 0x85d79f01d1b6f540, 1, uint32_t)
#define _m071 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.WakePowerReferenced", wake_power_referenced, 0x16d1, 0x1, true, 0xc65cf3ae05b8f147, 1, uint32_t)
#define _m072 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.PmePowerReferenced", pme_power_referenced, 0x16d2, 0x1, true, 0x925a3fd81132a4f0, 1, uint32_t)
#define _m073 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.OnceContainedNoDevices", once_contained_no_devices, 0x16d3, 0x1, true, 0xaba5e7c137c580e8, 1, uint32_t)
#define _m074 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.RequirementsChanged", requirements_changed, 0x16d4, 0x1, true, 0x3b69cf52f2d82acd, 1, uint32_t)
#define _m075 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.StartedWithoutInf", started_without_inf, 0x16d5, 0x1, true, 0xb35de9013ef68720, 1, uint32_t)
#define _m076 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.BusmasterDisabledOnBoot", busmaster_disabled_on_boot, 0x16d6, 0x1, true, 0x77104e506ebb0ff8, 1, uint32_t)
#define _m077 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.SettleTimeRequired", settle_time_required, 0x16d7, 0x1, true, 0xe34106cb76d20e71, 1, uint32_t)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.HackFlags", hack_flags, 0x1700, 0x20, true, 0x157703f57a61e6ec)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_hpp_t), "_PCI_BUS._HPP", hpp, 0x1760, 0x20, true, 0xf62d4fb99073aee)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hpx_info_t), "_PCI_BUS._HPX", hpx, 0x1780, 0x40, true, 0xe7087673ae063fbc)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_BUS.PciRoutingInterfaceCount", pci_routing_interface_count, 0x19c0, 0x20, true, 0x68a383f0b261d878)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_BUS.PciLegacyDeviceInterfaceCount", pci_legacy_device_interface_count, 0x19e0, 0x20, true, 0x437e514164a3b95d)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_BUS.PciPmeInterfaceCount", pci_pme_interface_count, 0x1a00, 0x20, true, 0x351c8ef2daeac632)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_BUS.PciLocationInterfaceCount", pci_location_interface_count, 0x1a20, 0x20, true, 0x3b11773e5d0110b3)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PCI_BUS.PepHandle", pep_handle, 0x1a80, 0x40, true, 0x9ceeedfcafc93c36)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::recorder_log_t*), "_PCI_BUS.BlackBoxHandle", black_box_handle, 0x1b00, 0x40, true, 0x2a0af5a5dd621445)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t), "_PCI_BUS.D3coldIntrf", d3cold_intrf, 0x1b80, 0x40, true, 0xc2ff5ffa97761fc8)
#define _m092 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.IgnoreBootConfig", ignore_boot_config, 0x16c5, 0x1, true, 0x3d724726e03eab7e, 1, uint32_t)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_PCI_BUS.AsyncWorkItem", async_work_item, 0x200, 0x40, true, 0x752d6dccba18d65b)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_async_dispatcher_context_t), "_PCI_BUS.AsyncContext", async_context, 0x240, 0x0, true, 0x3c6271947a5931e5)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForWWSendCancelBusPowerAvailable", waiting_for_ww_send_cancel_bus_power_available, 0x1080, 0x80, true, 0x75f497be6d8b41fb)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.WaitingForDripsWatchdogCallback", waiting_for_drips_watchdog_callback, 0x1100, 0x80, true, 0xff0bfdd5d40c4734)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.BusD0RetireLock", bus_d0_retire_lock, 0x1200, 0x40, true, 0xfe7e4b05bad4ec4c)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.BusDripsWatchdogCallbackLock", bus_drips_watchdog_callback_lock, 0x1240, 0x40, true, 0x71edf3a65b358ae2)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.MemoryBelow4GBStart", memory_below4gb_start, 0x1600, 0x20, true, 0x4a41da76191e7c2f)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.MemoryBelow4GBLength", memory_below4gb_length, 0x1620, 0x20, true, 0xd349dbf5ec2e037f)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.MemoryAbove4GBStart", memory_above4gb_start, 0x1640, 0x40, true, 0x8df64fac7c05e2a5)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.MemoryAbove4GBLength", memory_above4gb_length, 0x1680, 0x40, true, 0xa8e2ae107bc3860b)
#define _m103 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.PreScanned", pre_scanned, 0x16d8, 0x1, true, 0x2fea2dea8c2dc42e, 1, uint64_t)
#define _m104 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.RootPortSupportHotplugInD3", root_port_support_hotplug_in_d3, 0x16d9, 0x1, true, 0x8a8775784a4f0904, 1, uint64_t)
#define _m105 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.CancelWWWaitForParentPowerOn", cancel_ww_wait_for_parent_power_on, 0x16da, 0x1, true, 0x6ab12618727f9de0, 1, uint64_t)
#define _m106 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.SendWWWaitForParentPowerOn", send_ww_wait_for_parent_power_on, 0x16db, 0x1, true, 0x39680db55b6c8a83, 1, uint64_t)
#define _m107 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.SendCancelWWQueued", send_cancel_ww_queued, 0x16dc, 0x1, true, 0x4085b7f59dab3567, 1, uint64_t)
#define _m108 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.HasThunderboltCapability", has_thunderbolt_capability, 0x16dd, 0x1, true, 0x1b1a55634639088a, 1, uint64_t)
#define _m109 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ConfigSpaceLockedDown", config_space_locked_down, 0x16de, 0x1, true, 0xc116ff9b9d79fb5b, 1, uint64_t)
#define _m110 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.FundamentalDeviceResetTriggeredOnD3ToD0", fundamental_device_reset_triggered_on_d3_to_d0, 0x16df, 0x1, true, 0x4da49d29d3c72a42, 1, uint64_t)
#define _m111 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.DripsWatchdogWorkItemQueued", drips_watchdog_work_item_queued, 0x16e0, 0x1, true, 0xb211ae8fdd8843aa, 1, uint64_t)
#define _m112 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.FirmwareReportedBusD3ColdCapable", firmware_reported_bus_d3_cold_capable, 0x16e1, 0x1, true, 0x4c0d9ef3b9108b90, 1, uint64_t)
#define _m113 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ForceEnabledD3ColdOnSx", force_enabled_d3_cold_on_sx, 0x16e2, 0x1, true, 0x1350fe972ca3c58, 1, uint64_t)
#define _m114 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.UnderFpbHierarchy", under_fpb_hierarchy, 0x16e3, 0x1, true, 0x9914a4bc1a661007, 1, uint64_t)
#define _m115 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.PoFxCrashdumpDeviceRegistered", po_fx_crashdump_device_registered, 0x16e4, 0x1, true, 0x70fd237eb5e5bbdf, 1, uint64_t)
#define _m116 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.FpbRequirementsNotMet", fpb_requirements_not_met, 0x16e5, 0x1, true, 0x595e57847ae97f55, 1, uint64_t)
#define _m117 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.ExpressPcEventTriggered", express_pc_event_triggered, 0x16e6, 0x1, true, 0xfd15af8ccc6a78c6, 1, uint64_t)
#define _m118 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_BUS.DpcBusTeardownComplete", dpc_bus_teardown_complete, 0x16e7, 0x1, true, 0xdc96cb22cc1935cc, 1, uint64_t)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BUS.FlagsAsULONGLONG", flags_as_ulonglong, 0x16c0, 0x40, true, 0xc715a9faaf003460)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.HierarchyDepth", hierarchy_depth, 0x1720, 0x20, true, 0xd39db5ee66cb3000)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::dma_properties_t), "_PCI_BUS.DmaProperties", dma_properties, 0x1740, 0x20, true, 0x1c77b505047db1a1)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_BUS.PciD3FpgaControlInterfaceCount", pci_d3_fpga_control_interface_count, 0x1a40, 0x20, true, 0xe9cba3e28e544423)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PCI_BUS.PciFpbResourceUpdateInterfaceCount", pci_fpb_resource_update_interface_count, 0x1a60, 0x20, true, 0xb6cae9bfb868b8eb)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.DpcContainmentRefCount", dpc_containment_ref_count, 0x1ac0, 0x20, true, 0x7eff89692cad49a7)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::recorder_log_t*), "_PCI_BUS.PowerAndWakeHandle", power_and_wake_handle, 0x1b40, 0x40, true, 0xf14be860e41237af)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_requirement_hint_t*), "_PCI_BUS.BridgeResourceHints", bridge_resource_hints, 0x1dc0, 0x40, true, 0x8ab5b7647596b705)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_aux_power_and_timing_aggregation_info_t*), "_PCI_BUS.D3ColdAuxPowerAndTimingInfo", d3_cold_aux_power_and_timing_info, 0x1e00, 0x40, true, 0x50986fcc55dbfbbf)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_fpga_control_t), "_PCI_BUS.FpgaControl", fpga_control, 0x1e40, 0x40, true, 0xeae62a4b43c58ec7)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t), "_PCI_BUS.FpbFdoNode", fpb_fdo_node, 0x1f80, 0x0, true, 0x1e689901a2398d8a)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS.FlagsAsULONG", flags_as_ulong, 0x0, 0x0, false, 0x4fa36bfa14fb5caf)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BUS.ChildrenBusNumHints", children_bus_num_hints, 0x0, 0x0, false, 0xc6123bf1ab0c2ee9)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PCI_BUS.Usb4NhiName", usb4_nhi_name, 0x0, 0x0, false, 0x44d2d43c99ccccfd)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PCI_BUS.Usb4CMReferenceString", usb4cm_reference_string, 0x0, 0x0, false, 0xf494f7d4df798b0a)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_PCI_BUS.VirtualPowerPdoHandle", virtual_power_pdo_handle, 0x0, 0x0, false, 0x9061ef596d4ccbc1)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PCI_BUS.VirtualPowerPdo", virtual_power_pdo, 0x0, 0x0, false, 0xa5a1558ecf7e1f9b)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_BUS.TargetDeviceChangeNotificationEntry", target_device_change_notification_entry, 0x0, 0x0, false, 0x7eb9197714c9af49)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_BUS.DriverNotificationEntry", driver_notification_entry, 0x0, 0x0, false, 0xdf4dd56999cc39fd)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::dsm_ignore_boot_config_state_t), "_PCI_BUS.DsmToIgnoreBootConfigState", dsm_to_ignore_boot_config_state, 0x0, 0x0, false, 0x9442e9eba88a69c3)
#define _m79 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS._HPP.CacheLineSize", cache_line_size, 0x0, 0x8, true, 0xed452fc526fea09b)
#define _m80 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS._HPP.LatencyTimer", latency_timer, 0x8, 0x8, true, 0x66afa6982e2e3f65)
#define _m81 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS._HPP.EnableSERR", enable_serr, 0x10, 0x8, true, 0xa3438811eea37f7a)
#define _m82 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS._HPP.EnablePERR", enable_perr, 0x18, 0x8, true, 0x6198caece893013e)
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
#define _m102
#define _m103
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
#define _m79
#define _m80
#define _m81
#define _m82
#endif