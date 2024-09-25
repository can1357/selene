#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_ORIGIN.OriginatingLogonSession", originating_logon_session, 0x0, 0x40, true, 0x645076fb4dd99eb4)
#else
#define _m00
#endif