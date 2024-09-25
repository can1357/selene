#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_cache_view_attributes_t.start.hpp"
namespace mi
{
    // [struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_cache_view_attributes_t
    {                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                            
        _m00 uint6_t   number_of_ptes;     //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .NumberOfPtes
        _m01 uint10_t  partition_id;       //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .PartitionId
        _m02 varuint_t section_offset;     //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .SectionOffset
                                         
        // Windows 11                 
        //                            
        _m03 uint2_t   view_state;         //{ +0x0000@62 } | .ViewState
                                         
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_CACHE_VIEW_ATTRIBUTES.$", 0x8, true, 0x4e666744efc403ec );               
        SDK_FIXED_SIZE( system_cache_view_attributes_t, 0x8 );               
    };                                   
};
#include "magic/system_cache_view_attributes_t.end.hpp"
SDK_VERIFY( struct mi::system_cache_view_attributes_t, 0x8 );
