#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_physical_node_data_t.hpp"

#include "magic/storage_physical_topology_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_physical_topology_descriptor_t
    {                                            
        using node_t = sdk::array<struct nt::storage_physical_node_data_t, 1>;           
                                                 
        // WDK 10                
        //                       
        _m00 uint32_t version;                     //{ +0x0000    } | .Version
        _m01 uint32_t size;                        //{ +0x0004    } | .Size
        _m02 uint32_t node_count;                  //{ +0x0008    } | .NodeCount
        _m03 node_t   node;                        //{ +0x0010    } | .Node
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR.$", 0x0, false, 0xfcfc919022087972 );           
        SDK_FIXED_SIZE( storage_physical_topology_descriptor_t, 0x38 );           
    };                                           
};
#include "magic/storage_physical_topology_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_physical_topology_descriptor_t, 0x38 );
