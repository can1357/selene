#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdda_output_port_t.start.hpp"
namespace nt
{
    // [struct _CDDA_OUTPUT_PORT]
    // => WDK 10 (NV)
    //
    struct cdda_output_port_t          
    {                                  
        // WDK 10                      
        //                             
        _m00 uint4_t channel_selection;  //{ +0x0000@0  } | .ChannelSelection
        _m01 uint8_t volume;             //{ +0x0001    } | .Volume
                                       
        SDK_NONVOL_PROPERTIES( "_CDDA_OUTPUT_PORT.$", 0x0, false, 0xab55c8fff066f48f );                  
        SDK_FIXED_SIZE( cdda_output_port_t, 0x2 );                  
    };                                 
};
#include "magic/cdda_output_port_t.end.hpp"
SDK_VERIFY( struct nt::cdda_output_port_t, 0x2 );
