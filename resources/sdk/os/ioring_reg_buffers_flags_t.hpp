#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_reg_buffers_adv_flags_t.hpp"
#include "ioring_reg_buffers_req_flags_t.hpp"

#include "magic/ioring_reg_buffers_flags_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_REG_BUFFERS_FLAGS]
    // => Windows 11
    //
    struct ioring_reg_buffers_flags_t                         
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 enum os::ioring_reg_buffers_req_flags_t required;  //{ +0x0000    } | .Required
        _m01 enum os::ioring_reg_buffers_adv_flags_t advisory;  //{ +0x0004    } | .Advisory
                                                              
        SDK_MAGIC_PROPERTIES( "_NT_IORING_REG_BUFFERS_FLAGS.$", 0x0, false, 0xbf37fcddacdfb8a2 );         
        SDK_FIXED_SIZE( ioring_reg_buffers_flags_t, 0x8 );         
    };                                                        
};
#include "magic/ioring_reg_buffers_flags_t.end.hpp"
SDK_VERIFY( struct os::ioring_reg_buffers_flags_t, 0x8 );
