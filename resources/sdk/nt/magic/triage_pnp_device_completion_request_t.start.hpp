#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_TRIAGE_PNP_DEVICE_COMPLETION_REQUEST.ListEntry", list_entry, 0x0, 0x80, true, 0xcad3e22a8351ba9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_device_node_t*), "_TRIAGE_PNP_DEVICE_COMPLETION_REQUEST.DeviceNode", device_node, 0x80, 0x40, true, 0x7238dfeaa7975ec3)
#else
#define _m00
#define _m01
#endif