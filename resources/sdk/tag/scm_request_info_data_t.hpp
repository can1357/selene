#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct custom_remote_request_scm_info_t; }

#include "magic/scm_request_info_data_t.start.hpp"
namespace tag
{
    struct custom_priv_scm_info_t;

    // [struct tagScmRequestInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scm_request_info_data_t                                        
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                
        _m00 struct tag::custom_priv_scm_info_t*           p_scm_info;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pScmInfo
        _m01 struct win::custom_remote_request_scm_info_t* remote_request;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .remoteRequest
                                                                          
        SDK_MAGIC_PROPERTIES( "tagScmRequestInfoData.$", 0x10, true, 0xfe946c41b02ad2df );               
        SDK_FIXED_SIZE( scm_request_info_data_t, 0x10 );                  
    };                                                                    
};
#include "magic/scm_request_info_data_t.end.hpp"
SDK_VERIFY( struct tag::scm_request_info_data_t, 0x10 );
