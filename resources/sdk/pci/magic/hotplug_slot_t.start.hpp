#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HOTPLUG_SLOT.PhysicalSlotNumber", physical_slot_number, 0x0, 0x20, true, 0xe02f7368c6d3b3d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.HotPlugSurprise", hot_plug_surprise, 0x20, 0x8, true, 0x138f85dd9a01f82c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.Removable", removable, 0x28, 0x8, true, 0x9523ae7b7794d3ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::hotplug_slot_state_t), "_PCI_HOTPLUG_SLOT.CurrentState", current_state, 0x40, 0x20, true, 0xcfd43db28eef9ac8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hotplug_controller_t*), "_PCI_HOTPLUG_SLOT.Controller", controller, 0x80, 0x40, true, 0xb18be07ac905c24)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_HOTPLUG_SLOT.Device", device, 0xc0, 0x40, true, 0x47d3b00137ba7d4e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HOTPLUG_SLOT.DeviceLock", device_lock, 0x100, 0x40, true, 0xe4b305abfbc3876f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_HOTPLUG_SLOT.EventQueue", event_queue, 0x140, 0x80, true, 0x5659b0d579eb81e5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HOTPLUG_SLOT.QueueLock", queue_lock, 0x1c0, 0x40, true, 0x44db42a69ca67044)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.EventQueueBlocked", event_queue_blocked, 0x200, 0x8, true, 0xba00dbda510229e1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_PCI_HOTPLUG_SLOT.Timer", timer, 0x240, 0x0, true, 0x79889416db6a7b17)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_PCI_HOTPLUG_SLOT.TimerDpc", timer_dpc, 0x440, 0x0, true, 0x2485b5d573dd47)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HOTPLUG_SLOT.TimerFlags", timer_flags, 0x640, 0x20, true, 0xfb6cfcd5d100a4f6)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PCI_HOTPLUG_SLOT.SlotInterrupts", slot_interrupts, 0x660, 0x20, true, 0x5cbf0dae8219f8b9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.AttentionButtonPresent", attention_button_present, 0x680, 0x8, true, 0x76ded404f132e49c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.PowerControllerPresent", power_controller_present, 0x688, 0x8, true, 0x9952eb97256c1b0c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.MRLSensorPresent", mrl_sensor_present, 0x690, 0x8, true, 0x2ef6e1e3774a837f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.AttentionIndicatorPresent", attention_indicator_present, 0x698, 0x8, true, 0x3fa08ffa0afece74)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.PowerIndicatorPresent", power_indicator_present, 0x6a0, 0x8, true, 0xc223caa72cd3b35b)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.ElectromechanicalLockPresent", electromechanical_lock_present, 0x6a8, 0x8, true, 0x17a623631b0af5bb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HOTPLUG_SLOT.AttentionIndicatorFlags", attention_indicator_flags, 0x6b0, 0x8, true, 0x6f61a48e80832862)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum pci::hotplug_event_type_t, 14>), "_PCI_HOTPLUG_SLOT.EventMap", event_map, 0x6c0, 0xc0, true, 0x32c3169d842ec0a3)
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
#endif