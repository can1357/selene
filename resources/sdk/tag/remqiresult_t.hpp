#pragma once
#include <sdkgen/support_library.hpp>
#include "stdobjref_t.hpp"

#include "magic/remqiresult_t.start.hpp"
namespace tag
{
    // [struct tagREMQIRESULT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remqiresult_t                      
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 sdk::hresult            h_result;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hResult
        _m01 struct tag::stdobjref_t std;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .std
                                              
        SDK_MAGIC_PROPERTIES( "tagREMQIRESULT.$", 0x30, true, 0xc74add183493d026 );         
        SDK_FIXED_SIZE( remqiresult_t, 0x30 );         
    };                                        
};
#include "magic/remqiresult_t.end.hpp"
SDK_VERIFY( struct tag::remqiresult_t, 0x30 );
