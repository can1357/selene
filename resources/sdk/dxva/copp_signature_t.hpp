#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copp_signature_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPSignature]
    // => WDK 10 (NV)
    //
    struct copp_signature_t                     
    {                                           
        // WDK 10                               
        //                                      
        _m00 sdk::array<uint8_t, 256> signature;  //{ +0x0000    } | .Signature
                                                
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPSignature.$", 0x0, false, 0x227e38f1c71d99c7 );          
        SDK_FIXED_SIZE( copp_signature_t, 0x100 );          
    };                                          
};
#include "magic/copp_signature_t.end.hpp"
SDK_VERIFY( struct dxva::copp_signature_t, 0x100 );
