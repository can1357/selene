#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_endpoint_entry_t.start.hpp"
namespace win
{
    class c_endpoint_entry_t;

    // [class CEndpointEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_endpoint_entry_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 class win::c_endpoint_entry_t* m_p_next;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_pNext
        _m01 uint16_t                       m_w_tower_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_wTowerId
        _m02 wchar_t*                       m_psz_endpoint;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_pszEndpoint
        _m03 wchar_t*                       m_psz_prot_seq;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_pszProtSeq
        _m04 uint32_t                       m_dw_flags;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_dwFlags
        _m05 int32_t                        m_f_processed;   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .m_fProcessed
                                                           
        SDK_MAGIC_PROPERTIES( "CEndpointEntry.$", 0x28, true, 0x6891508b6e03f118 );               
        SDK_FIXED_SIZE( c_endpoint_entry_t, 0x28 );               
    };                                                     
};
#include "magic/c_endpoint_entry_t.end.hpp"
SDK_VERIFY( class win::c_endpoint_entry_t, 0x28 );
