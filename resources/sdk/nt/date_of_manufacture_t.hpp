#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/date_of_manufacture_t.start.hpp"
namespace nt
{
    // [struct _DATE_OF_MANUFACTURE]
    // => WDK 10 (NV)
    //
    struct date_of_manufacture_t         
    {                                    
        // WDK 10                        
        //                               
        _m00 sdk::array<uint8_t, 4> year;  //{ +0x0000    } | .Year
        _m01 sdk::array<uint8_t, 2> week;  //{ +0x0004    } | .Week
                                         
        SDK_NONVOL_PROPERTIES( "_DATE_OF_MANUFACTURE.$", 0x0, false, 0xfc82770ecce6994a );     
        SDK_FIXED_SIZE( date_of_manufacture_t, 0x6 );     
    };                                   
};
#include "magic/date_of_manufacture_t.end.hpp"
SDK_VERIFY( struct nt::date_of_manufacture_t, 0x6 );
