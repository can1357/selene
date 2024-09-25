#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mci_status_bits_common_t.start.hpp"
namespace nt
{
    // [struct _MCI_STATUS_BITS_COMMON]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mci_status_bits_common_t     
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t mca_error_code;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .McaErrorCode
        _m01 uint16_t model_error_code;   //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ModelErrorCode
        _m02 uint1_t  context_corrupt;    //{ +0x0000@57 +0x0000@57 +0x0000@57 +0x0000@57 } | .ContextCorrupt
        _m03 uint1_t  address_valid;      //{ +0x0000@58 +0x0000@58 +0x0000@58 +0x0000@58 } | .AddressValid
        _m04 uint1_t  misc_valid;         //{ +0x0000@59 +0x0000@59 +0x0000@59 +0x0000@59 } | .MiscValid
        _m05 uint1_t  error_enabled;      //{ +0x0000@60 +0x0000@60 +0x0000@60 +0x0000@60 } | .ErrorEnabled
        _m06 uint1_t  uncorrected_error;  //{ +0x0000@61 +0x0000@61 +0x0000@61 +0x0000@61 } | .UncorrectedError
        _m07 uint1_t  status_over_flow;   //{ +0x0000@62 +0x0000@62 +0x0000@62 +0x0000@62 } | .StatusOverFlow
        _m08 uint1_t  valid;              //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .Valid
                                        
        SDK_NONVOL_PROPERTIES( "_MCI_STATUS_BITS_COMMON.$", 0x8, true, 0xb8ab95618ab5a0e );                  
        SDK_FIXED_SIZE( mci_status_bits_common_t, 0x8 );                  
    };                                  
};
#include "magic/mci_status_bits_common_t.end.hpp"
SDK_VERIFY( struct nt::mci_status_bits_common_t, 0x8 );
