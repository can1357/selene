#pragma once
#include <sdkgen/support_library.hpp>
#include "add_reserved_parameters_t.hpp"
#include "query_conflict_parameters_t.hpp"
#include "boot_allocation_parameters_t.hpp"
#include "query_arbitrate_parameters_t.hpp"
#include "test_allocation_parameters_t.hpp"
#include "retest_allocation_parameters_t.hpp"
#include "query_allocated_resources_parameters_t.hpp"

#include "magic/parameters_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct parameters_t                                                                              
    {                                                                                                
        union u0_parameters_t                                                                        
        {                                                                                            
            using query_allocated_resources_t = struct arbiter::query_allocated_resources_parameters_t;                                     
                                                                                                     
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                                                       
            _m00 struct arbiter::test_allocation_parameters_t   test_allocation;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TestAllocation
            _m01 struct arbiter::retest_allocation_parameters_t retest_allocation;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RetestAllocation
            _m02 struct arbiter::boot_allocation_parameters_t   boot_allocation;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BootAllocation
            _m03 query_allocated_resources_t                    query_allocated_resources;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryAllocatedResources
            _m04 struct arbiter::query_conflict_parameters_t    query_conflict;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryConflict
            _m05 struct arbiter::query_arbitrate_parameters_t   query_arbitrate;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryArbitrate
            _m06 struct arbiter::add_reserved_parameters_t      add_reserved;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AddReserved
                                                                                                     
            SDK_NONVOL_PROPERTIES( "_ARBITER_PARAMETERS.Parameters.$", 0x20, true, 0xf39ef34227ee0079 );                                     
            SDK_FIXED_SIZE( u0_parameters_t, 0x20 );                                                 
        };                                                                                           
                                                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                                           
        _m07 u0_parameters_t                                                              parameters;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Parameters
                                                                                                     
        SDK_NONVOL_PROPERTIES( "_ARBITER_PARAMETERS.$", 0x20, true, 0xa99cb80a9579017b );            
        SDK_FIXED_SIZE( parameters_t, 0x20 );                                                        
    };                                                                                               
};
#include "magic/parameters_t.end.hpp"
SDK_VERIFY( union arbiter::parameters_t::u0_parameters_t, 0x20 );
SDK_VERIFY( struct arbiter::parameters_t, 0x20 );
