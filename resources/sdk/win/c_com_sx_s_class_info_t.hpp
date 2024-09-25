#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_com_sx_s_class_info_t.start.hpp"
namespace win
{
    struct activation_context_data_com_server_redirection_t;

    // [class CComSxSClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_sx_s_class_info_t                         
    {                                                     
        using pcactivation_context_data_com_server_redirection_t = const struct win::activation_context_data_com_server_redirection_t*;                    
        using m_p_data_t =                                         pcactivation_context_data_com_server_redirection_t ;                    
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 int32_t                  m_c_ref;              //{ +0x0018    +0x0018    +0x0020    +0x0018    } | .m_cRef
        _m01 void*                    m_h_act_ctx;          //{ +0x0020    +0x0020    +0x0028    +0x0020    } | .m_hActCtx
        _m02 m_p_data_t               m_p_data;             //{ +0x0028    +0x0028    +0x0030    +0x0028    } | .m_pData
        _m03 uint32_t                 m_ul_data_length;     //{ +0x0030    +0x0030    +0x0038    +0x0030    } | .m_ulDataLength
        _m04 void*                    m_p_section_base;     //{ +0x0038    +0x0038    +0x0040    +0x0038    } | .m_pSectionBase
        _m05 uint32_t                 m_ul_section_length;  //{ +0x0040    +0x0040    +0x0048    +0x0040    } | .m_ulSectionLength
        _m06 sdk::array<wchar_t, 260> m_buf_module_path;    //{ +0x0044    +0x0044    +0x004c    +0x0044    } | .m_bufModulePath
                                                          
        SDK_MAGIC_PROPERTIES( "CComSxSClassInfo.$", 0x250, true, 0x33f2dce8cb033958 );                    
        SDK_DYNAMIC_SIZE( c_com_sx_s_class_info_t );                    
    };                                                    
};
#include "magic/c_com_sx_s_class_info_t.end.hpp"
