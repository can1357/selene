#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::handle_revocation_info_t), "_OBJECT_FOOTER.HandleRevocationInfo", handle_revocation_info, 0x0, 0x0, true, 0xd385e984e45d2420)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ob::extended_user_info_t), "_OBJECT_FOOTER.ExtendedUserInfo", extended_user_info, 0x100, 0x80, true, 0x2005aa939e773d5b)
#else
#define _m00
#define _m01
#endif