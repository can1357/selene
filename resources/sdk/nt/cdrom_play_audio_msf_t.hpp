#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_play_audio_msf_t.start.hpp"
namespace nt
{
    // [struct _CDROM_PLAY_AUDIO_MSF]
    // => WDK 10 (NV)
    //
    struct cdrom_play_audio_msf_t
    {                            
        // WDK 10               
        //                      
        _m00 uint8_t starting_m;   //{ +0x0000    } | .StartingM
        _m01 uint8_t starting_s;   //{ +0x0001    } | .StartingS
        _m02 uint8_t starting_f;   //{ +0x0002    } | .StartingF
        _m03 uint8_t ending_m;     //{ +0x0003    } | .EndingM
        _m04 uint8_t ending_s;     //{ +0x0004    } | .EndingS
        _m05 uint8_t ending_f;     //{ +0x0005    } | .EndingF
                                 
        SDK_NONVOL_PROPERTIES( "_CDROM_PLAY_AUDIO_MSF.$", 0x0, false, 0x6ee1865b27f21a98 );           
        SDK_FIXED_SIZE( cdrom_play_audio_msf_t, 0x6 );           
    };                           
};
#include "magic/cdrom_play_audio_msf_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_play_audio_msf_t, 0x6 );
