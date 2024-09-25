#pragma once
#include <sdkgen/support_library.hpp>
#include "fpb_capability_t.hpp"
#include "fpb_pdo_resource_t.hpp"
#include "fpb_pdo_static_flags_t.hpp"
#include "fpb_pdo_dynamic_flags_t.hpp"
#include "fpb_capability_support_t.hpp"

#include "magic/fpb_pdo_t.start.hpp"
namespace pci
{
    struct device_t;
    struct fpb_fdo_t;

    // [struct _PCI_FPB_PDO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_pdo_t                                              
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                        
        _m00 struct pci::device_t*               device;            //{ +0x0000    +0x0000    +0x0000    } | .Device
        _m01 struct pci::fpb_fdo_t*              parent;            //{ +0x0008    +0x0008    +0x0008    } | .Parent
        _m02 struct pci::fpb_capability_t        fpb_capability;    //{ +0x0010    +0x0010    +0x0010    } | .FpbCapability
        _m03 union pci::fpb_pdo_static_flags_t   flags_static;      //{ +0x0034    +0x0034    +0x0034    } | .FlagsStatic
        _m04 union pci::fpb_pdo_dynamic_flags_t  flags_runtime;     //{ +0x0038    +0x0038    +0x0038    } | .FlagsRuntime
        _m05 union pci::fpb_capability_support_t fpb_support_info;  //{ +0x003c    +0x003c    +0x003c    } | .FpbSupportInfo
        _m06 struct pci::fpb_pdo_resource_t      resource;          //{ +0x0040    +0x0040    +0x0040    } | .Resource
                                                                  
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_PDO.$", 0xe8, true, 0x5ec6953be5fbdb2a );                 
        SDK_FIXED_SIZE( fpb_pdo_t, 0xe8 );                        
    };                                                            
};
#include "magic/fpb_pdo_t.end.hpp"
SDK_VERIFY( struct pci::fpb_pdo_t, 0xe8 );
