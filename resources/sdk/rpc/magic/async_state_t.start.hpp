#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_ASYNC_STATE.Size", size, 0x0, 0x20, true, 0xf8f3a49c931c04a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_ASYNC_STATE.Signature", signature, 0x20, 0x20, true, 0x166ba93f7737c031)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RPC_ASYNC_STATE.Lock", lock, 0x40, 0x20, true, 0xbfe1ad729444f50d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_ASYNC_STATE.Flags", flags, 0x60, 0x20, true, 0xb0187f823299e0bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_ASYNC_STATE.StubInfo", stub_info, 0x80, 0x40, true, 0xdb2b224c13f7bb07)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_ASYNC_STATE.UserInfo", user_info, 0xc0, 0x40, true, 0x66bc307ecd8ff322)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_ASYNC_STATE.RuntimeInfo", runtime_info, 0x100, 0x40, true, 0xdcc56f116446f63b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rpc::async_event_t), "_RPC_ASYNC_STATE.Event", event, 0x140, 0x20, true, 0x363cc95dbeaa3fed)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rpc::notification_types_t), "_RPC_ASYNC_STATE.NotificationType", notification_type, 0x160, 0x20, true, 0x24d39049f19941a7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rpc::async_notification_info_t), "_RPC_ASYNC_STATE.u", u, 0x180, 0x0, true, 0x39d8aa20abd09b0a)
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
#define _m09
#endif