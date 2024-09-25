#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sl_kmem_cache_value_descriptor_t.start.hpp"
namespace win
{
    // [struct _SL_KMEM_CACHE_VALUE_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sl_kmem_cache_value_descriptor_t     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint16_t               size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t               name_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 uint16_t               type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m03 uint16_t               data_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .DataLength
        _m04 uint32_t               attributes;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
        _m05 sdk::array<wchar_t, 1> name;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
                                                
        SDK_MAGIC_PROPERTIES( "_SL_KMEM_CACHE_VALUE_DESCRIPTOR.$", 0x14, true, 0x4ade48c4a308c68d );            
        SDK_FIXED_SIZE( sl_kmem_cache_value_descriptor_t, 0x14 );            
    };                                          
};
#include "magic/sl_kmem_cache_value_descriptor_t.end.hpp"
SDK_VERIFY( struct win::sl_kmem_cache_value_descriptor_t, 0x14 );
