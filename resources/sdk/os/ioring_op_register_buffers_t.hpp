#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_op_flags_t.hpp"
#include "ioring_reg_buffers_flags_t.hpp"

namespace nt { struct ioring_buffer_info_t; }

#include "magic/ioring_op_register_buffers_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_OP_REGISTER_BUFFERS]
    // => Windows 11
    //
    struct ioring_op_register_buffers_t                            
    {                                                              
        // Windows 11                                              
        //                                                         
        _m00 enum os::ioring_op_flags_t            common_op_flags;  //{ +0x0000    } | .CommonOpFlags
        _m01 struct os::ioring_reg_buffers_flags_t flags;            //{ +0x0004    } | .Flags
        _m02 uint32_t                              count;            //{ +0x000c    } | .Count
        _m03 struct nt::ioring_buffer_info_t*      buffers;          //{ +0x0010    } | .Buffers
                                                                   
        SDK_MAGIC_PROPERTIES( "_NT_IORING_OP_REGISTER_BUFFERS.$", 0x0, false, 0xddea0e5a7c38fbf1 );                
        SDK_FIXED_SIZE( ioring_op_register_buffers_t, 0x18 );                
    };                                                             
};
#include "magic/ioring_op_register_buffers_t.end.hpp"
SDK_VERIFY( struct os::ioring_op_register_buffers_t, 0x18 );
