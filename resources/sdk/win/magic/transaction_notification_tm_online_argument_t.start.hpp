#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT.TmIdentity", tm_identity, 0x0, 0x80, true, 0xfb414f5bf88601ce)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT.Flags", flags, 0x80, 0x20, true, 0xe1b0a9875459b7f0)
#else
#define _m00
#define _m01
#endif