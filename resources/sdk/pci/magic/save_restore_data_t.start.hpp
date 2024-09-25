#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SAVE_RESTORE_DATA.Command", command, 0x0, 0x10, true, 0xf0f351e8196f895)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_SAVE_RESTORE_DATA.CacheLineSize", cache_line_size, 0x10, 0x8, true, 0x66f58e9b3eeb9665)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_SAVE_RESTORE_DATA.LatencyTimer", latency_timer, 0x18, 0x8, true, 0xf760f9ca3824eb98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_SAVE_RESTORE_DATA.InterruptLine", interrupt_line, 0x20, 0x8, true, 0x305a08dbe387bf1e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SAVE_RESTORE_DATA.bridge.BridgeControl", bridge_control, 0x0, 0x10, true, 0xde0cfae9ea986806)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_SAVE_RESTORE_DATA.bridge.SecondaryBusNumber", secondary_bus_number, 0x10, 0x8, true, 0xcc4b71aa7f01fa60)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_SAVE_RESTORE_DATA.bridge.SubordinateBusNumber", subordinate_bus_number, 0x18, 0x8, true, 0x89bcc878f1142ee8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bridge_t), "_PCI_SAVE_RESTORE_DATA.bridge", bridge, 0x30, 0x20, true, 0xa435ddcac59b8c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif