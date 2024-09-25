#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stream_id_information_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_STREAM_ID_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stream_id_information_t     
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint8_t stream_identifier;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamIdentifier
                                       
        SDK_NONVOL_PROPERTIES( "_CLFS_STREAM_ID_INFORMATION.$", 0x1, true, 0xdce1e6183b1bb76f );                  
        SDK_FIXED_SIZE( stream_id_information_t, 0x1 );                  
    };                                 
};
#include "magic/stream_id_information_t.end.hpp"
SDK_VERIFY( struct clfs::stream_id_information_t, 0x1 );
