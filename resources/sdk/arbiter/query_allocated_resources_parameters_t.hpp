#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct partial_resource_list_t; }

#include "magic/query_allocated_resources_parameters_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_allocated_resources_parameters_t                     
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 struct cm::partial_resource_list_t** allocated_resources;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedResources
                                                                      
        SDK_NONVOL_PROPERTIES( "_ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS.$", 0x8, true, 0x8c1dd8695ea0b107 );                    
        SDK_FIXED_SIZE( query_allocated_resources_parameters_t, 0x8 );                    
    };                                                                
};
#include "magic/query_allocated_resources_parameters_t.end.hpp"
SDK_VERIFY( struct arbiter::query_allocated_resources_parameters_t, 0x8 );
