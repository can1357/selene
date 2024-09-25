#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_counter_resource_descriptor_type_t.hpp"
#include "physical_counter_event_buffer_configuration_t.hpp"

#include "magic/physical_counter_resource_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_counter_resource_descriptor_t                                      
    {                                                                                  
        struct u0_range_t                                                              
        {                                                                              
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                         
            _m03 uint32_t begin;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Begin
            _m04 uint32_t end;                                                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .End
                                                                                       
            SDK_NONVOL_PROPERTIES( "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.Range.$", 0x8, true, 0x8c7801eab0c72605 );                                 
            SDK_FIXED_SIZE( u0_range_t, 0x8 );                                         
        };                                                                             
                                                                                       
        using physical_counter_resource_descriptor_type_t =   enum nt::physical_counter_resource_descriptor_type_t;                           
        using physical_counter_event_buffer_configuration_t = struct nt::physical_counter_event_buffer_configuration_t;                           
                                                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                             
        _m00 physical_counter_resource_descriptor_type_t    type;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                                       flags;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                       counter_index;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CounterIndex
        _m05 u0_range_t                                     range;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Range
                                                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                             
        _m06 sdk::function<void(uint64_t, void*)>*          overflow_handler;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OverflowHandler
        _m07 physical_counter_event_buffer_configuration_t  event_buffer_configuration;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventBufferConfiguration
                                                                                       
        // Windows 11                                                                  
        //                                                                             
        _m08 uint32_t                                       identification_tag;          //{ +0x0008    } | .IdentificationTag
                                                                                       
        // Windows 10 v1607                                                            
        //                                                                             
        _m09 uint32_t                                       extended_register_address;   //{ +0x0008    } | .ExtendedRegisterAddress
                                                                                       
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.$", 0x18, true, 0xa7be6a1499ecaa5e );                           
        SDK_DYNAMIC_SIZE( physical_counter_resource_descriptor_t );                           
    };                                                                                 
};
#include "magic/physical_counter_resource_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::physical_counter_resource_descriptor_t::u0_range_t, 0x8 );
