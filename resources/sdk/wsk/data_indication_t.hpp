#pragma once
#include <sdkgen/support_library.hpp>
#include "buf_t.hpp"

#include "magic/data_indication_t.start.hpp"
namespace wsk
{
    struct data_indication_t;

    // [struct _WSK_DATA_INDICATION]
    // => WDK 10 (NV)
    //
    struct data_indication_t                       
    {                                              
        // WDK 10                                  
        //                                         
        _m00 struct wsk::data_indication_t* next;    //{ +0x0000    } | .Next
        _m01 struct wsk::buf_t              buffer;  //{ +0x0008    } | .Buffer
                                                   
        SDK_NONVOL_PROPERTIES( "_WSK_DATA_INDICATION.$", 0x0, false, 0x92453fd8afba709e );       
        SDK_FIXED_SIZE( data_indication_t, 0x20 );       
    };                                             
};
#include "magic/data_indication_t.end.hpp"
SDK_VERIFY( struct wsk::data_indication_t, 0x20 );
