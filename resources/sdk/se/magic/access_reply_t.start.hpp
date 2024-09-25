#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ACCESS_REPLY.Size", size, 0x0, 0x20, true, 0x6d7eb27e105410b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ACCESS_REPLY.ResultListCount", result_list_count, 0x20, 0x20, true, 0x39d6c5e5bec92fe4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_SE_ACCESS_REPLY.GrantedAccess", granted_access, 0x40, 0x40, true, 0xb18532dadefe406a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "_SE_ACCESS_REPLY.AccessStatus", access_status, 0x80, 0x40, true, 0x511d3724c45ab56)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::access_reasons_t*), "_SE_ACCESS_REPLY.AccessReason", access_reason, 0xc0, 0x40, true, 0x4ce1021c3857f035)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::privilege_set_t**), "_SE_ACCESS_REPLY.Privileges", privileges, 0x100, 0x40, true, 0xedd6e3e67e84da82)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif