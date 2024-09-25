#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::hotplug_slot_t*), "_HOTPLUG_WORKER_PARAMETERS.Slot", slot, 0x0, 0x40, true, 0x8982615334041e83)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::hotplug_commandtype_t), "_HOTPLUG_WORKER_PARAMETERS.Type", type, 0x40, 0x8, true, 0xfc7b2d8334a53839)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HOTPLUG_WORKER_PARAMETERS.CommandContext", command_context, 0x80, 0x40, true, 0x811b5479e0b7eb01)
#else
#define _m00
#define _m01
#define _m02
#endif