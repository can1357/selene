#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_break_reservation_request_t.start.hpp"
namespace nt
{
    // [struct STORAGE_BREAK_RESERVATION_REQUEST]
    // => WDK 10 (NV)
    //
    struct storage_break_reservation_request_t
    {                                         
        // WDK 10               
        //                      
        _m00 uint32_t length;                   //{ +0x0000    } | .Length
        _m01 uint8_t  unused;                   //{ +0x0004    } | ._unused
        _m02 uint8_t  path_id;                  //{ +0x0005    } | .PathId
        _m03 uint8_t  target_id;                //{ +0x0006    } | .TargetId
        _m04 uint8_t  lun;                      //{ +0x0007    } | .Lun
                                              
        SDK_NONVOL_PROPERTIES( "STORAGE_BREAK_RESERVATION_REQUEST.$", 0x0, false, 0xc406525ddb38a4bc );          
        SDK_FIXED_SIZE( storage_break_reservation_request_t, 0x8 );          
    };                                        
};
#include "magic/storage_break_reservation_request_t.end.hpp"
SDK_VERIFY( struct nt::storage_break_reservation_request_t, 0x8 );
