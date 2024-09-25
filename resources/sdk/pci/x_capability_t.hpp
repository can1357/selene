#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"

#include "magic/x_capability_t.start.hpp"
namespace pci
{
    // [struct PCI_X_CAPABILITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_capability_t                                                                 
    {                                                                                     
        union u0_command_t                                                                
        {                                                                                 
            struct u4_bits_t                                                              
            {                                                                             
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
                //                                                                        
                _m01 uint1_t data_parity_error_recovery_enable;                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DataParityErrorRecoveryEnable
                _m02 uint1_t enable_relaxed_ordering;                                       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .EnableRelaxedOrdering
                _m03 uint2_t max_memory_read_byte_count;                                    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MaxMemoryReadByteCount
                _m04 uint3_t max_outstanding_split_transactions;                            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .MaxOutstandingSplitTransactions
                                                                                          
                SDK_MAGIC_PROPERTIES( "PCI_X_CAPABILITY.Command.bits.$", 0x2, true, 0x21d21de99390e4aa );                                                     
                SDK_FIXED_SIZE( u4_bits_t, 0x2 );                                                     
            };                                                                            
                                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                                                            
            _m05 u4_bits_t                                      bits;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bits
            _m06 uint16_t                                       as_ushort;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                                                          
            SDK_MAGIC_PROPERTIES( "PCI_X_CAPABILITY.Command.$", 0x2, true, 0xbc27d14432e90754 );                  
            SDK_FIXED_SIZE( u0_command_t, 0x2 );                                          
        };                                                                                
                                                                                          
        union u8_status_t                                                                 
        {                                                                                 
            struct u12_bits_t                                                             
            {                                                                             
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
                //                                                                        
                _m08 uint3_t function_number;                                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FunctionNumber
                _m09 uint5_t device_number;                                                 //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DeviceNumber
                _m10 uint8_t bus_number;                                                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .BusNumber
                _m11 uint1_t device64_bit;                                                  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Device64Bit
                _m12 uint1_t capable133m_hz;                                                //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .Capable133MHz
                _m13 uint1_t split_completion_discarded;                                    //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .SplitCompletionDiscarded
                _m14 uint1_t unexpected_split_completion;                                   //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .UnexpectedSplitCompletion
                _m15 uint1_t device_complexity;                                             //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .DeviceComplexity
                _m16 uint2_t designed_max_memory_read_byte_count;                           //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .DesignedMaxMemoryReadByteCount
                _m17 uint3_t designed_max_outstanding_split_transactions;                   //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .DesignedMaxOutstandingSplitTransactions
                _m18 uint3_t designed_max_cumulative_read_size;                             //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .DesignedMaxCumulativeReadSize
                _m19 uint1_t received_split_completion_error_message;                       //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .ReceivedSplitCompletionErrorMessage
                _m20 uint1_t capable_pcix266;                                               //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .CapablePCIX266
                _m21 uint1_t capable_pcix533;                                               //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .CapablePCIX533
                                                                                          
                SDK_MAGIC_PROPERTIES( "PCI_X_CAPABILITY.Status.bits.$", 0x4, true, 0x6c5a612401f76128 );                                                             
                SDK_FIXED_SIZE( u12_bits_t, 0x4 );                                                             
            };                                                                            
                                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                                                            
            _m22 u12_bits_t                                              bits;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bits
            _m23 uint32_t                                                as_ulong;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                                          
            SDK_MAGIC_PROPERTIES( "PCI_X_CAPABILITY.Status.$", 0x4, true, 0xcd1dbafbbfddd364 );                 
            SDK_FIXED_SIZE( u8_status_t, 0x4 );                                           
        };                                                                                
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                                
        _m00 struct pci::capabilities_header_t                                    header;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m07 u0_command_t                                                         command;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Command
        _m24 u8_status_t                                                          status;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Status
                                                                                          
        SDK_MAGIC_PROPERTIES( "PCI_X_CAPABILITY.$", 0x8, true, 0xab01559b4876bda3 );        
        SDK_FIXED_SIZE( x_capability_t, 0x8 );                                            
    };                                                                                    
};
#include "magic/x_capability_t.end.hpp"
SDK_VERIFY( struct pci::x_capability_t::u0_command_t::u4_bits_t, 0x2 );
SDK_VERIFY( union pci::x_capability_t::u0_command_t, 0x2 );
SDK_VERIFY( struct pci::x_capability_t::u8_status_t::u12_bits_t, 0x4 );
SDK_VERIFY( union pci::x_capability_t::u8_status_t, 0x4 );
SDK_VERIFY( struct pci::x_capability_t, 0x8 );
