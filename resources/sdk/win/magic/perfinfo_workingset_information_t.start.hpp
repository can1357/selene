#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_WORKINGSET_INFORMATION.Count", count, 0x0, 0x20, true, 0x5d38f0f0b6030518)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::perfinfo_workingset_entry_t, 1>), "_PERFINFO_WORKINGSET_INFORMATION.WsEntry", ws_entry, 0x20, 0x20, true, 0x887882b8ff3a2291)
#else
#define _m00
#define _m01
#endif