#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct mdl_t;               }
namespace wdf { struct wdfdevice_t;         }
namespace wdf { struct wdfdmatransaction_t; }

#include "magic/dma_transaction_configure_channel_t.start.hpp"
namespace fx
{
    // [class FxDmaTransactionConfigureChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class dma_transaction_configure_channel_t                        
    {                                                                
        using pfn_wdf_dma_transaction_configure_dma_channel_t = sdk::function<uint8_t(struct wdf::wdfdmatransaction_t*, struct wdf::wdfdevice_t*, void*, struct nt::mdl_t*, uint64_t, uint64_t)>*;       
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                           
        _m00 pfn_wdf_dma_transaction_configure_dma_channel_t  method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
                                                                     
        SDK_MAGIC_PROPERTIES( "FxDmaTransactionConfigureChannel.$", 0x8, true, 0xe9ad2b41f6d30115 );       
        SDK_FIXED_SIZE( dma_transaction_configure_channel_t, 0x8 );       
    };                                                               
};
#include "magic/dma_transaction_configure_channel_t.end.hpp"
SDK_VERIFY( class fx::dma_transaction_configure_channel_t, 0x8 );
