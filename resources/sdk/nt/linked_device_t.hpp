#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/linked_device_t.start.hpp"
namespace nt
{
    // [struct _LINKED_DEVICE]
    // => WDK 10 (NV)
    //
    struct linked_device_t                     
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t chain_uid;                 //{ +0x0000    } | .ChainUid
        _m01 uint32_t number_of_links_in_chain;  //{ +0x0004    } | .NumberOfLinksInChain
        _m02 uint8_t  lead_link;                 //{ +0x0008    } | .LeadLink
                                               
        SDK_NONVOL_PROPERTIES( "_LINKED_DEVICE.$", 0x0, false, 0x43bc7f87878644ea );                         
        SDK_FIXED_SIZE( linked_device_t, 0xc );                         
    };                                         
};
#include "magic/linked_device_t.end.hpp"
SDK_VERIFY( struct nt::linked_device_t, 0xc );
