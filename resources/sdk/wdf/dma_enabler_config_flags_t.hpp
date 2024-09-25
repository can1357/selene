#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_DMA_ENABLER_CONFIG_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_enabler_config_flags_t : int32_t
    {                                              
        no_sglist_preallocation = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        require_single_transfer = 0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
