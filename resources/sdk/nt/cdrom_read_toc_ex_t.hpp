#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_read_toc_ex_t.start.hpp"
namespace nt
{
    // [struct _CDROM_READ_TOC_EX]
    // => WDK 10 (NV)
    //
    struct cdrom_read_toc_ex_t     
    {                              
        // WDK 10                  
        //                         
        _m00 uint4_t format;         //{ +0x0000@0  } | .Format
        _m01 uint1_t msf;            //{ +0x0000@7  } | .Msf
        _m02 uint8_t session_track;  //{ +0x0001    } | .SessionTrack
                                   
        SDK_NONVOL_PROPERTIES( "_CDROM_READ_TOC_EX.$", 0x0, false, 0x8773ac62956c711d );              
        SDK_FIXED_SIZE( cdrom_read_toc_ex_t, 0x4 );              
    };                             
};
#include "magic/cdrom_read_toc_ex_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_read_toc_ex_t, 0x4 );
