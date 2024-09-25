#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ksfilter_descriptor_t.start.hpp"
namespace ndis
{
    struct kscomponentid_t;
    struct ksfilter_dispatch_t;
    struct ksnode_descriptor_t;
    struct ksautomation_table_t;
    struct kspin_descriptor_ex_t;
    struct kstopology_connection_t;

    // [struct _KSFILTER_DESCRIPTOR]
    // => Windows 10 v1607
    //
    struct ksfilter_descriptor_t                                                
    {                                                                           
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 const struct ndis::ksfilter_dispatch_t*     dispatch;                //{ +0x0000    } | .Dispatch
        _m01 const struct ndis::ksautomation_table_t*    automation_table;        //{ +0x0008    } | .AutomationTable
        _m02 uint32_t                                    version;                 //{ +0x0010    } | .Version
        _m03 uint32_t                                    flags;                   //{ +0x0014    } | .Flags
        _m04 const struct nt::guid_t*                    reference_guid;          //{ +0x0018    } | .ReferenceGuid
        _m05 uint32_t                                    pin_descriptors_count;   //{ +0x0020    } | .PinDescriptorsCount
        _m06 uint32_t                                    pin_descriptor_size;     //{ +0x0024    } | .PinDescriptorSize
        _m07 const struct ndis::kspin_descriptor_ex_t*   pin_descriptors;         //{ +0x0028    } | .PinDescriptors
        _m08 uint32_t                                    categories_count;        //{ +0x0030    } | .CategoriesCount
        _m09 const struct nt::guid_t*                    categories;              //{ +0x0038    } | .Categories
        _m10 uint32_t                                    node_descriptors_count;  //{ +0x0040    } | .NodeDescriptorsCount
        _m11 uint32_t                                    node_descriptor_size;    //{ +0x0044    } | .NodeDescriptorSize
        _m12 const struct ndis::ksnode_descriptor_t*     node_descriptors;        //{ +0x0048    } | .NodeDescriptors
        _m13 uint32_t                                    connections_count;       //{ +0x0050    } | .ConnectionsCount
        _m14 const struct ndis::kstopology_connection_t* connections;             //{ +0x0058    } | .Connections
        _m15 const struct ndis::kscomponentid_t*         component_id;            //{ +0x0060    } | .ComponentId
                                                                                
        SDK_MAGIC_PROPERTIES( "_KSFILTER_DESCRIPTOR.$", 0x0, false, 0x61d8c13d1bcac75c );                       
        SDK_FIXED_SIZE( ksfilter_descriptor_t, 0x68 );                          
    };                                                                          
};
#include "magic/ksfilter_descriptor_t.end.hpp"
SDK_VERIFY( struct ndis::ksfilter_descriptor_t, 0x68 );
