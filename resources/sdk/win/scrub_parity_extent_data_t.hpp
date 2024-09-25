#pragma once
#include <sdkgen/support_library.hpp>
#include "scrub_parity_extent_t.hpp"

#include "magic/scrub_parity_extent_data_t.start.hpp"
namespace win
{
    // [struct _SCRUB_PARITY_EXTENT_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scrub_parity_extent_data_t                                                          
    {                                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                     
        _m00 uint16_t                                         size;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                         flags;                             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 uint16_t                                         number_of_parity_extents;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfParityExtents
        _m03 uint16_t                                         maximum_number_of_parity_extents;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .MaximumNumberOfParityExtents
        _m04 sdk::array<struct win::scrub_parity_extent_t, 1> parity_extents;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ParityExtents
                                                                                               
        SDK_NONVOL_PROPERTIES( "_SCRUB_PARITY_EXTENT_DATA.$", 0x18, true, 0x1dc2ac6ae9cb98f0 );                                 
        SDK_FIXED_SIZE( scrub_parity_extent_data_t, 0x18 );                                    
    };                                                                                         
};
#include "magic/scrub_parity_extent_data_t.end.hpp"
SDK_VERIFY( struct win::scrub_parity_extent_data_t, 0x18 );
