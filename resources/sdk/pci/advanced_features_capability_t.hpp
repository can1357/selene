#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"

#include "magic/advanced_features_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_ADVANCED_FEATURES_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct advanced_features_capability_t                            
    {                                                                
        union u0_capabilities_t                                      
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                       
            _m02 uint1_t function_level_reset_supported;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FunctionLevelResetSupported
            _m03 uint1_t transactions_pending_supported;               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TransactionsPendingSupported
            _m04 uint6_t rsvd;                                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd
            _m05 uint8_t as_uchar;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
                                                                     
            SDK_NONVOL_PROPERTIES( "_PCI_ADVANCED_FEATURES_CAPABILITY.Capabilities.$", 0x1, true, 0x6095bc73d715fbc8 );                                            
            SDK_FIXED_SIZE( u0_capabilities_t, 0x1 );                                            
        };                                                           
                                                                     
        union u5_control_t                                           
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                       
            _m07 uint1_t initiate_function_level_reset;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .InitiateFunctionLevelReset
            _m08 uint7_t rsvd;                                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rsvd
            _m09 uint8_t as_uchar;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
                                                                     
            SDK_NONVOL_PROPERTIES( "_PCI_ADVANCED_FEATURES_CAPABILITY.Control.$", 0x1, true, 0x19536e22aa287776 );                                           
            SDK_FIXED_SIZE( u5_control_t, 0x1 );                                           
        };                                                           
                                                                     
        union u10_status_t                                           
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                       
            _m11 uint1_t transactions_pending;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TransactionsPending
            _m12 uint7_t rsvd;                                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rsvd
            _m13 uint8_t as_uchar;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
                                                                     
            SDK_NONVOL_PROPERTIES( "_PCI_ADVANCED_FEATURES_CAPABILITY.Status.$", 0x1, true, 0x7ecf6b8aea78c9eb );                                  
            SDK_FIXED_SIZE( u10_status_t, 0x1 );                                  
        };                                                           
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                           
        _m00 struct pci::capabilities_header_t          header;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                                    length;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Length
        _m06 u0_capabilities_t                          capabilities;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Capabilities
        _m10 u5_control_t                               control;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Control
        _m14 u10_status_t                               status;        //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Status
                                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_ADVANCED_FEATURES_CAPABILITY.$", 0x6, true, 0x9dbcb71c6920959d );             
        SDK_FIXED_SIZE( advanced_features_capability_t, 0x6 );             
    };                                                               
};
#include "magic/advanced_features_capability_t.end.hpp"
SDK_VERIFY( union pci::advanced_features_capability_t::u0_capabilities_t, 0x1 );
SDK_VERIFY( union pci::advanced_features_capability_t::u5_control_t, 0x1 );
SDK_VERIFY( union pci::advanced_features_capability_t::u10_status_t, 0x1 );
SDK_VERIFY( struct pci::advanced_features_capability_t, 0x6 );
