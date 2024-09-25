#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_port_object_t*), "_PORT_CCB.Port", port, 0x0, 0x40, true, 0x92bcabd197ab1f07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_PORT_CCB.ReplyWaiterList", reply_waiter_list, 0x40, 0x80, true, 0x63dd4f2f9a50508b)
#else
#define _m00
#define _m01
#endif