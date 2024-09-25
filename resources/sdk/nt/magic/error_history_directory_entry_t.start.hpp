#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERROR_HISTORY_DIRECTORY_ENTRY.SupportedBufferId", supported_buffer_id, 0x0, 0x8, true, 0x923914f97e5deb60)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERROR_HISTORY_DIRECTORY_ENTRY.BufferFormat", buffer_format, 0x8, 0x8, true, 0x4a096553afd16456)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_ERROR_HISTORY_DIRECTORY_ENTRY.BufferSource", buffer_source, 0x10, 0x4, true, 0xaff449b5f3ff6544, 4, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ERROR_HISTORY_DIRECTORY_ENTRY.MaxAvailableLength", max_available_length, 0x20, 0x20, true, 0xf2b3bbfc83115152)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif