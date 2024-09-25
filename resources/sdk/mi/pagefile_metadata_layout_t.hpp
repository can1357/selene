#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pagefile_metadata_layout_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGEFILE_METADATA_LAYOUT]
    // => Windows 11
    //
    struct pagefile_metadata_layout_t   
    {                                   
        // Windows 11                   
        //                              
        _m00 uint32_t entry_in_bytes;     //{ +0x0000    } | .EntryInBytes
        _m01 uint32_t owning_pte_offset;  //{ +0x0004    } | .OwningPteOffset
                                        
        SDK_MAGIC_PROPERTIES( "_MI_PAGEFILE_METADATA_LAYOUT.$", 0x0, false, 0x43796315bb66564a );                  
        SDK_FIXED_SIZE( pagefile_metadata_layout_t, 0x8 );                  
    };                                  
};
#include "magic/pagefile_metadata_layout_t.end.hpp"
SDK_VERIFY( struct mi::pagefile_metadata_layout_t, 0x8 );
