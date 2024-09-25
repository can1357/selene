#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/afinity_manager_enable_t.start.hpp"
namespace heap
{
    // [struct _HEAP_AFINITY_MANAGER_ENABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct afinity_manager_enable_t                         
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                  
        _m00 struct win::system_trace_header_t header;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 uint32_t                          bucket_index;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BucketIndex
                                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_AFINITY_MANAGER_ENABLE.$", 0x2c, true, 0x13d507f68dc10287 );             
        SDK_FIXED_SIZE( afinity_manager_enable_t, 0x2c );             
    };                                                      
};
#include "magic/afinity_manager_enable_t.end.hpp"
SDK_VERIFY( struct heap::afinity_manager_enable_t, 0x2c );
