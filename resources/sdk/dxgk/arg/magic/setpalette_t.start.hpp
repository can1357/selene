#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPALETTE.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x40043ddb03375152)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPALETTE.FirstEntry", first_entry, 0x20, 0x20, true, 0x93ea5b01c0ed88ea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPALETTE.NumEntries", num_entries, 0x40, 0x20, true, 0x2e9fd45a4d74d92c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::palettedata_t*), "_DXGKARG_SETPALETTE.pLookupTable", p_lookup_table, 0x80, 0x40, true, 0xbe63cf6349c46705)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif