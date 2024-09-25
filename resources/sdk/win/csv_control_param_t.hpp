#pragma once
#include <sdkgen/support_library.hpp>
#include "csv_control_op_t.hpp"

#include "magic/csv_control_param_t.start.hpp"
namespace win
{
    // [struct _CSV_CONTROL_PARAM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_control_param_t                    
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                        
        _m00 enum win::csv_control_op_t operation;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Operation
                                                  
        SDK_NONVOL_PROPERTIES( "_CSV_CONTROL_PARAM.$", 0x10, true, 0x70806e58ebb7fce3 );          
        SDK_FIXED_SIZE( csv_control_param_t, 0x10 );          
    };                                            
};
#include "magic/csv_control_param_t.end.hpp"
SDK_VERIFY( struct win::csv_control_param_t, 0x10 );
