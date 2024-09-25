#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/stream_information_t.hpp"

#include "magic/stream_information_entry_t.start.hpp"
namespace win
{
    // [struct _STREAM_INFORMATION_ENTRY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stream_information_entry_t                          
    {                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 uint32_t                       version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                       flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                                               
        // WDK 10                                              
        //                                                     
        _m02 union nt::stream_information_t stream_information;  //{ +0x0008    } | .StreamInformation
                                                               
        SDK_NONVOL_PROPERTIES( "_STREAM_INFORMATION_ENTRY.$", 0x18, true, 0x263912a369dcb03e );                   
        SDK_FIXED_SIZE( stream_information_entry_t, 0x18 );                   
    };                                                         
};
#include "magic/stream_information_entry_t.end.hpp"
SDK_VERIFY( struct win::stream_information_entry_t, 0x18 );
