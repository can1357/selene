#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_SUBJECT_CONTEXT.ClientToken", client_token, 0x0, 0x40, true, 0x907a84eca3de98dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::impersonation_level_t), "_SECURITY_SUBJECT_CONTEXT.ImpersonationLevel", impersonation_level, 0x40, 0x20, true, 0x7c1bf8c968a4ba4b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_SUBJECT_CONTEXT.PrimaryToken", primary_token, 0x80, 0x40, true, 0xf97906f126895f5e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_SUBJECT_CONTEXT.ProcessAuditId", process_audit_id, 0xc0, 0x40, true, 0x25e694d24f0d6050)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif