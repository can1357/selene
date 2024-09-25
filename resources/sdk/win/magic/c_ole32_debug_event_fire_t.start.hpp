#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COle32DebugEventFire._cRef", c_ref, 0x40, 0x20, true, 0xa569949291194cb4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "COle32DebugEventFire._csEventFire", cs_event_fire, 0x80, 0x40, true, 0xa17b6060a6173c58)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "COle32DebugEventFire._fLogDisabled", f_log_disabled, 0x1c0, 0x20, true, 0xe4ef95642f110343)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "COle32DebugEventFire._guidSession", guid_session, 0x1e0, 0x80, true, 0x25bf45508d30eed9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "COle32DebugEventFire._strSessionName", str_session_name, 0x280, 0x40, true, 0x9e16cca66521e321)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_system_debug_event_fire_t*), "COle32DebugEventFire._pEventFire", p_event_fire, 0x2c0, 0x40, true, 0x25ebc1b620a6df4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "COle32DebugEventFire._punkFTM", punk_ftm, 0x300, 0x40, true, 0xef0fd8852f582036)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif