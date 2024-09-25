#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_seek_audio_msf_t.start.hpp"
namespace nt
{
    // [struct _CDROM_SEEK_AUDIO_MSF]
    // => WDK 10 (NV)
    //
    struct cdrom_seek_audio_msf_t
    {                            
        // WDK 10      
        //             
        _m00 uint8_t m;            //{ +0x0000    } | .M
        _m01 uint8_t s;            //{ +0x0001    } | .S
        _m02 uint8_t f;            //{ +0x0002    } | .F
                                 
        SDK_NONVOL_PROPERTIES( "_CDROM_SEEK_AUDIO_MSF.$", 0x0, false, 0x589c3c13b241ee31 );  
        SDK_FIXED_SIZE( cdrom_seek_audio_msf_t, 0x3 );  
    };                           
};
#include "magic/cdrom_seek_audio_msf_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_seek_audio_msf_t, 0x3 );
