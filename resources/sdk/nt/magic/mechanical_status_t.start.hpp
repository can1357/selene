#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mechanical_status_information_header_t), "_MECHANICAL_STATUS.MechanicalStatusHeader", mechanical_status_header, 0x0, 0x40, true, 0xf0c14af25e22f91a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::slot_table_information_t, 1>), "_MECHANICAL_STATUS.SlotTableInfo", slot_table_info, 0x40, 0x20, true, 0xe6cc2d60055cae25)
#else
#define _m00
#define _m01
#endif