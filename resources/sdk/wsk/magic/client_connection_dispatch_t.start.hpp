#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_receive_event_t ), "_WSK_CLIENT_CONNECTION_DISPATCH.WskReceiveEvent", wsk_receive_event, 0x0, 0x40, true, 0x9a4f0f8bb8c01f1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_WSK_CLIENT_CONNECTION_DISPATCH.WskDisconnectEvent", wsk_disconnect_event, 0x40, 0x40, true, 0xa45afde732a78ae7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t)>*), "_WSK_CLIENT_CONNECTION_DISPATCH.WskSendBacklogEvent", wsk_send_backlog_event, 0x80, 0x40, true, 0xed7982b157c24e2)
#else
#define _m00
#define _m01
#define _m02
#endif