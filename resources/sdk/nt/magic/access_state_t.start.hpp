#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_ACCESS_STATE.OperationID", operation_id, 0x0, 0x40, true, 0x46bc0e08ab8248f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACCESS_STATE.SecurityEvaluated", security_evaluated, 0x40, 0x8, true, 0x310d609cf6a31b02)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACCESS_STATE.GenerateAudit", generate_audit, 0x48, 0x8, true, 0x67070a0ddf69c0bf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACCESS_STATE.GenerateOnClose", generate_on_close, 0x50, 0x8, true, 0x2dab8eb71718ac76)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACCESS_STATE.PrivilegesAllocated", privileges_allocated, 0x58, 0x8, true, 0x4000e080427a4e3a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_STATE.Flags", flags, 0x60, 0x20, true, 0x4ded877fe7a79cbc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_STATE.RemainingDesiredAccess", remaining_desired_access, 0x80, 0x20, true, 0x4cd79811ecb2602d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_STATE.PreviouslyGrantedAccess", previously_granted_access, 0xa0, 0x20, true, 0xc31d49aa50a57d23)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_STATE.OriginalDesiredAccess", original_desired_access, 0xc0, 0x20, true, 0xe050d443027d2e6e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::subject_context_t), "_ACCESS_STATE.SubjectSecurityContext", subject_security_context, 0x100, 0x0, true, 0x422adb8f9caa4ff2)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ACCESS_STATE.SecurityDescriptor", security_descriptor, 0x200, 0x40, true, 0x76133462c37e5674)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ACCESS_STATE.AuxData", aux_data, 0x240, 0x40, true, 0x5e6a14c546aab2d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::initial_privilege_set_t), "_ACCESS_STATE.Privileges.InitialPrivilegeSet", initial_privilege_set, 0x0, 0x60, true, 0xf61b180879fd84c3)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::privilege_set_t), "_ACCESS_STATE.Privileges.PrivilegeSet", privilege_set, 0x0, 0xa0, true, 0x50cb0f7ed2c3ca2c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_privileges_t), "_ACCESS_STATE.Privileges", privileges, 0x280, 0x60, true, 0x5a0e66ecbbc56557)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ACCESS_STATE.AuditPrivileges", audit_privileges, 0x3e0, 0x8, true, 0x6bd83fe631aaa110)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ACCESS_STATE.ObjectName", object_name, 0x400, 0x80, true, 0xeca1cecf38217eee)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ACCESS_STATE.ObjectTypeName", object_type_name, 0x480, 0x80, true, 0x1eff7154dcf04403)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif