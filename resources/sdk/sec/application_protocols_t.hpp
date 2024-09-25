#pragma once
#include <sdkgen/support_library.hpp>
#include "application_protocol_list_t.hpp"

#include "magic/application_protocols_t.start.hpp"
namespace sec
{
    // [struct _SEC_APPLICATION_PROTOCOLS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct application_protocols_t                 
    {                                              
        using protocol_lists_t = sdk::array<struct sec::application_protocol_list_t, 1>;                    
                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 uint32_t          protocol_lists_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProtocolListsSize
        _m01 protocol_lists_t  protocol_lists;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProtocolLists
                                                   
        SDK_NONVOL_PROPERTIES( "_SEC_APPLICATION_PROTOCOLS.$", 0xc, true, 0xf5cacaabb904a0d5 );                    
        SDK_FIXED_SIZE( application_protocols_t, 0xc );                    
    };                                             
};
#include "magic/application_protocols_t.end.hpp"
SDK_VERIFY( struct sec::application_protocols_t, 0xc );
