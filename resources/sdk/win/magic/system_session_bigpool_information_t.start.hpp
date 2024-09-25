#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SESSION_BIGPOOL_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x40, true, 0x58301e1c3e491778)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_BIGPOOL_INFORMATION.SessionId", session_id, 0x40, 0x20, true, 0x4c33ee688b1d851c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_BIGPOOL_INFORMATION.Count", count, 0x60, 0x20, true, 0xc80b5e87eb7fe5b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_bigpool_entry_t, 1>), "_SYSTEM_SESSION_BIGPOOL_INFORMATION.AllocatedInfo", allocated_info, 0x80, 0xc0, true, 0x8244635359f8062d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif