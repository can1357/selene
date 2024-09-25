#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_RCB]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_rcb_t : int32_t
    {                                 
        rcb64_bytes =  0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rcb128_bytes = 0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
