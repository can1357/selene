#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_bin_context_t.start.hpp"
namespace hv
{
    // [struct _HV_GET_BIN_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_bin_context_t               
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint1_t outstanding_reference;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .OutstandingReference
                                           
        // Windows 10 v1607                      
        //                                 
        _m01 uint1_t acquired_rundown;       //{ +0x0000@1  } | .AcquiredRundown
                                           
        SDK_MAGIC_PROPERTIES( "_HV_GET_BIN_CONTEXT.$", 0x2, true, 0x93efe2965afdd961 );                      
        SDK_FIXED_SIZE( get_bin_context_t, 0x2 );                      
    };                                     
};
#include "magic/get_bin_context_t.end.hpp"
SDK_VERIFY( struct hv::get_bin_context_t, 0x2 );
