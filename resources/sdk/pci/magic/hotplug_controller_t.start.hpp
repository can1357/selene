#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_t*), "_PCI_HOTPLUG_CONTROLLER.PciBridge", pci_bridge, 0x0, 0x40, true, 0x41a3c61ac5b455ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_HOTPLUG_CONTROLLER.ActionQueue", action_queue, 0x40, 0x80, true, 0xe75616ee8cc19e28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HOTPLUG_CONTROLLER.QueueLock", queue_lock, 0xc0, 0x40, true, 0xd60631469bbfdf54)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_CONTROLLER.ActionQueueBlocked", action_queue_blocked, 0x100, 0x8, true, 0xca8cb68630531d4e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_PCI_HOTPLUG_CONTROLLER.CommandTimer", command_timer, 0x140, 0x0, true, 0xde6ced3b0f756ae5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_PCI_HOTPLUG_CONTROLLER.CommandTimerDpc", command_timer_dpc, 0x340, 0x0, true, 0x601ef59f4fe5decd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HOTPLUG_CONTROLLER.TimerLock", timer_lock, 0x540, 0x40, true, 0xf0e9789cd2b8a6bd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_CONTROLLER.TimersDisabled", timers_disabled, 0x580, 0x8, true, 0x7d284f51877f3747)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_CONTROLLER.LinkActiveReportingCapable", link_active_reporting_capable, 0x588, 0x8, true, 0x4a27e91e948c8548)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_CONTROLLER.InstantaneousCommandCompleteSupport", instantaneous_command_complete_support, 0x590, 0x8, true, 0xf95fea048b4dd9f8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_CONTROLLER.CommandCompleteInterruptPending", command_complete_interrupt_pending, 0x598, 0x8, true, 0xc1a00bebc3b5f594)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HOTPLUG_CONTROLLER.UnprocessedCommandCompleteInterrupts", unprocessed_command_complete_interrupts, 0x5a0, 0x20, true, 0x5ae5c30031169fc3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct pci::hotplug_slot_t*)>*), "_PCI_HOTPLUG_CONTROLLER.GetDevicePresenceState", get_device_presence_state, 0x5c0, 0x40, true, 0xb32931f694f54d1f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct pci::hotplug_slot_t*)>*), "_PCI_HOTPLUG_CONTROLLER.GetLatchState", get_latch_state, 0x600, 0x40, true, 0xa92480196aa1cbb9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct pci::hotplug_slot_t*)>*), "_PCI_HOTPLUG_CONTROLLER.GetLinkState", get_link_state, 0x640, 0x40, true, 0x56ae30689c20e80d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct pci::hotplug_slot_t*, enum pci::hotplug_commandtype_t, uint64_t)>*), "_PCI_HOTPLUG_CONTROLLER.ExecuteHotPlugCommands", execute_hot_plug_commands, 0x680, 0x40, true, 0x72f24eaaaae2b5aa)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct pci::hotplug_controller_t*, uint8_t)>*), "_PCI_HOTPLUG_CONTROLLER.EnableDisableControllerInterrupts", enable_disable_controller_interrupts, 0x6c0, 0x40, true, 0x5d60582300715b1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HOTPLUG_CONTROLLER.SlotCount", slot_count, 0x700, 0x20, true, 0x6b5877d36d44619f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct pci::hotplug_slot_t, 1>), "_PCI_HOTPLUG_CONTROLLER.Slots", slots, 0x740, 0x80, true, 0xe9df0c62e29b2bcc)
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
#endif