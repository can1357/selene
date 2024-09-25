#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVIEW_MAP.MappedLength", mapped_length, 0x0, 0x0, false, 0x55cb668878379d40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_HVIEW_MAP.Lock", lock, 0x0, 0x0, false, 0xcc204b721dcc4e07)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_HVIEW_MAP.FileObject", file_object, 0x0, 0x0, false, 0x7a410f8b1520d924)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hview_map_directory_t*), "_HVIEW_MAP.Directory", directory, 0x0, 0x0, false, 0x351eb17fcdcaa977)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVIEW_MAP.PagesCharged", pages_charged, 0x0, 0x0, false, 0x349a864dfa17815c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hview_map_pin_log_t), "_HVIEW_MAP.PinLog", pin_log, 0x0, 0x0, false, 0x7e275cb2ab90ab5b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif