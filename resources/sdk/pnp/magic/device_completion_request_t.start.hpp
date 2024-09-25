#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PNP_DEVICE_COMPLETION_REQUEST.ListEntry", list_entry, 0x0, 0x80, true, 0x58790cf3d96d5737)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_PNP_DEVICE_COMPLETION_REQUEST.DeviceNode", device_node, 0x80, 0x40, true, 0xa9cce431547cbd82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PNP_DEVICE_COMPLETION_REQUEST.Context", context, 0xc0, 0x40, true, 0x7107acdd80ae21b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::devnode_state_t), "_PNP_DEVICE_COMPLETION_REQUEST.CompletionState", completion_state, 0x100, 0x20, true, 0xb4791cb6c0e808a1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_COMPLETION_REQUEST.IrpPended", irp_pended, 0x120, 0x20, true, 0xc8aeddb9ac95f020)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_DEVICE_COMPLETION_REQUEST.Status", status, 0x140, 0x20, true, 0xcb32a23f056978f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PNP_DEVICE_COMPLETION_REQUEST.Information", information, 0x180, 0x40, true, 0xb7019069f8f0817f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_DEVICE_COMPLETION_REQUEST.ReferenceCount", reference_count, 0x1c0, 0x20, true, 0x30eeeeed3d1c124b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::watchdog_t*), "_PNP_DEVICE_COMPLETION_REQUEST.Watchdog", watchdog, 0x200, 0x40, true, 0xe132e11d3088d59a)
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