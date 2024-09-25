#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DELAY_ACK_FO.Links", links, 0x0, 0x80, true, 0x54e62deb7b972ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_DELAY_ACK_FO.OriginalFileObject", original_file_object, 0x80, 0x40, true, 0x727bcd443504a3c5)
#else
#define _m00
#define _m01
#endif