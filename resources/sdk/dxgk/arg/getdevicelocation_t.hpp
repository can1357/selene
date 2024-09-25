#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getdevicelocation_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETDEVICELOCATION]
    // => WDK 10 (NV)
    //
    struct getdevicelocation_t               
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint32_t segment_number;          //{ +0x0004    } | .SegmentNumber
        _m02 uint32_t bus_number;              //{ +0x0008    } | .BusNumber
        _m03 uint32_t function_number;         //{ +0x000c    } | .FunctionNumber
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETDEVICELOCATION.$", 0x0, false, 0x16af97dc93007c19 );                       
        SDK_FIXED_SIZE( getdevicelocation_t, 0x10 );                       
    };                                       
};
#include "magic/getdevicelocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getdevicelocation_t, 0x10 );
