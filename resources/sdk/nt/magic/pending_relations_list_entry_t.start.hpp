#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PENDING_RELATIONS_LIST_ENTRY.Link", link, 0x0, 0x80, true, 0xd749dbefdafea26e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_PENDING_RELATIONS_LIST_ENTRY.WorkItem", work_item, 0x80, 0x0, true, 0x1b91dac6eabed606)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::device_event_entry_t*), "_PENDING_RELATIONS_LIST_ENTRY.DeviceEvent", device_event, 0x180, 0x40, true, 0x9a4ecfc865cc05d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PENDING_RELATIONS_LIST_ENTRY.DeviceObject", device_object, 0x1c0, 0x40, true, 0x7e33d3bb97bcf523)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::relation_list_t*), "_PENDING_RELATIONS_LIST_ENTRY.RelationsList", relations_list, 0x200, 0x40, true, 0x6504843140058124)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PENDING_RELATIONS_LIST_ENTRY.EjectIrp", eject_irp, 0x240, 0x40, true, 0xa47edb1657d43c13)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::irplock_t), "_PENDING_RELATIONS_LIST_ENTRY.Lock", lock, 0x280, 0x20, true, 0x4b83474b7e3ea4e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PENDING_RELATIONS_LIST_ENTRY.Problem", problem, 0x2a0, 0x20, true, 0xee30323e7cb49209)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PENDING_RELATIONS_LIST_ENTRY.ProfileChangingEject", profile_changing_eject, 0x2c0, 0x8, true, 0xb5df0b5fc91e0207)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PENDING_RELATIONS_LIST_ENTRY.DisplaySafeRemovalDialog", display_safe_removal_dialog, 0x2c8, 0x8, true, 0x73aaa72362a11a75)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_PENDING_RELATIONS_LIST_ENTRY.LightestSleepState", lightest_sleep_state, 0x2e0, 0x20, true, 0x2e36025afa9daafd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dock_interface_t*), "_PENDING_RELATIONS_LIST_ENTRY.DockInterface", dock_interface, 0x300, 0x40, true, 0xca4452a67532343f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PENDING_RELATIONS_LIST_ENTRY.DequeuePending", dequeue_pending, 0x340, 0x8, true, 0x16e57f4c2a8be378)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::device_delete_type_t), "_PENDING_RELATIONS_LIST_ENTRY.DeleteType", delete_type, 0x360, 0x20, true, 0xe6600bb54037b0c7)
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
#define _m12
#define _m13
#endif