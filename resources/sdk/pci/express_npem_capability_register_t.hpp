#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_npem_capability_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_NPEM_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_npem_capability_register_t          
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  capable;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Capable
        _m01 uint1_t  reset_capable;                    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ResetCapable
        _m02 uint1_t  ok_capable;                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .OkCapable
        _m03 uint1_t  locate_capable;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .LocateCapable
        _m04 uint1_t  fail_capable;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .FailCapable
        _m05 uint1_t  rebuild_capable;                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .RebuildCapable
        _m06 uint1_t  pfa_capable;                      //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PFACapable
        _m07 uint1_t  hot_spare_capable;                //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HotSpareCapable
        _m08 uint1_t  in_a_critical_array_capable;      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .InACriticalArrayCapable
        _m09 uint1_t  in_a_failed_array_capable;        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .InAFailedArrayCapable
        _m10 uint1_t  invalid_device_type_capable;      //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .InvalidDeviceTypeCapable
        _m11 uint1_t  disabled_capable;                 //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .DisabledCapable
        _m12 uint12_t rsvd;                             //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Rsvd
        _m13 uint8_t  enclosure_specific_capabilities;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .EnclosureSpecificCapabilities
        _m14 uint32_t as_ulong;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                      
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_NPEM_CAPABILITY_REGISTER.$", 0x4, true, 0xa4cbafa4bdcdf75d );                                
        SDK_FIXED_SIZE( express_npem_capability_register_t, 0x4 );                                
    };                                                
};
#include "magic/express_npem_capability_register_t.end.hpp"
SDK_VERIFY( union pci::express_npem_capability_register_t, 0x4 );
