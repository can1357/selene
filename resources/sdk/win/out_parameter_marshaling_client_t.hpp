#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "cached_event_t.hpp"
#include "../rtl/splay_links_t.hpp"

namespace tp { struct wait_t; }

#include "magic/out_parameter_marshaling_client_t.start.hpp"
namespace win
{
    // [class OutParameterMarshalingClient]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class out_parameter_marshaling_client_t                             
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 struct rtl::splay_links_t       splay_links;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._splayLinks
        _m01 const uint32_t                  ul_association_id;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._ulAssociationId
        _m02 const class win::cached_event_t event_client_disconnected;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._eventClientDisconnected
        _m03 struct tp::wait_t*              p_wait;                      //{ +0x0040    +0x0050    +0x0050    +0x0050    } | ._pWait
        _m04 bool                            b_ran_down;                  //{ +0x0050    +0x0060    +0x0060    +0x0060    } | ._bRanDown
        _m05 bool                            b_canceled_wait;             //{ +0x0051    +0x0061    +0x0061    +0x0061    } | ._bCanceledWait
        _m06 bool                            b_added_to_table;            //{ +0x0052    +0x0062    +0x0062    +0x0062    } | ._bAddedToTable
        _m07 bool                            b_removed_from_table;        //{ +0x0053    +0x0063    +0x0063    +0x0063    } | ._bRemovedFromTable
        _m08 nt::list_entry_t                list_marshaling_sets;        //{ +0x0058    +0x0068    +0x0068    +0x0068    } | ._listMarshalingSets
                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m09 const struct nt::guid_t         disconnect_subscription_id;  //{ +0x0040    +0x0040    +0x0040    } | ._disconnectSubscriptionId
                                                                        
        SDK_MAGIC_PROPERTIES( "OutParameterMarshalingClient.$", 0x78, true, 0x61229d0d27b78493 );                           
        SDK_DYNAMIC_SIZE( out_parameter_marshaling_client_t );                           
    };                                                                  
};
#include "magic/out_parameter_marshaling_client_t.end.hpp"
