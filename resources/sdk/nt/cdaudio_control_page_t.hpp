#pragma once
#include <sdkgen/support_library.hpp>
#include "cdda_output_port_t.hpp"

#include "magic/cdaudio_control_page_t.start.hpp"
namespace nt
{
    // [struct _CDAUDIO_CONTROL_PAGE]
    // => WDK 10 (NV)
    //
    struct cdaudio_control_page_t                                                
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint6_t                                      page_code;               //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                                      ps_bit;                  //{ +0x0000@7  } | .PSBit
        _m02 uint8_t                                      page_length;             //{ +0x0001    } | .PageLength
        _m03 uint1_t                                      stop_on_track_crossing;  //{ +0x0002@1  } | .StopOnTrackCrossing
        _m04 uint1_t                                      immediate;               //{ +0x0002@2  } | .Immediate
        _m05 sdk::array<uint8_t, 2>                       obsolete;                //{ +0x0006    } | .Obsolete
        _m06 sdk::array<struct nt::cdda_output_port_t, 4> cdda_output_ports;       //{ +0x0008    } | .CDDAOutputPorts
                                                                                 
        SDK_NONVOL_PROPERTIES( "_CDAUDIO_CONTROL_PAGE.$", 0x0, false, 0x3eb2b5bd0cc94b32 );                       
        SDK_FIXED_SIZE( cdaudio_control_page_t, 0x10 );                          
    };                                                                           
};
#include "magic/cdaudio_control_page_t.end.hpp"
SDK_VERIFY( struct nt::cdaudio_control_page_t, 0x10 );
