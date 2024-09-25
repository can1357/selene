#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEW.dwScope", dw_scope, 0x0, 0x20, true, 0x596503e98083f417)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEW.dwType", dw_type, 0x20, 0x20, true, 0xd2573e642c3a6260)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEW.dwDisplayType", dw_display_type, 0x40, 0x20, true, 0x4f700bfd803c7213)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETRESOURCEW.dwUsage", dw_usage, 0x60, 0x20, true, 0xbfe8b05293c91d2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NETRESOURCEW.lpLocalName", lp_local_name, 0x80, 0x40, true, 0xcba0b9a94ed30d7c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NETRESOURCEW.lpRemoteName", lp_remote_name, 0xc0, 0x40, true, 0xa92214be30cb928f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NETRESOURCEW.lpComment", lp_comment, 0x100, 0x40, true, 0x9f100b388d95fa65)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NETRESOURCEW.lpProvider", lp_provider, 0x140, 0x40, true, 0x5e7929fbdf1f2cf2)
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