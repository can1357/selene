#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTIONMANAGER_BASIC_INFORMATION.TmIdentity", tm_identity, 0x0, 0x80, true, 0x42a9263e5dd647bd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TRANSACTIONMANAGER_BASIC_INFORMATION.VirtualClock", virtual_clock, 0x80, 0x40, true, 0xb22485b9e252900d)
#else
#define _m00
#define _m01
#endif