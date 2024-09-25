#pragma once
#include <sdkgen/support_library.hpp>
#include "c_array_f_value_t.hpp"

#include "magic/c_machine_global_object_table_t.start.hpp"
namespace win
{
    // [class CMachineGlobalObjectTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_machine_global_object_table_t                 
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                
        //                                                
        _m00 class win::c_array_f_value_t afv_mgot_list;    //{ +0x0008    +0x0008    +0x0008    } | ._afvMgotList
        _m01 uint16_t                     w_sig_mgot_item;  //{ +0x0020    +0x0020    +0x0020    } | ._wSigMgotItem
                                                          
        SDK_MAGIC_PROPERTIES( "CMachineGlobalObjectTable.$", 0x30, true, 0xaed2ea3c8c7ebd8e );                
        SDK_DYNAMIC_SIZE( c_machine_global_object_table_t );                
    };                                                    
};
#include "magic/c_machine_global_object_table_t.end.hpp"
