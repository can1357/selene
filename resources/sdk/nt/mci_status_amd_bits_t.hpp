#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mci_status_amd_bits_t.start.hpp"
namespace nt
{
    // [struct _MCI_STATUS_AMD_BITS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mci_status_amd_bits_t               
    {                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint16_t mca_error_code;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .McaErrorCode
        _m01 uint16_t model_error_code;          //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ModelErrorCode
        _m02 uint11_t implementation_specific2;  //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .ImplementationSpecific2
        _m03 uint1_t  poison;                    //{ +0x0000@43 +0x0000@43 +0x0000@43 +0x0000@43 } | .Poison
        _m04 uint1_t  deferred;                  //{ +0x0000@44 +0x0000@44 +0x0000@44 +0x0000@44 } | .Deferred
        _m05 uint12_t implementation_specific1;  //{ +0x0000@45 +0x0000@45 +0x0000@45 +0x0000@45 } | .ImplementationSpecific1
        _m06 uint1_t  context_corrupt;           //{ +0x0000@57 +0x0000@57 +0x0000@57 +0x0000@57 } | .ContextCorrupt
        _m07 uint1_t  address_valid;             //{ +0x0000@58 +0x0000@58 +0x0000@58 +0x0000@58 } | .AddressValid
        _m08 uint1_t  misc_valid;                //{ +0x0000@59 +0x0000@59 +0x0000@59 +0x0000@59 } | .MiscValid
        _m09 uint1_t  error_enabled;             //{ +0x0000@60 +0x0000@60 +0x0000@60 +0x0000@60 } | .ErrorEnabled
        _m10 uint1_t  uncorrected_error;         //{ +0x0000@61 +0x0000@61 +0x0000@61 +0x0000@61 } | .UncorrectedError
        _m11 uint1_t  status_over_flow;          //{ +0x0000@62 +0x0000@62 +0x0000@62 +0x0000@62 } | .StatusOverFlow
        _m12 uint1_t  valid;                     //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .Valid
                                               
        SDK_NONVOL_PROPERTIES( "_MCI_STATUS_AMD_BITS.$", 0x8, true, 0x20218e8589f46d12 );                         
        SDK_FIXED_SIZE( mci_status_amd_bits_t, 0x8 );                         
    };                                         
};
#include "magic/mci_status_amd_bits_t.end.hpp"
SDK_VERIFY( struct nt::mci_status_amd_bits_t, 0x8 );
