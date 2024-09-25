#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_QUERY_PATH_REQUEST_EX.pSecurityContext", p_security_context, 0x0, 0x40, true, 0xbf1e640037934492)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_PATH_REQUEST_EX.EaLength", ea_length, 0x40, 0x20, true, 0x3a5907bcfeb65b4a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_QUERY_PATH_REQUEST_EX.pEaBuffer", p_ea_buffer, 0x80, 0x40, true, 0xc323b45ec9da0c56)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_QUERY_PATH_REQUEST_EX.PathName", path_name, 0xc0, 0x80, true, 0xb70b84febfe9ec92)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_QUERY_PATH_REQUEST_EX.DomainServiceName", domain_service_name, 0x140, 0x80, true, 0xcd9796389cdb4adf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ecp_list_t*), "_QUERY_PATH_REQUEST_EX.EcpList", ecp_list, 0x1c0, 0x40, true, 0xaf9df10dbc9dfd80)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_QUERY_PATH_REQUEST_EX.Silo", silo, 0x200, 0x40, true, 0xefc844b4fb484984)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif