#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/s_window_data_t.hpp"

#include "magic/c_apt_call_ctrl_t.start.hpp"
namespace win
{
    class c_cli_modal_loop_t;
    struct i_message_filter_t;

    // [class CAptCallCtrl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_apt_call_ctrl_t                                             
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                              
        _m00 int32_t                                    f_in_msg_filter;  //{ +0x0008    +0x0000    +0x0000    +0x0000    } | ._fInMsgFilter
        _m01 class win::c_cli_modal_loop_t*             p_top_cml;        //{ +0x0010    +0x0008    +0x0008    +0x0008    } | ._pTopCML
        _m02 sdk::array<struct tag::s_window_data_t, 2> wd;               //{ +0x0018    +0x0010    +0x0010    +0x0010    } | ._WD
                                                                        
        // Windows 10 v1607                                             
        //                                                              
        _m03 struct win::i_message_filter_t*            p_mf;             //{ +0x0000    } | ._pMF
                                                                        
        SDK_MAGIC_PROPERTIES( "CAptCallCtrl.$", 0x30, true, 0xf443fcdf7c2918be );                
        SDK_DYNAMIC_SIZE( c_apt_call_ctrl_t );                          
    };                                                                  
};
#include "magic/c_apt_call_ctrl_t.end.hpp"
