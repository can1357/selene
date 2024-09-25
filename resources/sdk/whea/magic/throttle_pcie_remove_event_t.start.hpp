#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_THROTTLE_PCIE_REMOVE_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x4345bfcf519a84f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::pcie_address_t), "_WHEA_THROTTLE_PCIE_REMOVE_EVENT.Address", address, 0x0, 0x0, false, 0x5a545f27494e4a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_THROTTLE_PCIE_REMOVE_EVENT.Mask", mask, 0x0, 0x0, false, 0xcc055053c1cd75a8)
#else
#define _m00
#define _m01
#define _m02
#endif