#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_t.start.hpp"
namespace cm
{
    // [struct _CM_KEY_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_value_t                          
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint16_t               signature;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t               name_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 uint32_t               data_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DataLength
        _m03 uint32_t               data;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
        _m04 uint32_t               type;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
        _m05 uint16_t               flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m06 sdk::array<wchar_t, 1> name;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Name
                                                
        SDK_MAGIC_PROPERTIES( "_CM_KEY_VALUE.$", 0x18, true, 0xa03a0e80115b0d48 );            
        SDK_FIXED_SIZE( key_value_t, 0x18 );            
    };                                          
};
#include "magic/key_value_t.end.hpp"
SDK_VERIFY( struct cm::key_value_t, 0x18 );
