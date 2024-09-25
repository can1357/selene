#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/freepagesfrommdl_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_FREEPAGESFROMMDL]
    // => WDK 10 (NV)
    //
    struct freepagesfrommdl_t      
    {                              
        // WDK 10                  
        //                         
        _m00 void* h_memory_handle;  //{ +0x0000    } | .hMemoryHandle
                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_FREEPAGESFROMMDL.$", 0x0, false, 0xa2748c317605ec74 );                
        SDK_FIXED_SIZE( freepagesfrommdl_t, 0x8 );                
    };                             
};
#include "magic/freepagesfrommdl_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::freepagesfrommdl_t, 0x8 );
