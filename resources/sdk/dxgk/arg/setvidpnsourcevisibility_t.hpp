#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvidpnsourcevisibility_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIDPNSOURCEVISIBILITY]
    // => WDK 10 (NV)
    //
    struct setvidpnsourcevisibility_t  
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint8_t  visible;           //{ +0x0004    } | .Visible
                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIDPNSOURCEVISIBILITY.$", 0x0, false, 0xb0d6863d31a9396f );                 
        SDK_FIXED_SIZE( setvidpnsourcevisibility_t, 0x8 );                 
    };                                 
};
#include "magic/setvidpnsourcevisibility_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvidpnsourcevisibility_t, 0x8 );
