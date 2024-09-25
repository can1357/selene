#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mci_stats_t.start.hpp"
namespace ntdll
{
    // [union _MCI_STATS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union mci_stats_t                                  
    {                                                  
        struct u0_mci_status_t                         
        {                                              
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                         
            _m00 uint16_t mca_error_code;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .McaErrorCode
            _m01 uint16_t model_error_code;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ModelErrorCode
            _m02 uint25_t other_information;             //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .OtherInformation
            _m03 uint1_t  context_corrupt;               //{ +0x0004@25 +0x0004@25 +0x0004@25 +0x0004@25 +0x0004@25 } | .ContextCorrupt
            _m04 uint1_t  address_valid;                 //{ +0x0004@26 +0x0004@26 +0x0004@26 +0x0004@26 +0x0004@26 } | .AddressValid
            _m05 uint1_t  misc_valid;                    //{ +0x0004@27 +0x0004@27 +0x0004@27 +0x0004@27 +0x0004@27 } | .MiscValid
            _m06 uint1_t  error_enabled;                 //{ +0x0004@28 +0x0004@28 +0x0004@28 +0x0004@28 +0x0004@28 } | .ErrorEnabled
            _m07 uint1_t  uncorrected_error;             //{ +0x0004@29 +0x0004@29 +0x0004@29 +0x0004@29 +0x0004@29 } | .UncorrectedError
            _m08 uint1_t  status_over_flow;              //{ +0x0004@30 +0x0004@30 +0x0004@30 +0x0004@30 +0x0004@30 } | .StatusOverFlow
            _m09 uint1_t  valid;                         //{ +0x0004@31 +0x0004@31 +0x0004@31 +0x0004@31 +0x0004@31 } | .Valid
                                                       
            SDK_NONVOL_PROPERTIES( "_MCI_STATS.MciStatus.$", 0x8, true, 0x220cb8b06d99c162 );                             
            SDK_FIXED_SIZE( u0_mci_status_t, 0x8 );                             
        };                                             
                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                             
        _m10 u0_mci_status_t                mci_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MciStatus
        _m11 uint64_t                       quad_part;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QuadPart
                                                       
        SDK_NONVOL_PROPERTIES( "_MCI_STATS.$", 0x8, true, 0x1e1d56cf6e8e33f6 );           
        SDK_FIXED_SIZE( mci_stats_t, 0x8 );            
    };                                                 
};
#include "magic/mci_stats_t.end.hpp"
SDK_VERIFY( struct ntdll::mci_stats_t::u0_mci_status_t, 0x8 );
SDK_VERIFY( union ntdll::mci_stats_t, 0x8 );
