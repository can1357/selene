#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/freecontiguousmemory_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_FREECONTIGUOUSMEMORY]
    // => WDK 10 (NV)
    //
    struct freecontiguousmemory_t  
    {                              
        // WDK 10                  
        //                         
        _m00 void* h_memory_handle;  //{ +0x0000    } | .hMemoryHandle
                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_FREECONTIGUOUSMEMORY.$", 0x0, false, 0x2246871a28cb3eae );                
        SDK_FIXED_SIZE( freecontiguousmemory_t, 0x8 );                
    };                             
};
#include "magic/freecontiguousmemory_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::freecontiguousmemory_t, 0x8 );
