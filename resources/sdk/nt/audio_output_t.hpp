#pragma once
#include <sdkgen/support_library.hpp>
#include "port_output_t.hpp"

#include "magic/audio_output_t.start.hpp"
namespace nt
{
    // [struct _AUDIO_OUTPUT]
    // => WDK 10 (NV)
    //
    struct audio_output_t                                                      
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint8_t                                 code_page;                  //{ +0x0000    } | .CodePage
        _m01 uint8_t                                 parameter_length;           //{ +0x0001    } | .ParameterLength
        _m02 uint8_t                                 immediate;                  //{ +0x0002    } | .Immediate
        _m03 uint8_t                                 lba_format;                 //{ +0x0005    } | .LbaFormat
        _m04 sdk::array<uint8_t, 2>                  logical_blocks_per_second;  //{ +0x0006    } | .LogicalBlocksPerSecond
        _m05 sdk::array<struct nt::port_output_t, 4> port_output;                //{ +0x0008    } | .PortOutput
                                                                               
        SDK_NONVOL_PROPERTIES( "_AUDIO_OUTPUT.$", 0x0, false, 0xf3ca20ec145457cd );                          
        SDK_FIXED_SIZE( audio_output_t, 0x10 );                                
    };                                                                         
};
#include "magic/audio_output_t.end.hpp"
SDK_VERIFY( struct nt::audio_output_t, 0x10 );
