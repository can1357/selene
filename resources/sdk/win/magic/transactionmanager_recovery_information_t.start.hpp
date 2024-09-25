#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRANSACTIONMANAGER_RECOVERY_INFORMATION.LastRecoveredLsn", last_recovered_lsn, 0x0, 0x40, true, 0x5ddb5a0963ed2616)
#else
#define _m00
#endif