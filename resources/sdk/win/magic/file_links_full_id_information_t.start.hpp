#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINKS_FULL_ID_INFORMATION.BytesNeeded", bytes_needed, 0x0, 0x20, true, 0x55893f164535d96a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINKS_FULL_ID_INFORMATION.EntriesReturned", entries_returned, 0x20, 0x20, true, 0xddd562490dc33f23)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_link_entry_full_id_information_t), "_FILE_LINKS_FULL_ID_INFORMATION.Entry", entry, 0x40, 0xe0, true, 0xc8af1e5635d31390)
#else
#define _m00
#define _m01
#define _m02
#endif