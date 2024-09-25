#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::logon_session_references_t*), "_SEP_SILOSTATE.SystemLogonSession", system_logon_session, 0x0, 0x40, true, 0x634238df99886cd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::logon_session_references_t*), "_SEP_SILOSTATE.AnonymousLogonSession", anonymous_logon_session, 0x40, 0x40, true, 0x5c16d28c70e1879e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_SILOSTATE.AnonymousLogonToken", anonymous_logon_token, 0x80, 0x40, true, 0x5903414511955df6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_SILOSTATE.AnonymousLogonTokenNoEveryone", anonymous_logon_token_no_everyone, 0xc0, 0x40, true, 0x3eb9da1b0bb4723c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SEP_SILOSTATE.UncSystemPaths", unc_system_paths, 0x100, 0x40, true, 0x5affaedcda94e525)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ci::ngen_paths_t*), "_SEP_SILOSTATE.NgenPaths", ngen_paths, 0x140, 0x40, true, 0x9950de55dd4c3314)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif