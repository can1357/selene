#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTIONMANAGER_LOGPATH_INFORMATION.LogPathLength", log_path_length, 0x0, 0x20, true, 0xb1d6f243f2fe3254)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_TRANSACTIONMANAGER_LOGPATH_INFORMATION.LogPath", log_path, 0x20, 0x10, true, 0x7c283170ae00781)
#else
#define _m00
#define _m01
#endif