#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDmaPacketTransactionStatus]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_packet_transaction_status_t : int32_t
    {                                                   
        completed = 0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending =   0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
