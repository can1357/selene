#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryhistorybufferprecisionin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYHISTORYBUFFERPRECISIONIN]
    // => WDK 10 (NV)
    //
    struct queryhistorybufferprecisionin_t   
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYHISTORYBUFFERPRECISIONIN.$", 0x0, false, 0xe0943df4954e54ce );                       
        SDK_FIXED_SIZE( queryhistorybufferprecisionin_t, 0x4 );                       
    };                                       
};
#include "magic/queryhistorybufferprecisionin_t.end.hpp"
SDK_VERIFY( struct dxgk::queryhistorybufferprecisionin_t, 0x4 );
