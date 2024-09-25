#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wrapper_ptr_size_type_t.start.hpp"
namespace tlg
{
    // [struct _tlgWrapperPtrSizeType]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wrapper_ptr_size_type_t  
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                          
        _m00 const void const* ptr;   //{ +0x0000    +0x0000    +0x0000    } | .Ptr
        _m01 const uint32_t    size;  //{ +0x0008    +0x0008    +0x0008    } | .Size
                                    
        SDK_MAGIC_PROPERTIES( "_tlgWrapperPtrSizeType.$", 0x10, true, 0x6599d0fb098ea518 );     
        SDK_FIXED_SIZE( wrapper_ptr_size_type_t, 0x10 );     
    };                              
};
#include "magic/wrapper_ptr_size_type_t.end.hpp"
SDK_VERIFY( struct tlg::wrapper_ptr_size_type_t, 0x10 );
