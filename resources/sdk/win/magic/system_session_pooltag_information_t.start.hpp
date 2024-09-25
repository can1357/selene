#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SESSION_POOLTAG_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x40, true, 0x858b646f0620decb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_POOLTAG_INFORMATION.SessionId", session_id, 0x40, 0x20, true, 0xe9918a0beb7d354)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_POOLTAG_INFORMATION.Count", count, 0x60, 0x20, true, 0xaeb339bcd24fc221)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_pooltag_t, 1>), "_SYSTEM_SESSION_POOLTAG_INFORMATION.TagInfo", tag_info, 0x80, 0x40, true, 0xcf1785309476481c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif