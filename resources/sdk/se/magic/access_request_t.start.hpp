#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ACCESS_REQUEST.Size", size, 0x0, 0x20, true, 0x4afe9b24bc496bea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct se::security_descriptor_t*), "_SE_ACCESS_REQUEST.SeSecurityDescriptor", se_security_descriptor, 0x40, 0x40, true, 0xf2e9843665f165aa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ACCESS_REQUEST.DesiredAccess", desired_access, 0x80, 0x20, true, 0x995e4176c8159b00)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ACCESS_REQUEST.PreviouslyGrantedAccess", previously_granted_access, 0xa0, 0x20, true, 0x60ad20718fb4f0f0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_ACCESS_REQUEST.PrincipalSelfSid", principal_self_sid, 0xc0, 0x40, true, 0x628eacc618ec38b6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::generic_mapping_t*), "_SE_ACCESS_REQUEST.GenericMapping", generic_mapping, 0x100, 0x40, true, 0x69fed47bf7634dc9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ACCESS_REQUEST.ObjectTypeListCount", object_type_list_count, 0x140, 0x20, true, 0x5a0dad399a9b5cdd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_type_list_t*), "_SE_ACCESS_REQUEST.ObjectTypeList", object_type_list, 0x180, 0x40, true, 0xc4e7945d93b94d57)
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