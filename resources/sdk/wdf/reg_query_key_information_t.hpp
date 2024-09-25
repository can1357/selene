#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/key_information_class_t.hpp"

#include "magic/reg_query_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_QUERY_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_query_key_information_t                              
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m00 void*                            object;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 enum nt::key_information_class_t key_information_class;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyInformationClass
        _m02 void*                            key_information;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .KeyInformation
        _m03 uint32_t                         length;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
        _m04 uint32_t*                        result_length;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ResultLength
        _m05 void*                            call_context;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CallContext
        _m06 void*                            object_context;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ObjectContext
                                                                    
        SDK_NONVOL_PROPERTIES( "_REG_QUERY_KEY_INFORMATION.$", 0x40, true, 0xa6bbaa197224bad8 );                      
        SDK_FIXED_SIZE( reg_query_key_information_t, 0x40 );                      
    };                                                              
};
#include "magic/reg_query_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_query_key_information_t, 0x40 );
