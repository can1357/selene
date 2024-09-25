#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_t*), "_PCI_ROOT.Next", next, 0x0, 0x40, true, 0xfd082264f06b271b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::segment_t*), "_PCI_ROOT.Segment", segment, 0x40, 0x40, true, 0xd379e23ff96d3351)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_ROOT.Bus", bus, 0x80, 0x40, true, 0xbbc94aeddd1e085e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_complex_t*), "_PCI_ROOT.RootComplex", root_complex, 0xc0, 0x40, true, 0xa1e961ea830fc46d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_interface_standard_t*), "_PCI_ROOT.PciBusInterface", pci_bus_interface, 0x100, 0x40, true, 0x12064ee6927f1d07)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::root_bus_hardware_capability_t), "_PCI_ROOT.HardwareCapability", hardware_capability, 0x140, 0x20, true, 0xce6bf4c38c893908)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_PCI_ROOT.BridgeMap", bridge_map, 0x280, 0x80, true, 0xa814bd9c599d2e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 9>), "_PCI_ROOT.BridgeMapBuffer", bridge_map_buffer, 0x300, 0x20, true, 0xce65dc254e750cec)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t), "_PCI_ROOT.ErrorSourceDescriptor", error_source_descriptor, 0x420, 0x60, true, 0x31d6cddddf96e3dc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeRootPortList", pme_root_port_list, 0x2280, 0x80, true, 0x937841b1c87e4430)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeWaitWakeSendList", pme_wait_wake_send_list, 0x2300, 0x80, true, 0xf5e19ad5e44ad2f7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeWaitWakeCompleteList", pme_wait_wake_complete_list, 0x2380, 0x80, true, 0x4498dd2963ee5cd6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeWaitWakeCancelList", pme_wait_wake_cancel_list, 0x2400, 0x80, true, 0xbf5ee8025df0aa92)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeD0SendList", pme_d0_send_list, 0x2480, 0x80, true, 0x36edd4c655625e63)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeD0RetireList", pme_d0_retire_list, 0x2500, 0x80, true, 0xc895a02857ef7892)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeQueueWakeEventList", pme_queue_wake_event_list, 0x2580, 0x80, true, 0xb7085f7d0ad704b1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_PCI_ROOT.PmeDispatcherThread", pme_dispatcher_thread, 0x2700, 0x40, true, 0xeeb41914097ece77)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_ROOT.PmeListLock", pme_list_lock, 0x2740, 0x40, true, 0xd7a227f3cdc0a884)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kevent_t, 8>), "_PCI_ROOT.PmeEvent", pme_event, 0x2780, 0x80, true, 0x827232f06e1fb81b)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT.DsmForDelayOnSxResumeEvaluated", dsm_for_delay_on_sx_resume_evaluated, 0x3180, 0x1, true, 0x9c624e7cce31a6ff, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT.DelayOnSxResume", delay_on_sx_resume, 0x3181, 0x1, true, 0xc870251d51a58e1a, 1, uint32_t)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_ROOT.FlagsAsULONG", flags_as_ulong, 0x3180, 0x20, true, 0xf21f77fefcbe3560)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeWWSendCancelBusPowerAvailableList", pme_ww_send_cancel_bus_power_available_list, 0x2600, 0x80, true, 0x8e412ba2d342af4c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_ROOT.PmeDripsWatchdogCallbackList", pme_drips_watchdog_callback_list, 0x2680, 0x80, true, 0x9f228ad1c7772b64)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hibernate_info_t), "_PCI_ROOT.HibernateInfo", hibernate_info, 0x2f00, 0x80, true, 0x950b96d106f13e73)
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
#define _m23
#define _m24
#endif