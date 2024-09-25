#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINKS_INFORMATION.BytesNeeded", bytes_needed, 0x0, 0x20, true, 0xe54ffa9908b39f29)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINKS_INFORMATION.EntriesReturned", entries_returned, 0x20, 0x20, true, 0x385123a86ff7f9bf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_link_entry_information_t), "_FILE_LINKS_INFORMATION.Entry", entry, 0x40, 0xc0, true, 0xb86a7f01934e7a63)
#else
#define _m00
#define _m01
#define _m02
#endif