#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/channel_bindings_t.start.hpp"
namespace sec
{
    // [struct _SEC_CHANNEL_BINDINGS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct channel_bindings_t                    
    {                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t dw_initiator_addr_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwInitiatorAddrType
        _m01 uint32_t cb_initiator_length;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbInitiatorLength
        _m02 uint32_t dw_initiator_offset;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwInitiatorOffset
        _m03 uint32_t dw_acceptor_addr_type;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwAcceptorAddrType
        _m04 uint32_t cb_acceptor_length;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbAcceptorLength
        _m05 uint32_t dw_acceptor_offset;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwAcceptorOffset
        _m06 uint32_t cb_application_data_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbApplicationDataLength
        _m07 uint32_t dw_application_data_offset;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwApplicationDataOffset
                                                 
        SDK_NONVOL_PROPERTIES( "_SEC_CHANNEL_BINDINGS.$", 0x20, true, 0xa1a3830937c70893 );                           
        SDK_FIXED_SIZE( channel_bindings_t, 0x20 );                           
    };                                           
};
#include "magic/channel_bindings_t.end.hpp"
SDK_VERIFY( struct sec::channel_bindings_t, 0x20 );
