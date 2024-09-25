#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PO_SPR_ACTIVE_SESSION_DATA.Start", start, 0x0, 0x8, true, 0x9c50d65fae8fd85e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PO_SPR_ACTIVE_SESSION_DATA.ActiveSessionGuid", active_session_guid, 0x20, 0x80, true, 0xc339163d15de40a1)
#else
#define _m00
#define _m01
#endif