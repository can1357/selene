#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x3ecdbe2dce37998b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT.IsBugcheckOwner", is_bugcheck_owner, 0x0, 0x0, false, 0x5847ee6a574f1554)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT.RecursionCount", recursion_count, 0x0, 0x0, false, 0xfabd4e04ef4e9002)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT.IsBugcheckRecoveryOwner", is_bugcheck_recovery_owner, 0x0, 0x0, false, 0x2f517f23c745a0c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif