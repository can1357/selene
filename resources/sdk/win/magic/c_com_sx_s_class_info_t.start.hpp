#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComSxSClassInfo.m_cRef", m_c_ref, 0xc0, 0x20, true, 0x940d2dbadf0494d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComSxSClassInfo.m_hActCtx", m_h_act_ctx, 0x100, 0x40, true, 0xf14f6c369f7b80fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcactivation_context_data_com_server_redirection_t ), "CComSxSClassInfo.m_pData", m_p_data, 0x140, 0x40, true, 0x444ee81c1fa65cf6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComSxSClassInfo.m_ulDataLength", m_ul_data_length, 0x180, 0x20, true, 0x42da27f94b5e134e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComSxSClassInfo.m_pSectionBase", m_p_section_base, 0x1c0, 0x40, true, 0x1501edb9b6912e5f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComSxSClassInfo.m_ulSectionLength", m_ul_section_length, 0x200, 0x20, true, 0x22853187f74ed51d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "CComSxSClassInfo.m_bufModulePath", m_buf_module_path, 0x220, 0x40, true, 0x558e84af3dd6cd35)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif