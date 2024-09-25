#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicedump_storagestack_public_state_record_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD]
    // => WDK 10 (NV)
    //
    struct devicedump_storagestack_public_state_record_t                           
    {                                                                              
        union u0_stack_specific_t                                                  
        {                                                                          
            struct u1_external_stack_t                                             
            {                                                                      
                // WDK 10                                                          
                //                                                                 
                _m06 uint32_t dw_reserved;                                           //{ +0x0000    } | .dwReserved
                                                                                   
                SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.ExternalStack.$", 0x0, false, 0xd27f17b60608e3c4 );                                            
                SDK_FIXED_SIZE( u1_external_stack_t, 0x4 );                                            
            };                                                                     
                                                                                   
            struct u2_ata_port_t                                                   
            {                                                                      
                // WDK 10                                                          
                //                                                                 
                _m08 uint32_t dw_ata_port_specific;                                  //{ +0x0000    } | .dwAtaPortSpecific
                                                                                   
                SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.AtaPort.$", 0x0, false, 0xd9c071df400bfbad );                                                     
                SDK_FIXED_SIZE( u2_ata_port_t, 0x4 );                                                     
            };                                                                     
                                                                                   
            struct u3_stor_port_t                                                  
            {                                                                      
                // WDK 10                                                          
                //                                                                 
                _m10 uint32_t srb_tag;                                               //{ +0x0000    } | .SrbTag
                                                                                   
                SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.StorPort.$", 0x0, false, 0x1fbf9b1c045530e4 );                                        
                SDK_FIXED_SIZE( u3_stor_port_t, 0x4 );                                        
            };                                                                     
                                                                                   
            // WDK 10                                                              
            //                                                                     
            _m07 u1_external_stack_t               external_stack;                   //{ +0x0000    } | .ExternalStack
            _m09 u2_ata_port_t                     ata_port;                         //{ +0x0000    } | .AtaPort
            _m11 u3_stor_port_t                    stor_port;                        //{ +0x0000    } | .StorPort
                                                                                   
            SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.$", 0x0, false, 0xc7bbaa4eadf271ee );                                
            SDK_FIXED_SIZE( u0_stack_specific_t, 0x4 );                                
        };                                                                         
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 sdk::array<uint8_t, 16>                              cdb;               //{ +0x0000    } | .Cdb
        _m01 sdk::array<uint8_t, 16>                              command;           //{ +0x0010    } | .Command
        _m02 uint64_t                                             start_time;        //{ +0x0020    } | .StartTime
        _m03 uint64_t                                             end_time;          //{ +0x0028    } | .EndTime
        _m04 uint32_t                                             operation_status;  //{ +0x0030    } | .OperationStatus
        _m05 uint32_t                                             operation_error;   //{ +0x0034    } | .OperationError
        _m12 u0_stack_specific_t                                  stack_specific;    //{ +0x0038    } | .StackSpecific
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.$", 0x0, false, 0xee433b8218a4a52a );                 
        SDK_FIXED_SIZE( devicedump_storagestack_public_state_record_t, 0x3c );                 
    };                                                                             
};
#include "magic/devicedump_storagestack_public_state_record_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_storagestack_public_state_record_t::u0_stack_specific_t::u1_external_stack_t, 0x4 );
SDK_VERIFY( struct nt::devicedump_storagestack_public_state_record_t::u0_stack_specific_t::u2_ata_port_t, 0x4 );
SDK_VERIFY( struct nt::devicedump_storagestack_public_state_record_t::u0_stack_specific_t::u3_stor_port_t, 0x4 );
SDK_VERIFY( union nt::devicedump_storagestack_public_state_record_t::u0_stack_specific_t, 0x4 );
SDK_VERIFY( struct nt::devicedump_storagestack_public_state_record_t, 0x3c );
