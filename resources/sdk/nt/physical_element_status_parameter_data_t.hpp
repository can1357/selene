#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_element_status_data_descriptor_t.hpp"

#include "magic/physical_element_status_parameter_data_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA]
    // => WDK 10 (NV)
    //
    struct physical_element_status_parameter_data_t                  
    {                                                                
        using descriptors_t = sdk::array<struct nt::physical_element_status_data_descriptor_t, 1>;                                 
                                                                     
        // WDK 10                                                    
        //                                                           
        _m00 sdk::array<uint8_t, 4> descriptor_count;                  //{ +0x0000    } | .DescriptorCount
        _m01 sdk::array<uint8_t, 4> returned_descriptor_count;         //{ +0x0004    } | .ReturnedDescriptorCount
        _m02 sdk::array<uint8_t, 4> element_identifier_being_depoped;  //{ +0x0008    } | .ElementIdentifierBeingDepoped
        _m03 descriptors_t          descriptors;                       //{ +0x0020    } | .Descriptors
                                                                     
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA.$", 0x0, false, 0x3233f4feeaa4405b );                                 
        SDK_FIXED_SIZE( physical_element_status_parameter_data_t, 0x40 );                                 
    };                                                               
};
#include "magic/physical_element_status_parameter_data_t.end.hpp"
SDK_VERIFY( struct nt::physical_element_status_parameter_data_t, 0x40 );
