#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segment_heap_extra_t.start.hpp"
namespace ntdll
{
    // [struct _SEGMENT_HEAP_EXTRA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_heap_extra_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint16_t allocation_tag;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationTag
        _m01 uint4_t  interceptor_index;    //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .InterceptorIndex
        _m02 uint4_t  user_flags;           //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .UserFlags
        _m03 uint8_t  extra_size_in_units;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .ExtraSizeInUnits
        _m04 void*    settable;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Settable
                                          
        SDK_MAGIC_PROPERTIES( "_SEGMENT_HEAP_EXTRA.$", 0x10, true, 0x4e3fe987445281a7 );                    
        SDK_FIXED_SIZE( segment_heap_extra_t, 0x10 );                    
    };                                    
};
#include "magic/segment_heap_extra_t.end.hpp"
SDK_VERIFY( struct ntdll::segment_heap_extra_t, 0x10 );
