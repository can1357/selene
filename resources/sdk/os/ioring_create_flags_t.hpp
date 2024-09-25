#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_create_advisory_flags_t.hpp"
#include "ioring_create_required_flags_t.hpp"

#include "magic/ioring_create_flags_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_CREATE_FLAGS]
    // => Windows 11
    //
    struct ioring_create_flags_t                              
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 enum os::ioring_create_required_flags_t required;  //{ +0x0000    } | .Required
        _m01 enum os::ioring_create_advisory_flags_t advisory;  //{ +0x0004    } | .Advisory
                                                              
        SDK_MAGIC_PROPERTIES( "_NT_IORING_CREATE_FLAGS.$", 0x0, false, 0x3ad2a1a2c552a0f1 );         
        SDK_FIXED_SIZE( ioring_create_flags_t, 0x8 );         
    };                                                        
};
#include "magic/ioring_create_flags_t.end.hpp"
SDK_VERIFY( struct os::ioring_create_flags_t, 0x8 );
