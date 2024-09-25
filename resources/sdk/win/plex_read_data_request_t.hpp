#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plex_read_data_request_t.start.hpp"
namespace win
{
    // [struct _PLEX_READ_DATA_REQUEST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct plex_read_data_request_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 int64_t  byte_offset;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ByteOffset
        _m01 uint32_t byte_length;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ByteLength
        _m02 uint32_t plex_number;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PlexNumber
                                   
        SDK_NONVOL_PROPERTIES( "_PLEX_READ_DATA_REQUEST.$", 0x10, true, 0x72855d995fba3095 );            
        SDK_FIXED_SIZE( plex_read_data_request_t, 0x10 );            
    };                             
};
#include "magic/plex_read_data_request_t.end.hpp"
SDK_VERIFY( struct win::plex_read_data_request_t, 0x10 );
