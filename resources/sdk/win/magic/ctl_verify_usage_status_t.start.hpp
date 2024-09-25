#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0x4046a5d5cc137ee1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_STATUS.dwError", dw_error, 0x20, 0x20, true, 0x4be513b78e125fbd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_STATUS.dwFlags", dw_flags, 0x40, 0x20, true, 0x43b352079d6d1bbe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::ctl_context_t**), "_CTL_VERIFY_USAGE_STATUS.ppCtl", pp_ctl, 0x80, 0x40, true, 0x1a18f1a3122a1b01)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_STATUS.dwCtlEntryIndex", dw_ctl_entry_index, 0xc0, 0x20, true, 0xfee9cd65a0780ac7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t**), "_CTL_VERIFY_USAGE_STATUS.ppSigner", pp_signer, 0x100, 0x40, true, 0x9b34362fadba94d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_STATUS.dwSignerIndex", dw_signer_index, 0x140, 0x20, true, 0x2a8b13856040c196)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif