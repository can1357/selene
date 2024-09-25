#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_ari_capability_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_ari_capability_register_t         
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 uint1_t mfvc_function_groups_capability;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MfvcFunctionGroupsCapability
        _m01 uint1_t acs_function_groups_capability;   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AcsFunctionGroupsCapability
        _m02 uint8_t next_function_number;             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .NextFunctionNumber
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ARI_CAPABILITY_REGISTER.$", 0x2, true, 0xde44b0448a92d408 );                                
        SDK_FIXED_SIZE( express_ari_capability_register_t, 0x2 );                                
    };                                               
};
#include "magic/express_ari_capability_register_t.end.hpp"
SDK_VERIFY( struct pci::express_ari_capability_register_t, 0x2 );
