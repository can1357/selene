#pragma once
#include <sdkgen/support_library.hpp>
#include "mmpte_list_t.hpp"
#include "hardware_pte_t.hpp"
#include "mmpte_hardware_t.hpp"
#include "mmpte_software_t.hpp"
#include "mmpte_prototype_t.hpp"
#include "mmpte_timestamp_t.hpp"
#include "mmpte_subsection_t.hpp"
#include "mmpte_transition_t.hpp"

#include "magic/mmpte_t.start.hpp"
namespace nt
{
    // [struct _MMPTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_t                                       
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                               
        _m00 uint64_t                      _long;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Long
        _m01 volatile uint64_t             volatile_long;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VolatileLong
        _m02 struct nt::mmpte_hardware_t   hard;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hard
        _m03 struct nt::mmpte_prototype_t  proto;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Proto
        _m04 struct nt::mmpte_software_t   soft;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Soft
        _m05 struct nt::mmpte_timestamp_t  time_stamp;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeStamp
        _m06 struct nt::mmpte_transition_t trans;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Trans
        _m07 struct nt::mmpte_subsection_t subsect;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Subsect
        _m08 struct nt::mmpte_list_t       list;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
                                                         
        // Windows 10 v1607                              
        //                                               
        _m09 struct nt::hardware_pte_t     flush;          //{ +0x0000    } | .Flush
                                                         
        SDK_MAGIC_PROPERTIES( "_MMPTE.$", 0x8, true, 0xa966169af5602d1f );              
        SDK_FIXED_SIZE( mmpte_t, 0x8 );                  
    };                                                   
};
#include "magic/mmpte_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_t, 0x8 );
