#pragma once
#include <sdkgen/support_library.hpp>
#include "param_attributes_t.hpp"

#include "magic/param_description_t.start.hpp"
namespace win
{
    // [struct PARAM_DESCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct param_description_t                           
    {                                                    
        struct u0_simple_type_t                          
        {                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                           
            _m03 uint8_t type;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
                                                         
            SDK_MAGIC_PROPERTIES( "PARAM_DESCRIPTION.SimpleType.$", 0x2, true, 0xa21029b10dc4b7b2 );                  
            SDK_FIXED_SIZE( u0_simple_type_t, 0x2 );                  
        };                                               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 struct win::param_attributes_t param_attr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ParamAttr
        _m01 uint16_t                       stack_offset;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .StackOffset
        _m02 uint16_t                       type_offset;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TypeOffset
        _m04 u0_simple_type_t               simple_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SimpleType
                                                         
        SDK_MAGIC_PROPERTIES( "PARAM_DESCRIPTION.$", 0x6, true, 0xdfe69deabfee6abf );             
        SDK_FIXED_SIZE( param_description_t, 0x6 );             
    };                                                   
};
#include "magic/param_description_t.end.hpp"
SDK_VERIFY( struct win::param_description_t::u0_simple_type_t, 0x2 );
SDK_VERIFY( struct win::param_description_t, 0x6 );
