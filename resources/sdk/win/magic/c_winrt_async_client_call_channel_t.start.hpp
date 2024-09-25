#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CWinrtAsyncClientCallChannel._isInproc", is_inproc, 0x40, 0x8, true, 0x9aed6ba287f242aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "CWinrtAsyncClientCallChannel._procNum", proc_num, 0x50, 0x10, true, 0x20c0ce5c9b4062d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t const*), "CWinrtAsyncClientCallChannel._pOxidEntry", p_oxid_entry, 0xc0, 0x40, true, 0xb2d8b75bc0bfe2f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t&), "CWinrtAsyncClientCallChannel._iid", iid, 0x100, 0x40, true, 0x2ceae55ecc52668f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CWinrtAsyncClientCallChannel._dwTransportCallCreationState", dw_transport_call_creation_state, 0x140, 0x20, true, 0x4e536b80f2d5b8f3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t const*), "CWinrtAsyncClientCallChannel._pIpidEntry", p_ipid_entry, 0x180, 0x40, true, 0x6240155ed0e4ba0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif