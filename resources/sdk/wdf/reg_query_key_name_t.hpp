#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_name_information_t; }

#include "magic/reg_query_key_name_t.start.hpp"
namespace wdf
{
    // [struct _REG_QUERY_KEY_NAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_query_key_name_t                                     
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                          
        _m00 void*                                 object;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 struct nt::object_name_information_t* object_name_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectNameInfo
        _m02 uint32_t                              length;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m03 uint32_t*                             return_length;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ReturnLength
        _m04 void*                                 call_context;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CallContext
        _m05 void*                                 object_context;    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ObjectContext
                                                                    
        SDK_NONVOL_PROPERTIES( "_REG_QUERY_KEY_NAME.$", 0x38, true, 0xdd8957443258d6d7 );                 
        SDK_FIXED_SIZE( reg_query_key_name_t, 0x38 );                 
    };                                                              
};
#include "magic/reg_query_key_name_t.end.hpp"
SDK_VERIFY( struct wdf::reg_query_key_name_t, 0x38 );
