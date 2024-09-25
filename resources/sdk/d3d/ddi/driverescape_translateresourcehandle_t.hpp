#pragma once
#include <sdkgen/support_library.hpp>
#include "driverescapetype_t.hpp"

#include "magic/driverescape_translateresourcehandle_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_DRIVERESCAPE_TRANSLATERESOURCEHANDLE]
    // => WDK 10 (NV)
    //
    struct driverescape_translateresourcehandle_t          
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 enum d3d::ddi::driverescapetype_t escape_type;  //{ +0x0000    } | .EscapeType
        _m01 uint32_t                          h_resource;   //{ +0x0004    } | .hResource
                                                           
        SDK_NONVOL_PROPERTIES( "_D3DDDI_DRIVERESCAPE_TRANSLATERESOURCEHANDLE.$", 0x0, false, 0x174b1e9058c40361 );            
        SDK_FIXED_SIZE( driverescape_translateresourcehandle_t, 0x8 );            
    };                                                     
};
#include "magic/driverescape_translateresourcehandle_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::driverescape_translateresourcehandle_t, 0x8 );
