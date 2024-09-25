#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hpx_type_2_t.start.hpp"
namespace pci
{
    // [struct _HPX_TYPE_2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hpx_type_2_t                                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                            
        _m00 sdk::array<uint32_t, 2> uncorrectable_error_mask;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UncorrectableErrorMask
        _m01 sdk::array<uint32_t, 2> uncorrectable_error_severity;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UncorrectableErrorSeverity
        _m02 sdk::array<uint32_t, 2> correctable_error_mask;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CorrectableErrorMask
        _m03 sdk::array<uint32_t, 2> capabilities_and_control;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CapabilitiesAndControl
        _m04 sdk::array<uint32_t, 2> device_control;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceControl
        _m05 sdk::array<uint32_t, 2> link_control;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LinkControl
        _m06 sdk::array<uint32_t, 2> sec_uncorrectable_error_severity;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SecUncorrectableErrorSeverity
        _m07 sdk::array<uint32_t, 2> sec_uncorrectable_error_mask;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SecUncorrectableErrorMask
                                                                      
        SDK_MAGIC_PROPERTIES( "_HPX_TYPE_2.$", 0x40, true, 0xadfd1cf2fe76237c );                                 
        SDK_FIXED_SIZE( hpx_type_2_t, 0x40 );                                 
    };                                                                
};
#include "magic/hpx_type_2_t.end.hpp"
SDK_VERIFY( struct pci::hpx_type_2_t, 0x40 );
