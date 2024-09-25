#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ARBITER_LIST_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0xcf0497bf49b8ff6a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_LIST_ENTRY.AlternativeCount", alternative_count, 0x80, 0x20, true, 0xd379228d7a64961b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t*), "_ARBITER_LIST_ENTRY.Alternatives", alternatives, 0xc0, 0x40, true, 0x2105b552e425914)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_ARBITER_LIST_ENTRY.PhysicalDeviceObject", physical_device_object, 0x100, 0x40, true, 0x2e3344fbcd3a2229)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum arbiter::request_source_t), "_ARBITER_LIST_ENTRY.RequestSource", request_source, 0x140, 0x20, true, 0xdb2cf741dd9b2772)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_LIST_ENTRY.Flags", flags, 0x160, 0x20, true, 0xb2a12b38993fd900)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_ARBITER_LIST_ENTRY.WorkSpace", work_space, 0x180, 0x40, true, 0x903b2f1d58d2c2d6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_ARBITER_LIST_ENTRY.InterfaceType", interface_type, 0x1c0, 0x20, true, 0x292c79f54cc40a7d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_LIST_ENTRY.SlotNumber", slot_number, 0x1e0, 0x20, true, 0x7cdb382f2cd74ac3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_LIST_ENTRY.BusNumber", bus_number, 0x200, 0x20, true, 0xb0b429257cac3f9c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_ARBITER_LIST_ENTRY.Assignment", assignment, 0x240, 0x40, true, 0x9dee6b52627a4c50)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t*), "_ARBITER_LIST_ENTRY.SelectedAlternative", selected_alternative, 0x280, 0x40, true, 0x9e913524585556d8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum arbiter::result_t), "_ARBITER_LIST_ENTRY.Result", result, 0x2c0, 0x20, true, 0xecffd8b2cc198bd5)
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
#endif