#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/irq_priority_t.hpp"
#include "../nt/irq_device_policy_t.hpp"

#include "magic/resource_descriptor_t.start.hpp"
namespace io
{
    // [struct _IO_RESOURCE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_descriptor_t                                               
    {                                                                          
        struct u0_port_t                                                       
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m04 uint32_t length;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m05 uint32_t alignment;                                             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Alignment
            _m06 int64_t  minimum_address;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
            _m07 int64_t  maximum_address;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Port.$", 0x18, true, 0x2277efde5b94ead8 );                                  
            SDK_FIXED_SIZE( u0_port_t, 0x18 );                                  
        };                                                                     
                                                                               
        struct u5_memory_t                                                     
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m09 uint32_t length;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m10 uint32_t alignment;                                             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Alignment
            _m11 int64_t  minimum_address;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
            _m12 int64_t  maximum_address;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Memory.$", 0x18, true, 0xba02b6eaeca1591c );                                  
            SDK_FIXED_SIZE( u5_memory_t, 0x18 );                                  
        };                                                                     
                                                                               
        struct u6_interrupt_t                                                  
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
            //                                                                 
            _m14 uint32_t                minimum_vector;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinimumVector
            _m15 uint32_t                maximum_vector;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumVector
            _m16 varuint_t               affinity_policy;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AffinityPolicy
            _m17 enum nt::irq_priority_t priority_policy;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PriorityPolicy
            _m18 uint64_t                targeted_processors;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetedProcessors
                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
            //                                                                 
            _m19 uint16_t                group;                                  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Group
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Interrupt.$", 0x18, true, 0xa915f1cea7a7fa2f );                                      
            SDK_FIXED_SIZE( u6_interrupt_t, 0x18 );                                      
        };                                                                     
                                                                               
        struct u11_dma_t                                                       
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m21 uint32_t minimum_channel;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinimumChannel
            _m22 uint32_t maximum_channel;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumChannel
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Dma.$", 0x8, true, 0xffb71d3be4ea547 );                                  
            SDK_FIXED_SIZE( u11_dma_t, 0x8 );                                  
        };                                                                     
                                                                               
        struct u16_dma_v3_t                                                    
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                 
            _m24 uint32_t request_line;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestLine
            _m25 uint32_t channel;                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Channel
            _m26 uint32_t transfer_width;                                        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .TransferWidth
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.DmaV3.$", 0x10, true, 0xccfcf91c0b1df45f );                                 
            SDK_FIXED_SIZE( u16_dma_v3_t, 0x10 );                                 
        };                                                                     
                                                                               
        struct u21_generic_t                                                   
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m28 uint32_t length;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m29 uint32_t alignment;                                             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Alignment
            _m30 int64_t  minimum_address;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
            _m31 int64_t  maximum_address;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Generic.$", 0x18, true, 0xce43925dcbea310a );                                  
            SDK_FIXED_SIZE( u21_generic_t, 0x18 );                                  
        };                                                                     
                                                                               
        struct u22_device_private_t                                            
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                                                 
            _m33 sdk::array<uint32_t, 3> data;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.DevicePrivate.$", 0xc, true, 0xf80ec7d60d4e0ea4 );                       
            SDK_FIXED_SIZE( u22_device_private_t, 0xc );                       
        };                                                                     
                                                                               
        struct u27_bus_number_t                                                
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                 
            _m35 uint32_t length;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m36 uint32_t min_bus_number;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MinBusNumber
            _m37 uint32_t max_bus_number;                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxBusNumber
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.BusNumber.$", 0x10, true, 0xdfd169830be776be );                                 
            SDK_FIXED_SIZE( u27_bus_number_t, 0x10 );                                 
        };                                                                     
                                                                               
        struct u32_config_data_t                                               
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                                 
            _m39 uint32_t priority;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Priority
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.ConfigData.$", 0xc, true, 0x89a99a7aad39bfb4 );                           
            SDK_FIXED_SIZE( u32_config_data_t, 0xc );                           
        };                                                                     
                                                                               
        struct u37_memory40_t                                                  
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m41 uint32_t length40;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length40
            _m42 uint32_t alignment40;                                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Alignment40
            _m43 int64_t  minimum_address;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
            _m44 int64_t  maximum_address;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Memory40.$", 0x18, true, 0x807f3c7413b7002d );                                  
            SDK_FIXED_SIZE( u37_memory40_t, 0x18 );                                  
        };                                                                     
                                                                               
        struct u42_memory48_t                                                  
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m46 uint32_t length48;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length48
            _m47 uint32_t alignment48;                                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Alignment48
            _m48 int64_t  minimum_address;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
            _m49 int64_t  maximum_address;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Memory48.$", 0x18, true, 0x53927cdca574404d );                                  
            SDK_FIXED_SIZE( u42_memory48_t, 0x18 );                                  
        };                                                                     
                                                                               
        struct u47_memory64_t                                                  
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                 
            _m51 uint32_t length64;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length64
            _m52 uint32_t alignment64;                                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Alignment64
            _m53 int64_t  minimum_address;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
            _m54 int64_t  maximum_address;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Memory64.$", 0x18, true, 0xdc08a7b381e48868 );                                  
            SDK_FIXED_SIZE( u47_memory64_t, 0x18 );                                  
        };                                                                     
                                                                               
        struct u52_connection_t                                                
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                                 
            _m56 uint8_t  _class;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Class
            _m57 uint8_t  type;                                                  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Type
            _m58 uint32_t id_low_part;                                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .IdLowPart
            _m59 uint32_t id_high_part;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IdHighPart
                                                                               
            SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.Connection.$", 0xc, true, 0x48273a0a764615aa );                               
            SDK_FIXED_SIZE( u52_connection_t, 0xc );                               
        };                                                                     
                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                     
        _m00 uint8_t                                         option;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Option
        _m01 uint8_t                                         type;               //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Type
        _m02 uint8_t                                         share_disposition;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ShareDisposition
        _m03 uint16_t                                        flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m08 u0_port_t                                       port;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Port
        _m13 u5_memory_t                                     memory;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Memory
        _m20 u6_interrupt_t                                  interrupt;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Interrupt
        _m23 u11_dma_t                                       dma;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Dma
        _m27 u16_dma_v3_t                                    dma_v3;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DmaV3
        _m32 u21_generic_t                                   generic;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Generic
        _m34 u22_device_private_t                            device_private;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DevicePrivate
        _m38 u27_bus_number_t                                bus_number;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BusNumber
        _m40 u32_config_data_t                               config_data;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ConfigData
        _m45 u37_memory40_t                                  memory40;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Memory40
        _m50 u42_memory48_t                                  memory48;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Memory48
        _m55 u47_memory64_t                                  memory64;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Memory64
        _m60 u52_connection_t                                connection;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Connection
                                                                               
        SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_DESCRIPTOR.$", 0x20, true, 0xa1a7b4c1d5748cfe );                  
        SDK_FIXED_SIZE( resource_descriptor_t, 0x20 );                         
    };                                                                         
};
#include "magic/resource_descriptor_t.end.hpp"
SDK_VERIFY( struct io::resource_descriptor_t::u0_port_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u5_memory_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u6_interrupt_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u11_dma_t, 0x8 );
SDK_VERIFY( struct io::resource_descriptor_t::u16_dma_v3_t, 0x10 );
SDK_VERIFY( struct io::resource_descriptor_t::u21_generic_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u22_device_private_t, 0xc );
SDK_VERIFY( struct io::resource_descriptor_t::u27_bus_number_t, 0x10 );
SDK_VERIFY( struct io::resource_descriptor_t::u32_config_data_t, 0xc );
SDK_VERIFY( struct io::resource_descriptor_t::u37_memory40_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u42_memory48_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u47_memory64_t, 0x18 );
SDK_VERIFY( struct io::resource_descriptor_t::u52_connection_t, 0xc );
SDK_VERIFY( struct io::resource_descriptor_t, 0x20 );
