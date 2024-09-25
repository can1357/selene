#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDebugEventFire._cRef", c_ref, 0x40, 0x20, true, 0xd8787b624bf524c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CDebugEventFire._csEventFire", cs_event_fire, 0x80, 0x40, true, 0x36d17a8229915c22)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CDebugEventFire._fLogDisabled", f_log_disabled, 0x1c0, 0x20, true, 0xd87a9b474c327386)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CDebugEventFire._guidSession", guid_session, 0x1e0, 0x80, true, 0xd5d0f5fbbd206753)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CDebugEventFire._strSessionName", str_session_name, 0x280, 0x40, true, 0x79a4d44302414365)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_system_debug_event_fire_t*), "CDebugEventFire._pEventFire", p_event_fire, 0x2c0, 0x40, true, 0x1efe5f9a7a6cdf2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CDebugEventFire._punkFTM", punk_ftm, 0x300, 0x40, true, 0x17432518ad8a76f5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif