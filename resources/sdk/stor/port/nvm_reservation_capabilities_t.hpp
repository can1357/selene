#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvm_reservation_capabilities_t.start.hpp"
namespace stor::port
{
    // [union NVM_RESERVATION_CAPABILITIES]
    // => Windows 11
    //
    union nvm_reservation_capabilities_t                           
    {                                                              
        // Windows 11                                              
        //                                                         
        _m00 uint1_t persist_through_power_loss;                     //{ +0x0000@0  } | .PersistThroughPowerLoss
        _m01 uint1_t write_exclusive_reservation;                    //{ +0x0000@1  } | .WriteExclusiveReservation
        _m02 uint1_t exclusive_access_reservation;                   //{ +0x0000@2  } | .ExclusiveAccessReservation
        _m03 uint1_t write_exclusive_registrants_only_reservation;   //{ +0x0000@3  } | .WriteExclusiveRegistrantsOnlyReservation
        _m04 uint1_t exclusive_access_registrants_only_reservation;  //{ +0x0000@4  } | .ExclusiveAccessRegistrantsOnlyReservation
        _m05 uint1_t write_exclusive_all_registrants_reservation;    //{ +0x0000@5  } | .WriteExclusiveAllRegistrantsReservation
        _m06 uint1_t exclusive_access_all_registrants_reservation;   //{ +0x0000@6  } | .ExclusiveAccessAllRegistrantsReservation
        _m07 uint8_t as_uchar;                                       //{ +0x0000    } | .AsUchar
                                                                   
        SDK_MAGIC_PROPERTIES( "NVM_RESERVATION_CAPABILITIES.$", 0x0, false, 0x3704ea2fde99a446 );                                              
        SDK_FIXED_SIZE( nvm_reservation_capabilities_t, 0x1 );                                              
    };                                                             
};
#include "magic/nvm_reservation_capabilities_t.end.hpp"
SDK_VERIFY( union stor::port::nvm_reservation_capabilities_t, 0x1 );
