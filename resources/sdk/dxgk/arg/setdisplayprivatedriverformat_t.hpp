#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setdisplayprivatedriverformat_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT]
    // => WDK 10 (NV)
    //
    struct setdisplayprivatedriverformat_t            
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t vid_pn_source_id;                 //{ +0x0000    } | .VidPnSourceId
        _m01 void*    primary_allocation;               //{ +0x0008    } | .PrimaryAllocation
        _m02 uint32_t private_driver_format_attribute;  //{ +0x0010    } | .PrivateDriverFormatAttribute
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT.$", 0x0, false, 0xd33d012294a7284a );                                
        SDK_FIXED_SIZE( setdisplayprivatedriverformat_t, 0x18 );                                
    };                                                
};
#include "magic/setdisplayprivatedriverformat_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setdisplayprivatedriverformat_t, 0x18 );
