#pragma once
#include <sdkgen/support_library.hpp>
#include "application_protocol_negotiation_ext_t.hpp"

#include "magic/application_protocol_list_t.start.hpp"
namespace sec
{
    // [struct _SEC_APPLICATION_PROTOCOL_LIST]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct application_protocol_list_t                                           
    {                                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                       
        _m00 enum sec::application_protocol_negotiation_ext_t proto_nego_ext;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProtoNegoExt
        _m01 uint16_t                                         protocol_list_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProtocolListSize
        _m02 sdk::array<uint8_t, 1>                           protocol_list;       //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ProtocolList
                                                                                 
        SDK_NONVOL_PROPERTIES( "_SEC_APPLICATION_PROTOCOL_LIST.$", 0x8, true, 0x55ce40921c8d70b );                   
        SDK_FIXED_SIZE( application_protocol_list_t, 0x8 );                      
    };                                                                           
};
#include "magic/application_protocol_list_t.end.hpp"
SDK_VERIFY( struct sec::application_protocol_list_t, 0x8 );
