#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_REMOTE_NAME_INFOA.lpUniversalName", lp_universal_name, 0x0, 0x40, true, 0x813b0cb43a2019aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_REMOTE_NAME_INFOA.lpConnectionName", lp_connection_name, 0x40, 0x40, true, 0xf3fb690dfb332628)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_REMOTE_NAME_INFOA.lpRemainingPath", lp_remaining_path, 0x80, 0x40, true, 0xb76032e6b0f23d1d)
#else
#define _m00
#define _m01
#define _m02
#endif