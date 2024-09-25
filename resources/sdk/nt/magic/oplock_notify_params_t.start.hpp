#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_notify_reason_t), "_OPLOCK_NOTIFY_PARAMS.NotifyReason", notify_reason, 0x0, 0x20, true, 0x9bf3db618aab8605)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OPLOCK_NOTIFY_PARAMS.NotifyContext", notify_context, 0x40, 0x40, true, 0x7fd38a35cfc387c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_OPLOCK_NOTIFY_PARAMS.Irp", irp, 0x80, 0x40, true, 0xea900d9a2830b92e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OPLOCK_NOTIFY_PARAMS.Status", status, 0xc0, 0x20, true, 0x50da2906954ed78e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif