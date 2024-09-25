#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/release_ctrl_unk_callback_data_t.start.hpp"
namespace win
{
    class c_std_identity_t;

    // [struct ReleaseCtrlUnkCallbackData]
    // => Windows 11
    //
    struct release_ctrl_unk_callback_data_t        
    {                                              
        // Windows 11                              
        //                                         
        _m00 class win::c_std_identity_t* p_std_id;  //{ +0x0000    } | .pStdId
        _m01 uint32_t                     dw_type;   //{ +0x0008    } | .dwType
                                                   
        SDK_MAGIC_PROPERTIES( "ReleaseCtrlUnkCallbackData.$", 0x0, false, 0x8f492adba628add2 );         
        SDK_FIXED_SIZE( release_ctrl_unk_callback_data_t, 0x10 );         
    };                                             
};
#include "magic/release_ctrl_unk_callback_data_t.end.hpp"
SDK_VERIFY( struct win::release_ctrl_unk_callback_data_t, 0x10 );
