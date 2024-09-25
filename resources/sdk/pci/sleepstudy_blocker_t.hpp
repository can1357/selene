#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [struct _SLEEPSTUDY_BLOCKER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sleepstudy_blocker_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_BLOCKER.$", 0x0, true, 0x93f65d8a968f6719 );
        SDK_FIXED_SIZE( sleepstudy_blocker_t, 0x0 );
    };                         
};
SDK_VERIFY( struct pci::sleepstudy_blocker_t, 0x0 );
