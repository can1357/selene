#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_mirroring_data_t.start.hpp"
namespace nt
{
    struct loader_memory_range_t;

    // [struct _MEMORY_MIRRORING_DATA]
    // => Windows 11
    //
    struct memory_mirroring_data_t                                  
    {                                                               
        // Windows 11                                               
        //                                                          
        _m00 uint32_t                          memory_range_count;    //{ +0x0000    } | .MemoryRangeCount
        _m01 uint32_t                          io_space_range_count;  //{ +0x0004    } | .IoSpaceRangeCount
        _m02 struct nt::loader_memory_range_t* memory_ranges;         //{ +0x0008    } | .MemoryRanges
        _m03 struct nt::loader_memory_range_t* io_space_ranges;       //{ +0x0010    } | .IoSpaceRanges
                                                                    
        SDK_MAGIC_PROPERTIES( "_MEMORY_MIRRORING_DATA.$", 0x0, false, 0x217911562e1b22b );                     
        SDK_FIXED_SIZE( memory_mirroring_data_t, 0x18 );                     
    };                                                              
};
#include "magic/memory_mirroring_data_t.end.hpp"
SDK_VERIFY( struct nt::memory_mirroring_data_t, 0x18 );
