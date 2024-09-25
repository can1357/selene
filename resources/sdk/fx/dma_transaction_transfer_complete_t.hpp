#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/dma_direction_t.hpp"
#include "../dma/completion_status_t.hpp"

namespace wdf { struct wdfdevice_t;         }
namespace wdf { struct wdfdmatransaction_t; }

#include "magic/dma_transaction_transfer_complete_t.start.hpp"
namespace fx
{
    // [class FxDmaTransactionTransferComplete]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class dma_transaction_transfer_complete_t                        
    {                                                                
        using pfn_wdf_dma_transaction_dma_transfer_complete_t = sdk::function<void(struct wdf::wdfdmatransaction_t*, struct wdf::wdfdevice_t*, void*, enum wdf::dma_direction_t, enum dma::completion_status_t)>*;       
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                           
        _m00 pfn_wdf_dma_transaction_dma_transfer_complete_t  method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
                                                                     
        SDK_MAGIC_PROPERTIES( "FxDmaTransactionTransferComplete.$", 0x8, true, 0x9a8ce313ec40a621 );       
        SDK_FIXED_SIZE( dma_transaction_transfer_complete_t, 0x8 );       
    };                                                               
};
#include "magic/dma_transaction_transfer_complete_t.end.hpp"
SDK_VERIFY( class fx::dma_transaction_transfer_complete_t, 0x8 );
