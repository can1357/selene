#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_DBGK_SILOSTATE.ErrorPortLock", error_port_lock, 0x0, 0x40, true, 0xeb03dd5f46707f2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkp::error_port_t*), "_DBGK_SILOSTATE.ErrorPort", error_port, 0x40, 0x40, true, 0xf28df11904f53e09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_DBGK_SILOSTATE.ErrorProcess", error_process, 0x80, 0x40, true, 0x8a52045fc6dcce08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_DBGK_SILOSTATE.ErrorPortRegisteredEvent", error_port_registered_event, 0xc0, 0x40, true, 0xa0de749dcbfeaff5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif