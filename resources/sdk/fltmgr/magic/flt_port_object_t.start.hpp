#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_PORT_OBJECT.FilterLink", filter_link, 0x0, 0x80, true, 0x6a23e599760ee49b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_server_port_object_t*), "_FLT_PORT_OBJECT.ServerPort", server_port, 0x80, 0x40, true, 0x626784f86b358664)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PORT_OBJECT.Cookie", cookie, 0xc0, 0x40, true, 0x7361c23a1c607c6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_FLT_PORT_OBJECT.MsgNotifRundownRef", msg_notif_rundown_ref, 0x100, 0x40, true, 0xcefea3d95c54be2c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_FLT_PORT_OBJECT.Lock", lock, 0x140, 0xc0, true, 0x6807c96393fc15c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_message_waiter_queue_t), "_FLT_PORT_OBJECT.MsgQ", msg_q, 0x300, 0x80, true, 0xc485df89bc79fe73)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FLT_PORT_OBJECT.MessageId", message_id, 0x980, 0x40, true, 0xfb933d2fec54398e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FLT_PORT_OBJECT.DisconnectEvent", disconnect_event, 0x9c0, 0xc0, true, 0xa206ce44ec43357b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PORT_OBJECT.Disconnected", disconnected, 0xa80, 0x8, true, 0xe30a9f1ed7106a38)
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