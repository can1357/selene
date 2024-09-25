#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/key_value_information_class_t.hpp"

#include "magic/reg_query_value_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_QUERY_VALUE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_query_value_key_information_t                                    
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                      
        _m00 void*                                  object;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 nt::unicode_view*                      value_name;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueName
        _m02 enum nt::key_value_information_class_t key_value_information_class;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .KeyValueInformationClass
        _m03 void*                                  key_value_information;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyValueInformation
        _m04 uint32_t                               length;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Length
        _m05 uint32_t*                              result_length;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ResultLength
        _m06 void*                                  call_context;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CallContext
        _m07 void*                                  object_context;               //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ObjectContext
                                                                                
        SDK_NONVOL_PROPERTIES( "_REG_QUERY_VALUE_KEY_INFORMATION.$", 0x48, true, 0x744d1f6798c3e795 );                            
        SDK_FIXED_SIZE( reg_query_value_key_information_t, 0x48 );                            
    };                                                                          
};
#include "magic/reg_query_value_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_query_value_key_information_t, 0x48 );
