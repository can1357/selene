#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVIEW_MAP_PIN_LOG.Next", next, 0x0, 0x0, false, 0x64672c946772283c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVIEW_MAP_PIN_LOG.Size", size, 0x0, 0x0, false, 0xd3ac6c8ff3668e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::hview_map_pin_log_entry_t, 16>), "_HVIEW_MAP_PIN_LOG.Entries", entries, 0x0, 0x0, false, 0x1905d4f57d62861c)
#else
#define _m00
#define _m01
#define _m02
#endif