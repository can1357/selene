#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PI_RESOURCE_ARBITER_ENTRY.DeviceArbiterList", device_arbiter_list, 0x0, 0x80, true, 0x2aa7aac3007806c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_RESOURCE_ARBITER_ENTRY.ResourceType", resource_type, 0x80, 0x8, true, 0x2213d97bc76c689)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::interface_t*), "_PI_RESOURCE_ARBITER_ENTRY.ArbiterInterface", arbiter_interface, 0xc0, 0x40, true, 0x846681adb8d834)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_PI_RESOURCE_ARBITER_ENTRY.DeviceNode", device_node, 0x100, 0x40, true, 0x7a01e1c04cc17b27)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PI_RESOURCE_ARBITER_ENTRY.ResourceList", resource_list, 0x140, 0x80, true, 0x3635d400c3f02f9b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PI_RESOURCE_ARBITER_ENTRY.BestResourceList", best_resource_list, 0x1c0, 0x80, true, 0x2e4708334814762e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PI_RESOURCE_ARBITER_ENTRY.BestConfig", best_config, 0x240, 0x80, true, 0xab5c97774877cfdd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PI_RESOURCE_ARBITER_ENTRY.ActiveArbiterList", active_arbiter_list, 0x2c0, 0x80, true, 0xcb903519b2ab5239)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_RESOURCE_ARBITER_ENTRY.State", state, 0x340, 0x8, true, 0x64d2bdc9be779639)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_RESOURCE_ARBITER_ENTRY.ResourcesChanged", resources_changed, 0x348, 0x8, true, 0x96a85834a4c16efb)
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
#endif