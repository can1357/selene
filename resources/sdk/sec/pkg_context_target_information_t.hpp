#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_target_information_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_TargetInformation]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_target_information_t         
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint32_t marshalled_target_info_length;  //{ +0x0000    +0x0000    +0x0000    } | .MarshalledTargetInfoLength
        _m01 uint8_t* marshalled_target_info;         //{ +0x0008    +0x0008    +0x0008    } | .MarshalledTargetInfo
                                                    
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_TargetInformation.$", 0x10, true, 0xc0434d960d8da321 );                              
        SDK_FIXED_SIZE( pkg_context_target_information_t, 0x10 );                              
    };                                              
};
#include "magic/pkg_context_target_information_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_target_information_t, 0x10 );
