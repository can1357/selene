#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_LIST.ConflictsCounted", conflicts_counted, 0x40, 0x20, true, 0x4f7ffc09b462fe1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_LIST.ConflictsListed", conflicts_listed, 0x60, 0x20, true, 0x2cc8cadfabecba2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_LIST.RequiredBufferSize", required_buffer_size, 0x80, 0x20, true, 0x5297f8b017a6ab97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::plugplay_control_conflict_entry_t, 1>), "_PLUGPLAY_CONTROL_CONFLICT_LIST.ConflictEntry", conflict_entry, 0xc0, 0x40, true, 0xeb0eee80da6f9e7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif