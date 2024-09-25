#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEA.dwScope", dw_scope, 0x0, 0x20, true, 0xfcca37160c1c5620)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEA.dwType", dw_type, 0x20, 0x20, true, 0xccf44454ed057a6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEA.dwDisplayType", dw_display_type, 0x40, 0x20, true, 0x5dbf03f9c6beb82f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEA.dwUsage", dw_usage, 0x60, 0x20, true, 0xefab32ebbff8a18a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_NETRESOURCEA.lpLocalName", lp_local_name, 0x80, 0x40, true, 0xae25e989940f5937)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_NETRESOURCEA.lpRemoteName", lp_remote_name, 0xc0, 0x40, true, 0x8a904c93b184173c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_NETRESOURCEA.lpComment", lp_comment, 0x100, 0x40, true, 0x399dc090361b5e6c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_NETRESOURCEA.lpProvider", lp_provider, 0x140, 0x40, true, 0xc79d28de8058299a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif