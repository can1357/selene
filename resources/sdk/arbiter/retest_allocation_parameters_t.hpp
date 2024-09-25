#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct partial_resource_descriptor_t; }

#include "magic/retest_allocation_parameters_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_RETEST_ALLOCATION_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct retest_allocation_parameters_t                                  
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                 
        _m00 nt::list_entry_t*                         arbitration_list;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ArbitrationList
        _m01 uint32_t                                  allocate_from_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocateFromCount
        _m02 struct cm::partial_resource_descriptor_t* allocate_from;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocateFrom
                                                                           
        SDK_NONVOL_PROPERTIES( "_ARBITER_RETEST_ALLOCATION_PARAMETERS.$", 0x18, true, 0xfa52d233df1e73c3 );                    
        SDK_FIXED_SIZE( retest_allocation_parameters_t, 0x18 );                    
    };                                                                     
};
#include "magic/retest_allocation_parameters_t.end.hpp"
SDK_VERIFY( struct arbiter::retest_allocation_parameters_t, 0x18 );
