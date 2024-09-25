#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY.Flags", flags, 0x0, 0x0, false, 0x2e0e99f184043606)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY.EnforceRedirectionTrust", enforce_redirection_trust, 0x0, 0x0, false, 0xda51b7f1c6b96c00, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY.AuditRedirectionTrust", audit_redirection_trust, 0x0, 0x0, false, 0x24cfa01e7b3107c6, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif