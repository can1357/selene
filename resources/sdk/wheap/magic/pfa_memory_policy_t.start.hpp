#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PFA_MEMORY_POLICY.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xed334cad3e9c1c31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_POLICY.RegistryKeysPresent", registry_keys_present, 0x100, 0x20, true, 0xe19e7761296cf8af)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PFA_MEMORY_POLICY.DisableOffline", disable_offline, 0x120, 0x8, true, 0x3ba0ddca61269359)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PFA_MEMORY_POLICY.PersistOffline", persist_offline, 0x128, 0x8, true, 0x57630977a03314ef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PFA_MEMORY_POLICY.PfaDisabled", pfa_disabled, 0x130, 0x8, true, 0x627d61a54b09fbd4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_POLICY.PageCount", page_count, 0x138, 0x20, true, 0x3d1b65b831ece7cb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_POLICY.ErrorThreshold", error_threshold, 0x158, 0x20, true, 0x510bf8e610da5def)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_POLICY.TimeOut", time_out, 0x178, 0x20, true, 0x551278c70b7a2bc5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif