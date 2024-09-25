#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_request_parameters_t.hpp"
#include "ndk_response_parameters_t.hpp"

#include "magic/ndk_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NDK_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_parameters_t                                      
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                       
        _m00 struct ndis::ndk_request_parameters_t  ndk_request;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdkRequest
        _m01 struct ndis::ndk_response_parameters_t ndk_response;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NdkResponse
                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_NDK_PARAMETERS.$", 0xa8, true, 0x6a804a56a43c62a5 );             
        SDK_FIXED_SIZE( ndk_parameters_t, 0xa8 );                
    };                                                           
};
#include "magic/ndk_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_parameters_t, 0xa8 );
