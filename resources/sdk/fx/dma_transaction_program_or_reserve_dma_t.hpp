#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/dma_direction_t.hpp"

namespace nt  { struct scatter_gather_list_t; }
namespace wdf { struct wdfdevice_t;           }
namespace wdf { struct wdfdmatransaction_t;   }

#include "magic/dma_transaction_program_or_reserve_dma_t.start.hpp"
namespace fx
{
    // [class FxDmaTransactionProgramOrReserveDma]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class dma_transaction_program_or_reserve_dma_t         
    {                                                      
        union u0_method_t                                  
        {                                                  
            using pfn_wdf_program_dma_t = sdk::function<uint8_t(struct wdf::wdfdmatransaction_t*, struct wdf::wdfdevice_t*, void*, enum wdf::dma_direction_t, struct nt::scatter_gather_list_t*)>*;                   
            using pfn_wdf_reserve_dma_t = sdk::function<void(struct wdf::wdfdmatransaction_t*, void*)>*;                   
                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                             
            _m00 pfn_wdf_program_dma_t  program_dma;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProgramDma
            _m01 pfn_wdf_reserve_dma_t  reserve_dma;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReserveDma
                                                           
            SDK_MAGIC_PROPERTIES( "FxDmaTransactionProgramOrReserveDma.Method.$", 0x8, true, 0xffba32f9b194223d );                   
            SDK_FIXED_SIZE( u0_method_t, 0x8 );                   
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m02 u0_method_t                            method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
                                                           
        SDK_MAGIC_PROPERTIES( "FxDmaTransactionProgramOrReserveDma.$", 0x8, true, 0x74e9ca764bbae390 );       
        SDK_FIXED_SIZE( dma_transaction_program_or_reserve_dma_t, 0x8 );       
    };                                                     
};
#include "magic/dma_transaction_program_or_reserve_dma_t.end.hpp"
SDK_VERIFY( union fx::dma_transaction_program_or_reserve_dma_t::u0_method_t, 0x8 );
SDK_VERIFY( class fx::dma_transaction_program_or_reserve_dma_t, 0x8 );
