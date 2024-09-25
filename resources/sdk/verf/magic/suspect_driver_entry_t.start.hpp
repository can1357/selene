#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VF_SUSPECT_DRIVER_ENTRY.Links", links, 0x0, 0x80, true, 0x649814a7cf958b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_SUSPECT_DRIVER_ENTRY.Loads", loads, 0x80, 0x20, true, 0xda20ce9a60b42135)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_SUSPECT_DRIVER_ENTRY.Unloads", unloads, 0xa0, 0x20, true, 0x325c81b4154cf373)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_VF_SUSPECT_DRIVER_ENTRY.BaseName", base_name, 0xc0, 0x80, true, 0x6d3c631b9f74cab4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif