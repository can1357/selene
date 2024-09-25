#pragma once
#include <sdkgen/support_library.hpp>
#include "driverescapetype_t.hpp"

#include "magic/driverescape_translateallocationehandle_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_DRIVERESCAPE_TRANSLATEALLOCATIONEHANDLE]
    // => WDK 10 (NV)
    //
    struct driverescape_translateallocationehandle_t        
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 enum d3d::ddi::driverescapetype_t escape_type;   //{ +0x0000    } | .EscapeType
        _m01 uint32_t                          h_allocation;  //{ +0x0004    } | .hAllocation
                                                            
        SDK_NONVOL_PROPERTIES( "_D3DDDI_DRIVERESCAPE_TRANSLATEALLOCATIONEHANDLE.$", 0x0, false, 0xf8a25737fc11bc98 );             
        SDK_FIXED_SIZE( driverescape_translateallocationehandle_t, 0x8 );             
    };                                                      
};
#include "magic/driverescape_translateallocationehandle_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::driverescape_translateallocationehandle_t, 0x8 );
