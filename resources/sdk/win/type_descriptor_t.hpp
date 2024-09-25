#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/type_descriptor_t.start.hpp"
namespace win
{
    // [struct _TypeDescriptor]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct type_descriptor_t             
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                               
        _m00 const void*      p_vf_table;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pVFTable
        _m01 sdk::array<char> name;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .name
                                         
        SDK_MAGIC_PROPERTIES( "_TypeDescriptor.$", 0x10, true, 0x6488779623e57cc2 );           
        SDK_FIXED_SIZE( type_descriptor_t, 0x10 );           
    };                                   
};
#include "magic/type_descriptor_t.end.hpp"
SDK_VERIFY( struct win::type_descriptor_t, 0x10 );
