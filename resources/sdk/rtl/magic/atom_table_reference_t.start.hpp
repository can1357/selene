#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTL_ATOM_TABLE_REFERENCE.LowBoxList", low_box_list, 0x0, 0x80, true, 0x45f2a1fcbd137614)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ATOM_TABLE_REFERENCE.LowBoxID", low_box_id, 0x80, 0x20, true, 0xdda5a44ad8582557)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_ATOM_TABLE_REFERENCE.ReferenceCount", reference_count, 0xa0, 0x10, true, 0x5bbfcf0705339c30)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_ATOM_TABLE_REFERENCE.Flags", flags, 0xb0, 0x10, true, 0xdba7a3f09d9325dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif