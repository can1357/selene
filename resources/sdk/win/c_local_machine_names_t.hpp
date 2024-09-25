#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_local_machine_names_t.start.hpp"
namespace win
{
    class c_machine_names_helper_t;

    // [class CLocalMachineNames]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_local_machine_names_t                                 
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                        
        _m00 uint32_t                             l_refs;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._lRefs
        _m01 uint32_t                             dw_cursor;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._dwCursor
        _m02 class win::c_machine_names_helper_t* p_mn_helper;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pMNHelper
        _m03 int32_t                              f_need_new_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._fNeedNewData
                                                                  
        SDK_MAGIC_PROPERTIES( "CLocalMachineNames.$", 0x20, true, 0x37bf33516dd02e6 );                
        SDK_FIXED_SIZE( c_local_machine_names_t, 0x20 );                
    };                                                            
};
#include "magic/c_local_machine_names_t.end.hpp"
SDK_VERIFY( class win::c_local_machine_names_t, 0x20 );
