#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SESSION_LOWBOX_MAP.ListEntry", list_entry, 0x0, 0x80, true, 0x99fdf5715e65212b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SESSION_LOWBOX_MAP.SessionId", session_id, 0x80, 0x20, true, 0xd1ea61aa2b40d8a9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::lowbox_number_mapping_t), "_SESSION_LOWBOX_MAP.LowboxMap", lowbox_map, 0xc0, 0x40, true, 0x9a17566462a0f7d)
#else
#define _m00
#define _m01
#define _m02
#endif