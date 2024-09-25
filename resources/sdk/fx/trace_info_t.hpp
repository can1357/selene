#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/trace_info_t.start.hpp"
namespace fx
{
    // [struct FxTraceInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_info_t                                
    {                                                  
        using callback_t = sdk::function<int32_t(uint8_t, void*, uint32_t, void*, void*, uint32_t*)>*;              
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 struct nt::driver_object_t* driver_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverObject
        _m01 callback_t                  callback;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Callback
        _m02 void*                       context;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
                                                       
        SDK_MAGIC_PROPERTIES( "FxTraceInfo.$", 0x18, true, 0x229cc2ff7427946 );              
        SDK_FIXED_SIZE( trace_info_t, 0x18 );              
    };                                                 
};
#include "magic/trace_info_t.end.hpp"
SDK_VERIFY( struct fx::trace_info_t, 0x18 );
