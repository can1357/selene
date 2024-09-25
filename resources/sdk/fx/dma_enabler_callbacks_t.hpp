#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDmaEnablerCallbacks]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_enabler_callbacks_t : int32_t
    {                                           
        invalid =               0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fill =                  0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush =                 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable =                0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable =               0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        self_managed_io_start = 0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        self_managed_io_stop =  0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
