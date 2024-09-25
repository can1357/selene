#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_op_flags_t.hpp"
#include "ioring_reg_files_flags_t.hpp"

#include "magic/ioring_op_register_files_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_OP_REGISTER_FILES]
    // => Windows 11
    //
    struct ioring_op_register_files_t                            
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 enum os::ioring_op_flags_t          common_op_flags;  //{ +0x0000    } | .CommonOpFlags
        _m01 struct os::ioring_reg_files_flags_t flags;            //{ +0x0004    } | .Flags
        _m02 uint32_t                            count;            //{ +0x000c    } | .Count
        _m03 void**                              handles;          //{ +0x0010    } | .Handles
                                                                 
        SDK_MAGIC_PROPERTIES( "_NT_IORING_OP_REGISTER_FILES.$", 0x0, false, 0xfd4d50c1685895f1 );                
        SDK_FIXED_SIZE( ioring_op_register_files_t, 0x18 );                
    };                                                           
};
#include "magic/ioring_op_register_files_t.end.hpp"
SDK_VERIFY( struct os::ioring_op_register_files_t, 0x18 );
