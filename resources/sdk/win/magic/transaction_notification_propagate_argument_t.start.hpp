#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT.PropagationCookie", propagation_cookie, 0x0, 0x20, true, 0x18ed2008acc89898)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT.UOW", uow, 0x20, 0x80, true, 0x5727d934b4179923)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT.TmIdentity", tm_identity, 0xa0, 0x80, true, 0xc840861719d68b9d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT.BufferLength", buffer_length, 0x120, 0x20, true, 0xe04be184090ca4c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif