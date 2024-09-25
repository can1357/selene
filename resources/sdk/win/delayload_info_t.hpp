#pragma once
#include <sdkgen/support_library.hpp>
#include "delayload_proc_descriptor_t.hpp"

namespace image { struct delayload_descriptor_t; }
namespace image { struct thunk_data64_t;         }

#include "magic/delayload_info_t.start.hpp"
namespace win
{
    // [struct _DELAYLOAD_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct delayload_info_t                                                    
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m00 uint32_t                                    size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 const struct image::delayload_descriptor_t* delayload_descriptor;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DelayloadDescriptor
        _m02 struct image::thunk_data64_t*               thunk_address;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ThunkAddress
        _m03 const char*                                 target_dll_name;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetDllName
        _m04 struct win::delayload_proc_descriptor_t     target_api_descriptor;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetApiDescriptor
        _m05 void*                                       target_module_base;     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .TargetModuleBase
        _m06 uint32_t                                    last_error;             //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .LastError
                                                                               
        SDK_NONVOL_PROPERTIES( "_DELAYLOAD_INFO.$", 0x48, true, 0xf189523344ba7f5 );                      
        SDK_FIXED_SIZE( delayload_info_t, 0x48 );                              
    };                                                                         
};
#include "magic/delayload_info_t.end.hpp"
SDK_VERIFY( struct win::delayload_info_t, 0x48 );
