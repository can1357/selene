#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/splay_links_t.hpp"

namespace tp { struct timer_t; }
namespace tp { struct work_t;  }

#include "magic/out_parameter_marshaling_server_t.start.hpp"
namespace win
{
    class oxid_entry_t;

    // [class OutParameterMarshalingServer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class out_parameter_marshaling_server_t                                           
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                            
        _m00 class win::oxid_entry_t const* p_oxid_entry;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pOXIDEntry
        _m01 struct rtl::splay_links_t      splay_links;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._splayLinks
        _m02 uint16_t                       c_allocated;                                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._cAllocated
        _m03 uint16_t                       c_sets;                                     //{ +0x0032    +0x0032    +0x0032    +0x0032    } | ._cSets
        _m04 uint64_t*                      p_sets;                                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pSets
        _m05 struct tp::timer_t*            p_timer;                                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pTimer
        _m06 struct tp::work_t*             p_work;                                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pWork
        _m07 bool                           b_already_set_timer_for_current_sets;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._bAlreadySetTimerForCurrentSets
        _m08 bool                           b_already_submitted_work_for_current_sets;  //{ +0x0051    +0x0051    +0x0051    +0x0051    } | ._bAlreadySubmittedWorkForCurrentSets
        _m09 bool                           b_removed_from_table;                       //{ +0x0052    +0x0052    +0x0052    +0x0052    } | ._bRemovedFromTable
                                                                                      
        SDK_MAGIC_PROPERTIES( "OutParameterMarshalingServer.$", 0x58, true, 0x4cbf8a71b31ca8cd );                                          
        SDK_FIXED_SIZE( out_parameter_marshaling_server_t, 0x58 );                                          
    };                                                                                
};
#include "magic/out_parameter_marshaling_server_t.end.hpp"
SDK_VERIFY( class win::out_parameter_marshaling_server_t, 0x58 );
