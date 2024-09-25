#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/ktimer_t.start.hpp"
namespace nt
{
    struct kdpc_t;

    // [struct _KTIMER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ktimer_t                                          
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct nt::dispatcher_header_t header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                       due_time;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DueTime
        _m02 nt::list_entry_t               timer_list_entry;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TimerListEntry
        _m03 struct nt::kdpc_t*             dpc;               //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Dpc
        _m04 varuint_t                      processor;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Processor
        _m05 uint32_t                       period;            //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .Period
                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m06 uint16_t                       timer_type;        //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .TimerType
                                                             
        SDK_NONVOL_PROPERTIES( "_KTIMER.$", 0x40, true, 0x60676d8e2a35ffc2 );                 
        SDK_FIXED_SIZE( ktimer_t, 0x40 );                    
    };                                                       
};
#include "magic/ktimer_t.end.hpp"
SDK_VERIFY( struct nt::ktimer_t, 0x40 );
