#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ksattribute_t.start.hpp"
namespace ndis
{
    // [struct KSATTRIBUTE]
    // => Windows 10 v1607
    //
    struct ksattribute_t                 
    {                                    
        // Windows 10 v1607              
        //                               
        _m00 uint32_t          size;       //{ +0x0000    } | .Size
        _m01 uint32_t          flags;      //{ +0x0004    } | .Flags
        _m02 struct nt::guid_t attribute;  //{ +0x0008    } | .Attribute
                                         
        SDK_MAGIC_PROPERTIES( "KSATTRIBUTE.$", 0x0, false, 0x34730f73888e38dd );          
        SDK_FIXED_SIZE( ksattribute_t, 0x18 );          
    };                                   
};
#include "magic/ksattribute_t.end.hpp"
SDK_VERIFY( struct ndis::ksattribute_t, 0x18 );
