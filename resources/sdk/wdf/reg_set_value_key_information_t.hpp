#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_set_value_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_SET_VALUE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_set_value_key_information_t    
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 void*             object;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 nt::unicode_view* value_name;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueName
        _m02 uint32_t          title_index;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TitleIndex
        _m03 uint32_t          type;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Type
        _m04 void*             data;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
        _m05 uint32_t          data_size;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DataSize
        _m06 void*             call_context;    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CallContext
        _m07 void*             object_context;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ObjectContext
                                              
        SDK_NONVOL_PROPERTIES( "_REG_SET_VALUE_KEY_INFORMATION.$", 0x40, true, 0xc2fdb9b9aa08ffae );               
        SDK_FIXED_SIZE( reg_set_value_key_information_t, 0x40 );               
    };                                        
};
#include "magic/reg_set_value_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_set_value_key_information_t, 0x40 );
