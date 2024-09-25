#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_pdo_static_flags_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_PDO_STATIC_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fpb_pdo_static_flags_t     
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint1_t  initialized;     //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Initialized
        _m01 uint32_t flags_as_ulong;  //{ +0x0000    +0x0000    +0x0000    } | .FlagsAsULONG
                                     
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_PDO_STATIC_FLAGS.$", 0x4, true, 0x41aa34b340b63783 );               
        SDK_FIXED_SIZE( fpb_pdo_static_flags_t, 0x4 );               
    };                               
};
#include "magic/fpb_pdo_static_flags_t.end.hpp"
SDK_VERIFY( union pci::fpb_pdo_static_flags_t, 0x4 );
