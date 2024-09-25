#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_SERVER_PORT_OBJECT.FilterLink", filter_link, 0x0, 0x80, true, 0xa168bd5d54ceb7be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_port_t*, void*, void*, uint32_t, void**)>*), "_FLT_SERVER_PORT_OBJECT.ConnectNotify", connect_notify, 0x80, 0x40, true, 0x10f4c19600a501a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_FLT_SERVER_PORT_OBJECT.DisconnectNotify", disconnect_notify, 0xc0, 0x40, true, 0x9cdd1ed09ec7992f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, void*, uint32_t, uint32_t*)>*), "_FLT_SERVER_PORT_OBJECT.MessageNotify", message_notify, 0x100, 0x40, true, 0x96a4f8c00a140ceb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_FLT_SERVER_PORT_OBJECT.Filter", filter, 0x140, 0x40, true, 0x9ea49857a300031b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_SERVER_PORT_OBJECT.Cookie", cookie, 0x180, 0x40, true, 0x5310597406c2b9ad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_SERVER_PORT_OBJECT.Flags", flags, 0x1c0, 0x20, true, 0x3cbc618df7c070cf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_SERVER_PORT_OBJECT.NumberOfConnections", number_of_connections, 0x1e0, 0x20, true, 0x98592a2d0e03c8d7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_SERVER_PORT_OBJECT.MaxConnections", max_connections, 0x200, 0x20, true, 0x3e760fca7cabb787)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif