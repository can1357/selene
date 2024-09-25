#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_REMOTE_NAME_INFOW.lpUniversalName", lp_universal_name, 0x0, 0x40, true, 0x5a8f62ded17b6176)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_REMOTE_NAME_INFOW.lpConnectionName", lp_connection_name, 0x40, 0x40, true, 0xbcc98f350ca73b87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_REMOTE_NAME_INFOW.lpRemainingPath", lp_remaining_path, 0x80, 0x40, true, 0xfcf02475d7e851c7)
#else
#define _m00
#define _m01
#define _m02
#endif