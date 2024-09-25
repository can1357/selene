#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/status_block_t.hpp"

#include "magic/ioring_cqe_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_CQE]
    // => Windows 11
    //
    struct ioring_cqe_t                                          
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 uint64_t                  user_data;                  //{ +0x0000    } | .UserData
        _m01 uint64_t                  padding_user_data_for_wow;  //{ +0x0000    } | .PaddingUserDataForWow
        _m02 struct io::status_block_t io_status;                  //{ +0x0008    } | .IoStatus
                                                                 
        SDK_MAGIC_PROPERTIES( "_NT_IORING_CQE.$", 0x0, false, 0xffeb9e0a17ac741a );                          
        SDK_FIXED_SIZE( ioring_cqe_t, 0x18 );                          
    };                                                           
};
#include "magic/ioring_cqe_t.end.hpp"
SDK_VERIFY( struct os::ioring_cqe_t, 0x18 );
