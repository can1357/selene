#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NdisIfBlockSource]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class if_block_source_t : int32_t
    {                                     
        public_api =            0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        persisted_net_setup =   0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        persisted_nsi =         0x1,        // Windows 10 v1607
        automatic_lw_filter =   0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //persisted_net_setup = 0x2,        // Windows 10 v1607
        automatic_loopback =    0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //automatic_lw_filter = 0x3,        // Windows 10 v1607
        //automatic_loopback =  0x4,        // Windows 10 v1607
        boot_nic =              0x5,        // Windows 10 v1607
    };                                    
};
