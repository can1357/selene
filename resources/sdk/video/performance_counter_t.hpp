#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/performance_counter_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PERFORMANCE_COUNTER]
    // => WDK 10 (NV)
    //
    struct performance_counter_t                                
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 sdk::array<uint64_t, 10> nb_of_allocation_evicted;   //{ +0x0000    } | .NbOfAllocationEvicted
        _m01 sdk::array<uint64_t, 10> nb_of_allocation_marked;    //{ +0x0050    } | .NbOfAllocationMarked
        _m02 sdk::array<uint64_t, 10> nb_of_allocation_restored;  //{ +0x00a0    } | .NbOfAllocationRestored
        _m03 sdk::array<uint64_t, 10> k_bytes_evicted;            //{ +0x00f0    } | .KBytesEvicted
        _m04 sdk::array<uint64_t, 10> k_bytes_marked;             //{ +0x0140    } | .KBytesMarked
        _m05 sdk::array<uint64_t, 10> k_bytes_restored;           //{ +0x0190    } | .KBytesRestored
        _m06 uint64_t                 nb_process_commited;        //{ +0x01e0    } | .NbProcessCommited
        _m07 uint64_t                 nb_allocation_commited;     //{ +0x01e8    } | .NbAllocationCommited
        _m08 uint64_t                 nb_allocation_marked;       //{ +0x01f0    } | .NbAllocationMarked
        _m09 uint64_t                 k_bytes_allocated;          //{ +0x01f8    } | .KBytesAllocated
        _m10 uint64_t                 k_bytes_available;          //{ +0x0200    } | .KBytesAvailable
        _m11 uint64_t                 k_bytes_cur_marked;         //{ +0x0208    } | .KBytesCurMarked
        _m12 uint64_t                 reference;                  //{ +0x0210    } | .Reference
        _m13 uint64_t                 unreference;                //{ +0x0218    } | .Unreference
        _m14 uint64_t                 true_reference;             //{ +0x0220    } | .TrueReference
        _m15 uint64_t                 nb_of_page_in;              //{ +0x0228    } | .NbOfPageIn
        _m16 uint64_t                 k_bytes_page_in;            //{ +0x0230    } | .KBytesPageIn
        _m17 uint64_t                 nb_of_page_out;             //{ +0x0238    } | .NbOfPageOut
        _m18 uint64_t                 k_bytes_page_out;           //{ +0x0240    } | .KBytesPageOut
        _m19 uint64_t                 nb_of_rotate_out;           //{ +0x0248    } | .NbOfRotateOut
        _m20 uint64_t                 k_bytes_rotate_out;         //{ +0x0250    } | .KBytesRotateOut
                                                                
        SDK_NONVOL_PROPERTIES( "_VIDEO_PERFORMANCE_COUNTER.$", 0x0, false, 0x146514f2c10f28db );                          
        SDK_FIXED_SIZE( performance_counter_t, 0x258 );                          
    };                                                          
};
#include "magic/performance_counter_t.end.hpp"
SDK_VERIFY( struct video::performance_counter_t, 0x258 );
