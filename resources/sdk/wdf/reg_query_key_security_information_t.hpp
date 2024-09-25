#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_query_key_security_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_QUERY_KEY_SECURITY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_query_key_security_information_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                  
        _m00 void*     object;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint32_t* security_information;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityInformation
        _m02 void*     security_descriptor;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SecurityDescriptor
        _m03 uint32_t* length;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
        _m04 void*     call_context;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CallContext
        _m05 void*     object_context;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ObjectContext
                                               
        SDK_NONVOL_PROPERTIES( "_REG_QUERY_KEY_SECURITY_INFORMATION.$", 0x38, true, 0xb13086ac148d4420 );                     
        SDK_FIXED_SIZE( reg_query_key_security_information_t, 0x38 );                     
    };                                         
};
#include "magic/reg_query_key_security_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_query_key_security_information_t, 0x38 );
