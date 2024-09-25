#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_reg_files_adv_flags_t.hpp"
#include "ioring_reg_files_req_flags_t.hpp"

#include "magic/ioring_reg_files_flags_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_REG_FILES_FLAGS]
    // => Windows 11
    //
    struct ioring_reg_files_flags_t                         
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 enum os::ioring_reg_files_req_flags_t required;  //{ +0x0000    } | .Required
        _m01 enum os::ioring_reg_files_adv_flags_t advisory;  //{ +0x0004    } | .Advisory
                                                            
        SDK_MAGIC_PROPERTIES( "_NT_IORING_REG_FILES_FLAGS.$", 0x0, false, 0x1a64ac0898847b6 );         
        SDK_FIXED_SIZE( ioring_reg_files_flags_t, 0x8 );         
    };                                                      
};
#include "magic/ioring_reg_files_flags_t.end.hpp"
SDK_VERIFY( struct os::ioring_reg_files_flags_t, 0x8 );
