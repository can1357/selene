#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sqi_result_t.start.hpp"
namespace tag
{
    // [struct tagSQIResult]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sqi_result_t      
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //                   
        _m00 void*        pv;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pv
        _m01 sdk::hresult hr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hr
                             
        SDK_MAGIC_PROPERTIES( "tagSQIResult.$", 0x10, true, 0xd367290312fcc39c );   
        SDK_FIXED_SIZE( sqi_result_t, 0x10 );   
    };                       
};
#include "magic/sqi_result_t.end.hpp"
SDK_VERIFY( struct tag::sqi_result_t, 0x10 );
