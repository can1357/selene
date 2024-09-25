#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_AUDIT_INFO.Size", size, 0x0, 0x20, true, 0x63ab2109cc6eb98b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::audit_event_type_t), "_SE_AUDIT_INFO.AuditType", audit_type, 0x20, 0x20, true, 0x3676fb2e3195a9fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum se::audit_operation_t), "_SE_AUDIT_INFO.AuditOperation", audit_operation, 0x40, 0x20, true, 0x4c53b4e0d5da8c5d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_AUDIT_INFO.AuditFlags", audit_flags, 0x60, 0x20, true, 0x858da0593967ba93)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SE_AUDIT_INFO.SubsystemName", subsystem_name, 0x80, 0x80, true, 0x5c4472dec31342fd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SE_AUDIT_INFO.ObjectTypeName", object_type_name, 0x100, 0x80, true, 0x4bb77c11c3c4d060)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SE_AUDIT_INFO.ObjectName", object_name, 0x180, 0x80, true, 0xb6fc437409c532e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_AUDIT_INFO.HandleId", handle_id, 0x200, 0x40, true, 0x90a6465d1e212fce)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_SE_AUDIT_INFO.TransactionId", transaction_id, 0x240, 0x40, true, 0xdf30807786a8fb2d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t*), "_SE_AUDIT_INFO.OperationId", operation_id, 0x280, 0x40, true, 0x5990d8ba8fb2431d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_AUDIT_INFO.ObjectCreation", object_creation, 0x2c0, 0x8, true, 0x65841746b06be444)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_AUDIT_INFO.GenerateOnClose", generate_on_close, 0x2c8, 0x8, true, 0xd072ec1c4baa4aa)
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
#endif