#pragma once
#include <sdkgen/support_library.hpp>
#include "switch_context_data_t.hpp"
#include "switch_context_attribute_t.hpp"

#include "magic/switch_context_t.start.hpp"
namespace tag
{
    // [struct tagSWITCH_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_context_t                                   
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                    
        _m00 struct tag::switch_context_attribute_t attribute;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Attribute
        _m01 struct tag::switch_context_data_t      data;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
                                                              
        SDK_MAGIC_PROPERTIES( "tagSWITCH_CONTEXT.$", 0x358, true, 0x30ad624695c29017 );          
        SDK_DYNAMIC_SIZE( switch_context_t );                 
    };                                                        
};
#include "magic/switch_context_t.end.hpp"
