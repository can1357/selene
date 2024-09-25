#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_element_status_data_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct physical_element_status_data_descriptor_t        
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 sdk::array<uint8_t, 4> element_identifier;       //{ +0x0004    } | .ElementIdentifier
        _m01 uint8_t                physical_element_type;    //{ +0x000e    } | .PhysicalElementType
        _m02 uint8_t                physical_element_health;  //{ +0x000f    } | .PhysicalElementHealth
        _m03 sdk::array<uint8_t, 8> associated_capacity;      //{ +0x0010    } | .AssociatedCapacity
                                                            
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR.$", 0x0, false, 0x679701cf80d53205 );                        
        SDK_FIXED_SIZE( physical_element_status_data_descriptor_t, 0x20 );                        
    };                                                      
};
#include "magic/physical_element_status_data_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::physical_element_status_data_descriptor_t, 0x20 );
