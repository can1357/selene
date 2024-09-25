#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partial_resource_descriptor_t.start.hpp"
namespace cm
{
    // [struct _CM_PARTIAL_RESOURCE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct partial_resource_descriptor_t                                    
    {                                                                       
        struct u0_generic_t                                                 
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                              
            _m03 int64_t  start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m04 uint32_t length;                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Generic.$", 0xc, true, 0x7202756da8b666f5 );                            
            SDK_FIXED_SIZE( u0_generic_t, 0xc );                            
        };                                                                  
                                                                            
        struct u5_port_t                                                    
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                              
            _m06 int64_t  start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m07 uint32_t length;                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Port.$", 0xc, true, 0x62b1b55d5b154d92 );                            
            SDK_FIXED_SIZE( u5_port_t, 0xc );                               
        };                                                                  
                                                                            
        struct u6_interrupt_t                                               
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                              
            _m09 varuint_t level;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
            _m10 uint32_t  vector;                                            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m11 uint64_t  affinity;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Affinity
                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                              
            _m12 uint16_t  group;                                             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Group
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Interrupt.$", 0x10, true, 0x8c7557fd125d050a );                              
            SDK_FIXED_SIZE( u6_interrupt_t, 0x10 );                              
        };                                                                  
                                                                            
        struct u11_message_interrupt_t                                      
        {                                                                   
            struct u16_raw_t                                                
            {                                                               
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
                //                                                          
                _m14 uint16_t message_count;                                  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MessageCount
                _m15 uint32_t vector;                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
                _m16 uint64_t affinity;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Affinity
                                                                            
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
                //                                                          
                _m17 uint16_t group;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Group
                                                                            
                SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Raw.$", 0x10, true, 0x50bc33f0446ae748 );                                              
                SDK_FIXED_SIZE( u16_raw_t, 0x10 );                                              
            };                                                              
                                                                            
            struct u21_translated_t                                         
            {                                                               
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
                //                                                          
                _m19 varuint_t level;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
                _m20 uint32_t  vector;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
                _m21 uint64_t  affinity;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Affinity
                                                                            
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
                //                                                          
                _m22 uint16_t  group;                                         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Group
                                                                            
                SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Translated.$", 0x10, true, 0xb74e06c996234493 );                                         
                SDK_FIXED_SIZE( u21_translated_t, 0x10 );                                         
            };                                                              
                                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                                              
            _m18 u16_raw_t                  raw;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Raw
            _m23 u21_translated_t           translated;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Translated
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.$", 0x10, true, 0x18ef6b19f6521d2f );                                
            SDK_FIXED_SIZE( u11_message_interrupt_t, 0x10 );                                
        };                                                                  
                                                                            
        struct u22_memory_t                                                 
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                              
            _m25 int64_t  start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m26 uint32_t length;                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory.$", 0xc, true, 0x20223374431a7018 );                            
            SDK_FIXED_SIZE( u22_memory_t, 0xc );                            
        };                                                                  
                                                                            
        struct u23_dma_t                                                    
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                                              
            _m28 uint32_t channel;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Channel
            _m29 uint32_t port;                                               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Port
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Dma.$", 0xc, true, 0x43d92d351aa1404e );                             
            SDK_FIXED_SIZE( u23_dma_t, 0xc );                               
        };                                                                  
                                                                            
        struct u28_dma_v3_t                                                 
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                              
            _m31 uint32_t channel;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Channel
            _m32 uint32_t request_line;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RequestLine
            _m33 uint8_t  transfer_width;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransferWidth
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DmaV3.$", 0xc, true, 0xf0845cec986fc561 );                                    
            SDK_FIXED_SIZE( u28_dma_v3_t, 0xc );                                    
        };                                                                  
                                                                            
        struct u33_device_private_t                                         
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                                              
            _m35 sdk::array<uint32_t, 3> data;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DevicePrivate.$", 0xc, true, 0x696aecd70cdcd2b9 );                          
            SDK_FIXED_SIZE( u33_device_private_t, 0xc );                          
        };                                                                  
                                                                            
        struct u38_bus_number_t                                             
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                              
            _m37 uint32_t start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m38 uint32_t length;                                             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.BusNumber.$", 0xc, true, 0xd29b92a6fd50024a );                            
            SDK_FIXED_SIZE( u38_bus_number_t, 0xc );                            
        };                                                                  
                                                                            
        struct u43_device_specific_data_t                                   
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                              
            _m40 uint32_t data_size;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataSize
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DeviceSpecificData.$", 0xc, true, 0xf20f15ff9ab0c529 );                               
            SDK_FIXED_SIZE( u43_device_specific_data_t, 0xc );                               
        };                                                                  
                                                                            
        struct u48_memory40_t                                               
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                              
            _m42 int64_t  start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m43 uint32_t length40;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length40
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory40.$", 0xc, true, 0xbb23d6338a1b70c8 );                              
            SDK_FIXED_SIZE( u48_memory40_t, 0xc );                              
        };                                                                  
                                                                            
        struct u53_memory48_t                                               
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                              
            _m45 int64_t  start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m46 uint32_t length48;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length48
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory48.$", 0xc, true, 0x4a4918d8351a3a6e );                              
            SDK_FIXED_SIZE( u53_memory48_t, 0xc );                              
        };                                                                  
                                                                            
        struct u58_memory64_t                                               
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                              
            _m48 int64_t  start;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
            _m49 uint32_t length64;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length64
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory64.$", 0xc, true, 0x2ee0bdb06834e3d );                              
            SDK_FIXED_SIZE( u58_memory64_t, 0xc );                              
        };                                                                  
                                                                            
        struct u63_connection_t                                             
        {                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                              
            _m51 uint8_t  _class;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Class
            _m52 uint8_t  type;                                               //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Type
            _m53 uint32_t id_low_part;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .IdLowPart
            _m54 uint32_t id_high_part;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IdHighPart
                                                                            
            SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Connection.$", 0xc, true, 0xc7645fe8e572115 );                                  
            SDK_FIXED_SIZE( u63_connection_t, 0xc );                                  
        };                                                                  
                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                  
        _m00 uint8_t                                   type;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                   share_disposition;     //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ShareDisposition
        _m02 uint16_t                                  flags;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m05 u0_generic_t                              generic;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Generic
        _m08 u5_port_t                                 port;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Port
        _m13 u6_interrupt_t                            interrupt;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Interrupt
        _m24 u11_message_interrupt_t                   message_interrupt;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageInterrupt
        _m27 u22_memory_t                              memory;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Memory
        _m30 u23_dma_t                                 dma;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Dma
        _m34 u28_dma_v3_t                              dma_v3;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DmaV3
        _m36 u33_device_private_t                      device_private;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DevicePrivate
        _m39 u38_bus_number_t                          bus_number;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BusNumber
        _m41 u43_device_specific_data_t                device_specific_data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceSpecificData
        _m44 u48_memory40_t                            memory40;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Memory40
        _m47 u53_memory48_t                            memory48;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Memory48
        _m50 u58_memory64_t                            memory64;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Memory64
        _m55 u63_connection_t                          connection;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Connection
                                                                            
        SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_DESCRIPTOR.$", 0x14, true, 0xa184162c70fe4d47 );                     
        SDK_FIXED_SIZE( partial_resource_descriptor_t, 0x14 );                     
    };                                                                      
};
#include "magic/partial_resource_descriptor_t.end.hpp"
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u0_generic_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u5_port_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u6_interrupt_t, 0x10 );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u11_message_interrupt_t::u16_raw_t, 0x10 );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u11_message_interrupt_t::u21_translated_t, 0x10 );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u11_message_interrupt_t, 0x10 );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u22_memory_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u23_dma_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u28_dma_v3_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u33_device_private_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u38_bus_number_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u43_device_specific_data_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u48_memory40_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u53_memory48_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u58_memory64_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t::u63_connection_t, 0xc );
SDK_VERIFY( struct cm::partial_resource_descriptor_t, 0x14 );
