#pragma once
#include <sdkgen/support_library.hpp>
#include "pcie_address_t.hpp"
#include "pcie_correctable_error_devices_validbits_t.hpp"

#include "magic/pcie_correctable_error_devices_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES]
    // => Windows 11
    //
    struct pcie_correctable_error_devices_t                                           
    {                                                                                 
        using whea_pcie_correctable_error_devices_validbits_t = union whea::pcie_correctable_error_devices_validbits_t;                        
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m00 whea_pcie_correctable_error_devices_validbits_t  valid_bits;               //{ +0x0000    } | .ValidBits
        _m01 struct whea::pcie_address_t                      address;                  //{ +0x0008    } | .Address
        _m02 uint32_t                                         mask;                     //{ +0x0018    } | .Mask
        _m03 sdk::array<uint32_t, 32>                         correctable_error_count;  //{ +0x001c    } | .CorrectableErrorCount
                                                                                      
        SDK_MAGIC_PROPERTIES( "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES.$", 0x0, false, 0x2b3660bdf24e9cd0 );                        
        SDK_FIXED_SIZE( pcie_correctable_error_devices_t, 0x9c );                        
    };                                                                                
};
#include "magic/pcie_correctable_error_devices_t.end.hpp"
SDK_VERIFY( struct whea::pcie_correctable_error_devices_t, 0x9c );
