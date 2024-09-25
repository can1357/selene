#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_REQUIREMENTS_LIST.ListSize", list_size, 0x0, 0x20, true, 0x47bbb2a4efad8a92)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_IO_RESOURCE_REQUIREMENTS_LIST.InterfaceType", interface_type, 0x20, 0x20, true, 0x55bf88681f25f3f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_REQUIREMENTS_LIST.BusNumber", bus_number, 0x40, 0x20, true, 0xdbc522e47285f154)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_REQUIREMENTS_LIST.SlotNumber", slot_number, 0x60, 0x20, true, 0xe2dc07d6d757796a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_REQUIREMENTS_LIST.AlternativeLists", alternative_lists, 0xe0, 0x20, true, 0x691864e12c4d8007)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_list_t, 1>), "_IO_RESOURCE_REQUIREMENTS_LIST.List", list, 0x100, 0x40, true, 0x744f917fee5ac713)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif