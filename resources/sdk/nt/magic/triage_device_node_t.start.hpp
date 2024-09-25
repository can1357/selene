#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_device_node_t*), "_TRIAGE_DEVICE_NODE.Sibling", sibling, 0x0, 0x40, true, 0x58a98e0c32fce9aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_device_node_t*), "_TRIAGE_DEVICE_NODE.Child", child, 0x40, 0x40, true, 0xeccf7bc9d4526cb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_device_node_t*), "_TRIAGE_DEVICE_NODE.Parent", parent, 0x80, 0x40, true, 0x6c886963dabacecb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_device_node_t*), "_TRIAGE_DEVICE_NODE.LastChild", last_child, 0xc0, 0x40, true, 0x26199aa4a3e08064)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_TRIAGE_DEVICE_NODE.PhysicalDeviceObject", physical_device_object, 0x100, 0x40, true, 0xd509e032250a7bfc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_TRIAGE_DEVICE_NODE.InstancePath", instance_path, 0x140, 0x80, true, 0x393eeab1d2ea09b8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_TRIAGE_DEVICE_NODE.ServiceName", service_name, 0x1c0, 0x80, true, 0x1fdc062226ae15d7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_TRIAGE_DEVICE_NODE.PendingIrp", pending_irp, 0x240, 0x40, true, 0x14b6d9d923f0ea59)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_pop_fx_device_t*), "_TRIAGE_DEVICE_NODE.FxDevice", fx_device, 0x280, 0x40, true, 0xdd7d949299c79fd9)
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