#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_output_t.start.hpp"
namespace nt
{
    // [struct _PORT_OUTPUT]
    // => WDK 10 (NV)
    //
    struct port_output_t               
    {                                  
        // WDK 10                      
        //                             
        _m00 uint8_t channel_selection;  //{ +0x0000    } | .ChannelSelection
        _m01 uint8_t volume;             //{ +0x0001    } | .Volume
                                       
        SDK_NONVOL_PROPERTIES( "_PORT_OUTPUT.$", 0x0, false, 0xb23a7853aebde257 );                  
        SDK_FIXED_SIZE( port_output_t, 0x2 );                  
    };                                 
};
#include "magic/port_output_t.end.hpp"
SDK_VERIFY( struct nt::port_output_t, 0x2 );
