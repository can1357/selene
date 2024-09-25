#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_DEVICE_NOTIFY.Link", link, 0x0, 0x80, true, 0x9aff33df3b4c303b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_DEVICE_NOTIFY.PowerChildren", power_children, 0x80, 0x80, true, 0x2240181956ef2e6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_DEVICE_NOTIFY.PowerParents", power_parents, 0x100, 0x80, true, 0x3db5b76fb16b9609)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PO_DEVICE_NOTIFY.TargetDevice", target_device, 0x180, 0x40, true, 0x12006a9d6a03b0a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PO_DEVICE_NOTIFY.OrderLevel", order_level, 0x1c0, 0x8, true, 0xc20e19cf42552cc5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PO_DEVICE_NOTIFY.DeviceObject", device_object, 0x200, 0x40, true, 0xdfab8511ddd20c16)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PO_DEVICE_NOTIFY.DeviceName", device_name, 0x240, 0x40, true, 0x2c3a78341e9ee125)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PO_DEVICE_NOTIFY.DriverName", driver_name, 0x280, 0x40, true, 0xc9d3ea615f70e5b2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DEVICE_NOTIFY.ChildCount", child_count, 0x2c0, 0x20, true, 0xccd575cefa313c6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DEVICE_NOTIFY.ActiveChild", active_child, 0x2e0, 0x20, true, 0x834a4b9a111e5d87)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DEVICE_NOTIFY.ParentCount", parent_count, 0x300, 0x20, true, 0xcffade6c0d27520c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DEVICE_NOTIFY.ActiveParent", active_parent, 0x320, 0x20, true, 0x98bbcdb9342cdf22)
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
#endif