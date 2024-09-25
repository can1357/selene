#pragma once
#include <sdkgen/support_library.hpp>
#include "group_affinity_t.hpp"
#include "kinterrupt_mode_t.hpp"
#include "kinterrupt_polarity_t.hpp"
#include "interrupt_ht_intr_info_t.hpp"
#include "interrupt_remapping_info_t.hpp"
#include "interrupt_connection_type_t.hpp"
#include "../hal/apic_destination_mode_t.hpp"

#include "magic/interrupt_vector_data_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_VECTOR_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_vector_data_t                                                    
    {                                                                                 
        struct u0_controller_input_t                                                  
        {                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                        
            _m07 uint32_t gsiv;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Gsiv
            _m08 uint1_t  wake_interrupt;                                               //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .WakeInterrupt
                                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_VECTOR_DATA.ControllerInput.$", 0x8, true, 0xea580837fe2044b6 );                                 
            SDK_FIXED_SIZE( u0_controller_input_t, 0x8 );                                 
        };                                                                            
                                                                                      
        struct u4_xapic_message_t                                                     
        {                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                                        
            _m11 int64_t  address;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
            _m12 uint32_t data_payload;                                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataPayload
                                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_VECTOR_DATA.XapicMessage.$", 0x10, true, 0x7da27f3097c9ff84 );                               
            SDK_FIXED_SIZE( u4_xapic_message_t, 0x10 );                               
        };                                                                            
                                                                                      
        struct u8_hypertransport_t                                                    
        {                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                                        
            _m14 struct nt::interrupt_ht_intr_info_t intr_info;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IntrInfo
                                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_VECTOR_DATA.Hypertransport.$", 0x8, true, 0xdde5045b45dcdf6d );                            
            SDK_FIXED_SIZE( u8_hypertransport_t, 0x8 );                               
        };                                                                            
                                                                                      
        struct u12_generic_message_t                                                  
        {                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                                        
            _m16 int64_t  address;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
            _m17 uint32_t data_payload;                                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataPayload
                                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_VECTOR_DATA.GenericMessage.$", 0x10, true, 0xad32d20aca6f3948 );                               
            SDK_FIXED_SIZE( u12_generic_message_t, 0x10 );                               
        };                                                                            
                                                                                      
        struct u12_message_request_t                                                  
        {                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                        
            _m19 enum hal::apic_destination_mode_t destination_mode;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DestinationMode
                                                                                      
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_VECTOR_DATA.MessageRequest.$", 0x4, true, 0x4e39ae74244a918 );                                   
            SDK_FIXED_SIZE( u12_message_request_t, 0x4 );                                   
        };                                                                            
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                            
        _m00 enum nt::interrupt_connection_type_t                   type;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                                               vector;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
        _m02 uint8_t                                                irql;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Irql
        _m03 enum nt::kinterrupt_polarity_t                         polarity;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Polarity
        _m04 enum nt::kinterrupt_mode_t                             mode;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Mode
        _m05 struct nt::group_affinity_t                            target_processors;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetProcessors
        _m06 struct nt::interrupt_remapping_info_t                  int_remap_info;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IntRemapInfo
        _m09 u0_controller_input_t                                  controller_input;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ControllerInput
        _m10 uint64_t                                               hv_device_id;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HvDeviceId
        _m13 u4_xapic_message_t                                     xapic_message;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .XapicMessage
        _m15 u8_hypertransport_t                                    hypertransport;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Hypertransport
        _m18 u4_xapic_message_t                                     generic_message;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GenericMessage
        _m20 u12_message_request_t                                  message_request;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MessageRequest
                                                                                      
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_VECTOR_DATA.$", 0x58, true, 0x10401ff35665d6d5 );                  
        SDK_FIXED_SIZE( interrupt_vector_data_t, 0x58 );                              
    };                                                                                
};
#include "magic/interrupt_vector_data_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_vector_data_t::u0_controller_input_t, 0x8 );
SDK_VERIFY( struct nt::interrupt_vector_data_t::u4_xapic_message_t, 0x10 );
SDK_VERIFY( struct nt::interrupt_vector_data_t::u8_hypertransport_t, 0x8 );
SDK_VERIFY( struct nt::interrupt_vector_data_t::u12_generic_message_t, 0x10 );
SDK_VERIFY( struct nt::interrupt_vector_data_t::u12_message_request_t, 0x4 );
SDK_VERIFY( struct nt::interrupt_vector_data_t, 0x58 );
