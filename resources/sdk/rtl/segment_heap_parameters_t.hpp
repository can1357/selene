#pragma once
#include <sdkgen/support_library.hpp>
#include "segment_heap_memory_source_t.hpp"

#include "magic/segment_heap_parameters_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SEGMENT_HEAP_PARAMETERS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct segment_heap_parameters_t                                
    {                                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                          
        _m00 uint16_t                                 version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                                 size;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 uint32_t                                 flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 struct rtl::segment_heap_memory_source_t memory_source;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MemorySource
                                                                    
        SDK_NONVOL_PROPERTIES( "_RTL_SEGMENT_HEAP_PARAMETERS.$", 0x50, true, 0x57b4f5741e3bf00d );              
        SDK_FIXED_SIZE( segment_heap_parameters_t, 0x50 );              
    };                                                              
};
#include "magic/segment_heap_parameters_t.end.hpp"
SDK_VERIFY( struct rtl::segment_heap_parameters_t, 0x50 );
