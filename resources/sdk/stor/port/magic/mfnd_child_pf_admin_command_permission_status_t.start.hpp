#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS.Version", version, 0x0, 0x0, false, 0xf8267acbeb74141d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS.Size", size, 0x0, 0x0, false, 0x507a8936bb1bb1b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS.CommandCount", command_count, 0x0, 0x0, false, 0x8b37277a0784f6d6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::mfnd_child_pf_admin_command_permission_entry_t, 1>), "_MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS.CommandPermissionEntries", command_permission_entries, 0x0, 0x0, false, 0x8a87ab391a9c7d61)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif