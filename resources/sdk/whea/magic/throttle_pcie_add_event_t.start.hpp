#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_THROTTLE_PCIE_ADD_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x449c139a16995feb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::pcie_address_t), "_WHEA_THROTTLE_PCIE_ADD_EVENT.Address", address, 0x0, 0x0, false, 0xae286e2aee1e9863)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_THROTTLE_PCIE_ADD_EVENT.Mask", mask, 0x0, 0x0, false, 0xd04fc0ad8049a351)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_THROTTLE_PCIE_ADD_EVENT.Updated", updated, 0x0, 0x0, false, 0x52a95da84768ac27)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEA_THROTTLE_PCIE_ADD_EVENT.Status", status, 0x0, 0x0, false, 0x3c59a79e53c6b95c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif