#pragma once
#include <sdkgen/support_library.hpp>
#include "../pci/capabilities_header_t.hpp"

#include "magic/bridge_capability_t.start.hpp"
namespace pcix
{
    // [struct _PCIX_BRIDGE_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bridge_capability_t                                                                 
    {                                                                                          
        union u0_secondary_status_t                                                            
        {                                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                                 
            _m01 uint1_t  bus64_bit;                                                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Bus64Bit
            _m02 uint1_t  bus133m_hz_capable;                                                    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Bus133MHzCapable
            _m03 uint1_t  split_completion_discarded;                                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .SplitCompletionDiscarded
            _m04 uint1_t  unexpected_split_completion;                                           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UnexpectedSplitCompletion
            _m05 uint1_t  split_completion_overrun;                                              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .SplitCompletionOverrun
            _m06 uint1_t  split_request_delayed;                                                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SplitRequestDelayed
            _m07 uint4_t  bus_mode_frequency;                                                    //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .BusModeFrequency
            _m08 uint2_t  rsvd;                                                                  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Rsvd
            _m09 uint2_t  version;                                                               //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Version
            _m10 uint1_t  bus266m_hz_capable;                                                    //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Bus266MHzCapable
            _m11 uint1_t  bus533m_hz_capable;                                                    //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Bus533MHzCapable
            _m12 uint16_t as_ushort;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                                                               
            SDK_NONVOL_PROPERTIES( "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.$", 0x2, true, 0x51eaf9cdf64192ce );                                                                  
            SDK_FIXED_SIZE( u0_secondary_status_t, 0x2 );                                                                  
        };                                                                                     
                                                                                               
        union u5_bridge_status_t                                                               
        {                                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                                 
            _m14 uint3_t  function_number;                                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FunctionNumber
            _m15 uint5_t  device_number;                                                         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DeviceNumber
            _m16 uint8_t  bus_number;                                                            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .BusNumber
            _m17 uint1_t  device64_bit;                                                          //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Device64Bit
            _m18 uint1_t  device133m_hz_capable;                                                 //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .Device133MHzCapable
            _m19 uint1_t  split_completion_discarded;                                            //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .SplitCompletionDiscarded
            _m20 uint1_t  unexpected_split_completion;                                           //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .UnexpectedSplitCompletion
            _m21 uint1_t  split_completion_overrun;                                              //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .SplitCompletionOverrun
            _m22 uint1_t  split_request_delayed;                                                 //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .SplitRequestDelayed
            _m23 uint7_t  rsvd;                                                                  //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Rsvd
            _m24 uint1_t  dim_capable;                                                           //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .DIMCapable
            _m25 uint1_t  device266m_hz_capable;                                                 //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Device266MHzCapable
            _m26 uint1_t  device533m_hz_capable;                                                 //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .Device533MHzCapable
            _m27 uint32_t as_ulong;                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                                               
            SDK_NONVOL_PROPERTIES( "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.$", 0x4, true, 0xe0f7f477c552e356 );                                                                  
            SDK_FIXED_SIZE( u5_bridge_status_t, 0x4 );                                                                  
        };                                                                                     
                                                                                               
        union u10_ecc_control_status_t                                                         
        {                                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
            //                                                                                 
            _m33 uint1_t  select_secondary_registers;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SelectSecondaryRegisters
            _m34 uint1_t  error_present_in_other_bank;                                           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ErrorPresentInOtherBank
            _m35 uint1_t  additional_correctable_error;                                          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AdditionalCorrectableError
            _m36 uint1_t  additional_uncorrectable_error;                                        //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AdditionalUncorrectableError
            _m37 uint3_t  error_phase;                                                           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ErrorPhase
            _m38 uint1_t  error_corrected;                                                       //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ErrorCorrected
            _m39 uint8_t  syndrome;                                                              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Syndrome
            _m40 uint4_t  error_first_command;                                                   //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ErrorFirstCommand
            _m41 uint4_t  error_second_command;                                                  //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .ErrorSecondCommand
            _m42 uint4_t  error_upper_attributes;                                                //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .ErrorUpperAttributes
            _m43 uint1_t  control_update_enable;                                                 //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .ControlUpdateEnable
            _m44 uint1_t  rsvd;                                                                  //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .Rsvd
            _m45 uint1_t  disable_single_bit_correction;                                         //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .DisableSingleBitCorrection
            _m46 uint1_t  ecc_mode;                                                              //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .EccMode
            _m47 uint32_t as_ulong;                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                                               
            SDK_NONVOL_PROPERTIES( "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.$", 0x4, true, 0x7a8beda647b8e2d3 );                                                                     
            SDK_FIXED_SIZE( u10_ecc_control_status_t, 0x4 );                                                                     
        };                                                                                     
                                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m00 struct pci::capabilities_header_t           header;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m13 u0_secondary_status_t                       secondary_status;                       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .SecondaryStatus
        _m28 u5_bridge_status_t                          bridge_status;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BridgeStatus
        _m29 uint16_t                                    upstream_split_transaction_capacity;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UpstreamSplitTransactionCapacity
        _m30 uint16_t                                    upstream_split_transaction_limit;       //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .UpstreamSplitTransactionLimit
        _m31 uint16_t                                    downstream_split_transaction_capacity;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DownstreamSplitTransactionCapacity
        _m32 uint16_t                                    downstream_split_transaction_limit;     //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .DownstreamSplitTransactionLimit
        _m48 u10_ecc_control_status_t                    ecc_control_status;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EccControlStatus
        _m49 uint32_t                                    ecc_first_address;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .EccFirstAddress
        _m50 uint32_t                                    ecc_second_address;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EccSecondAddress
        _m51 uint32_t                                    ecc_attribute;                          //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .EccAttribute
                                                                                               
        SDK_NONVOL_PROPERTIES( "_PCIX_BRIDGE_CAPABILITY.$", 0x20, true, 0x6fb103b57f2ec34d );                                      
        SDK_FIXED_SIZE( bridge_capability_t, 0x20 );                                           
    };                                                                                         
};
#include "magic/bridge_capability_t.end.hpp"
SDK_VERIFY( union pcix::bridge_capability_t::u0_secondary_status_t, 0x2 );
SDK_VERIFY( union pcix::bridge_capability_t::u5_bridge_status_t, 0x4 );
SDK_VERIFY( union pcix::bridge_capability_t::u10_ecc_control_status_t, 0x4 );
SDK_VERIFY( struct pcix::bridge_capability_t, 0x20 );
