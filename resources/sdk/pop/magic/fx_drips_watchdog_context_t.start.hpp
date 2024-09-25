#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_DRIPS_WATCHDOG_CONTEXT.Link", link, 0x0, 0x80, true, 0x150905e61fecb3cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DRIPS_WATCHDOG_CONTEXT.ComponentIndex", component_index, 0x80, 0x20, true, 0x87d55512a91ea6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t**), "_POP_FX_DRIPS_WATCHDOG_CONTEXT.ChildDevices", child_devices, 0xc0, 0x40, true, 0x5b77a5b425dff366)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DRIPS_WATCHDOG_CONTEXT.ChildDeviceCount", child_device_count, 0x100, 0x20, true, 0xff0390e61eacffc3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif