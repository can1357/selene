#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::timer_t), "FxWatchdog.m_Timer", m_timer, 0x0, 0xc0, true, 0xe2a6d63a421a889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxWatchdog.m_PkgPnp", m_pkg_pnp, 0x4c0, 0x40, true, 0x161ea29fc52d090b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxWatchdog.m_CallingThread", m_calling_thread, 0x500, 0x40, true, 0xcb765df53dbd96ba)
#else
#define _m00
#define _m01
#define _m02
#endif