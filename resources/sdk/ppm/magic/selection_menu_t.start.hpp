#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_SELECTION_MENU.Count", count, 0x0, 0x20, true, 0x7544c92be22839fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_menu_entry_t*), "_PPM_SELECTION_MENU.Entries", entries, 0x40, 0x40, true, 0x587e72e4c20e4ec3)
#else
#define _m00
#define _m01
#endif