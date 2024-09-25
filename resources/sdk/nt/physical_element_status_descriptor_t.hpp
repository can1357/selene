#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_element_status_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_ELEMENT_STATUS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct physical_element_status_descriptor_t
    {                                          
        // WDK 10                             
        //                                    
        _m00 uint32_t version;                   //{ +0x0000    } | .Version
        _m01 uint32_t size;                      //{ +0x0004    } | .Size
        _m02 uint32_t element_identifier;        //{ +0x0008    } | .ElementIdentifier
        _m03 uint8_t  physical_element_type;     //{ +0x000c    } | .PhysicalElementType
        _m04 uint8_t  physical_element_health;   //{ +0x000d    } | .PhysicalElementHealth
        _m05 uint64_t associated_capacity;       //{ +0x0010    } | .AssociatedCapacity
                                               
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.$", 0x0, false, 0xae0c83ec6469c308 );                        
        SDK_FIXED_SIZE( physical_element_status_descriptor_t, 0x28 );                        
    };                                         
};
#include "magic/physical_element_status_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::physical_element_status_descriptor_t, 0x28 );
