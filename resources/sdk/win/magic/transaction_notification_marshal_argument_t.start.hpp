#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT.MarshalCookie", marshal_cookie, 0x0, 0x20, true, 0x19530b915e008292)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT.UOW", uow, 0x20, 0x80, true, 0x81a466980b8874ab)
#else
#define _m00
#define _m01
#endif