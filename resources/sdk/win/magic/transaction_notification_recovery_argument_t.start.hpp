#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT.EnlistmentId", enlistment_id, 0x0, 0x80, true, 0xaf9c52c2a1e91bb2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT.UOW", uow, 0x80, 0x80, true, 0x96a15a01e4100852)
#else
#define _m00
#define _m01
#endif