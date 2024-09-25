#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_lb_provisioning_map_resources_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_LB_PROVISIONING_MAP_RESOURCES]
    // => WDK 10 (NV)
    //
    struct storage_lb_provisioning_map_resources_t      
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t size;                               //{ +0x0000    } | .Size
        _m01 uint32_t version;                            //{ +0x0004    } | .Version
        _m02 uint1_t  available_mapping_resources_valid;  //{ +0x0008@0  } | .AvailableMappingResourcesValid
        _m03 uint1_t  used_mapping_resources_valid;       //{ +0x0008@1  } | .UsedMappingResourcesValid
        _m04 uint2_t  available_mapping_resources_scope;  //{ +0x000c@0  } | .AvailableMappingResourcesScope
        _m05 uint2_t  used_mapping_resources_scope;       //{ +0x000c@2  } | .UsedMappingResourcesScope
        _m06 uint64_t available_mapping_resources;        //{ +0x0010    } | .AvailableMappingResources
        _m07 uint64_t used_mapping_resources;             //{ +0x0018    } | .UsedMappingResources
                                                        
        SDK_NONVOL_PROPERTIES( "_STORAGE_LB_PROVISIONING_MAP_RESOURCES.$", 0x0, false, 0xd66e16a630d5c526 );                                  
        SDK_FIXED_SIZE( storage_lb_provisioning_map_resources_t, 0x20 );                                  
    };                                                  
};
#include "magic/storage_lb_provisioning_map_resources_t.end.hpp"
SDK_VERIFY( struct nt::storage_lb_provisioning_map_resources_t, 0x20 );
