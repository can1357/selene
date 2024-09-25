#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/barrier_t.start.hpp"
namespace rtl
{
    // [struct _RTL_BARRIER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct barrier_t                                               
    {                                                              
        struct u0_dummyreservedstructname_t                        
        {                                                          
                                                                   
            SDK_MAGIC_PROPERTIES( "_RTL_BARRIER.DUMMYRESERVEDSTRUCTNAME.$", 0x20, true, 0x2527e9793607bb75 );                        
            SDK_FIXED_SIZE( u0_dummyreservedstructname_t, 0x20 );                        
        };                                                         
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                         
        _m00 volatile int32_t              barrier;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Barrier
        _m01 int32_t                       left_barrier;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LeftBarrier
        _m02 sdk::array<void*, 2>          wait_event;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitEvent
        _m03 int32_t                       total_processors;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalProcessors
        _m04 uint32_t                      spins;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Spins
        _m05 u0_dummyreservedstructname_t  dummyreservedstructname;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DUMMYRESERVEDSTRUCTNAME
                                                                   
        SDK_NONVOL_PROPERTIES( "_RTL_BARRIER.$", 0x20, true, 0x6d505c4bbd157654 );                        
        SDK_FIXED_SIZE( barrier_t, 0x20 );                         
    };                                                             
};
#include "magic/barrier_t.end.hpp"
SDK_VERIFY( struct rtl::barrier_t::u0_dummyreservedstructname_t, 0x20 );
SDK_VERIFY( struct rtl::barrier_t, 0x20 );
