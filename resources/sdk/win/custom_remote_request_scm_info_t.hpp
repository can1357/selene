#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custom_remote_request_scm_info_t.start.hpp"
namespace win
{
    // [struct _customREMOTE_REQUEST_SCM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custom_remote_request_scm_info_t 
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                  
        _m00 uint32_t  client_imp_level;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientImpLevel
        _m01 uint16_t  c_requested_protseqs;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cRequestedProtseqs
        _m02 uint16_t* p_requested_protseqs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pRequestedProtseqs
                                            
        SDK_MAGIC_PROPERTIES( "_customREMOTE_REQUEST_SCM_INFO.$", 0x10, true, 0xbe93f04603ef275b );                     
        SDK_FIXED_SIZE( custom_remote_request_scm_info_t, 0x10 );                     
    };                                      
};
#include "magic/custom_remote_request_scm_info_t.end.hpp"
SDK_VERIFY( struct win::custom_remote_request_scm_info_t, 0x10 );
