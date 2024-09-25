#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resumecontext_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESUMECONTEXT]
    // => WDK 10 (NV)
    //
    struct resumecontext_t   
    {                        
        // WDK 10            
        //                   
        _m00 void* h_context;  //{ +0x0000    } | .hContext
                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESUMECONTEXT.$", 0x0, false, 0x3ca04c22c74f862d );          
        SDK_FIXED_SIZE( resumecontext_t, 0x8 );          
    };                       
};
#include "magic/resumecontext_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::resumecontext_t, 0x8 );
