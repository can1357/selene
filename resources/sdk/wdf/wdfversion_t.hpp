#pragma once
#include <sdkgen/support_library.hpp>
#include "wdffunctions_t.hpp"
#include "wdfstructures_t.hpp"

#include "magic/wdfversion_t.start.hpp"
namespace wdf
{
    // [struct _WDFVERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfversion_t                               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 uint32_t                    size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                    func_count;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FuncCount
        _m02 struct wdf::wdffunctions_t  functions;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Functions
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m03 uint32_t                    struct_count;  //{ +0x0e58    +0x0e58    +0x0e58    } | .StructCount
        _m04 struct wdf::wdfstructures_t structures;    //{ +0x0e60    +0x0e60    +0x0e60    } | .Structures
                                                      
        SDK_MAGIC_PROPERTIES( "_WDFVERSION.$", 0x10e8, true, 0x91411d12a891e7c4 );             
        SDK_DYNAMIC_SIZE( wdfversion_t );             
    };                                                
};
#include "magic/wdfversion_t.end.hpp"
