#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.Flags", flags, 0x0, 0x20, true, 0x32d5b6790623d051)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.MicrosoftSignedOnly", microsoft_signed_only, 0x0, 0x1, true, 0xe86a83d64defa7f6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.StoreSignedOnly", store_signed_only, 0x1, 0x1, true, 0x9834ad2410fa8818, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.MitigationOptIn", mitigation_opt_in, 0x2, 0x1, true, 0x52b5d5925d136176, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.AuditMicrosoftSignedOnly", audit_microsoft_signed_only, 0x3, 0x1, true, 0x12365c1559c4af7b, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.AuditStoreSignedOnly", audit_store_signed_only, 0x4, 0x1, true, 0x343c8ff68051009c, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif