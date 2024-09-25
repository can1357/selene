#pragma once
#include <sdkgen/support_library.hpp>
#include "mci_status_amd_bits_t.hpp"
#include "mci_status_intel_bits_t.hpp"
#include "mci_status_bits_common_t.hpp"

#include "magic/mci_status_t.start.hpp"
namespace nt
{
    // [union _MCI_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union mci_status_t                                             
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 uint64_t                            quad_part;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QuadPart
                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m01 struct nt::mci_status_bits_common_t common_bits;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommonBits
        _m02 struct nt::mci_status_amd_bits_t    amd_bits;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AmdBits
        _m03 struct nt::mci_status_intel_bits_t  intel_bits;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IntelBits
                                                                   
        // Windows 10 v1607                                        
        //                                                         
        _m04 uint16_t                            mca_error_code;     //{ +0x0000    } | .McaErrorCode
        _m05 uint16_t                            model_error_code;   //{ +0x0002    } | .ModelErrorCode
        _m06 uint23_t                            other_information;  //{ +0x0004@0  } | .OtherInformation
        _m07 uint1_t                             action_required;    //{ +0x0004@23 } | .ActionRequired
        _m08 uint1_t                             signalling;         //{ +0x0004@24 } | .Signalling
        _m09 uint1_t                             context_corrupt;    //{ +0x0004@25 } | .ContextCorrupt
        _m10 uint1_t                             address_valid;      //{ +0x0004@26 } | .AddressValid
        _m11 uint1_t                             misc_valid;         //{ +0x0004@27 } | .MiscValid
        _m12 uint1_t                             error_enabled;      //{ +0x0004@28 } | .ErrorEnabled
        _m13 uint1_t                             uncorrected_error;  //{ +0x0004@29 } | .UncorrectedError
        _m14 uint1_t                             status_over_flow;   //{ +0x0004@30 } | .StatusOverFlow
        _m15 uint1_t                             valid;              //{ +0x0004@31 } | .Valid
                                                                   
        SDK_NONVOL_PROPERTIES( "_MCI_STATUS.$", 0x8, true, 0x58b149e89ca98a4c );                  
        SDK_FIXED_SIZE( mci_status_t, 0x8 );                       
    };                                                             
};
#include "magic/mci_status_t.end.hpp"
SDK_VERIFY( union nt::mci_status_t, 0x8 );
