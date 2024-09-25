#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PCIE_CONFIG_INFO.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x77dfe5ee50a07e24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_CONFIG_INFO.Segment", segment, 0x0, 0x0, false, 0xc0b1e7b7fd7eeb4e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_CONFIG_INFO.Bus", bus, 0x0, 0x0, false, 0x131154f44f5972c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_CONFIG_INFO.Device", device, 0x0, 0x0, false, 0x612b8fa84b678b5b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_CONFIG_INFO.Function", function, 0x0, 0x0, false, 0xf7f49c3781b8e983)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_CONFIG_INFO.Offset", offset, 0x0, 0x0, false, 0x8efc2b056b29a4c3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_CONFIG_INFO.Length", length, 0x0, 0x0, false, 0xa56d6f37c48d46a2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_PCIE_CONFIG_INFO.Value", value, 0x0, 0x0, false, 0x538af2075941d8fa)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PCIE_CONFIG_INFO.Succeeded", succeeded, 0x0, 0x0, false, 0x8b4c2e88e173be87)
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
#endif