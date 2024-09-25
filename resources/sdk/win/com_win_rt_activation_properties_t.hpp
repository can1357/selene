#pragma once
#include <sdkgen/support_library.hpp>
#include "com_win_rt_activation_properties_data_t.hpp"

#include "magic/com_win_rt_activation_properties_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class ComWinRTActivationProperties]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_win_rt_activation_properties_t                                                
    {                                                                                       
        using com_win_rt_activation_properties_data_t = struct win::com_win_rt_activation_properties_data_t;                                      
                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                  
        _m00 struct win::i_serializable_parent_t*     parent;                                 //{ +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                                  un_serialized;                          //{ +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                                  added;                                  //{ +0x001c    +0x001c    +0x001c    } | ._added
        _m03 com_win_rt_activation_properties_data_t  com_win_rt_activation_properties_data;  //{ +0x0020    +0x0020    +0x0020    } | ._comWinRTActivationPropertiesData
                                                                                            
        SDK_MAGIC_PROPERTIES( "ComWinRTActivationProperties.$", 0x58, true, 0x70bf68cf3bea35cd );                                      
        SDK_FIXED_SIZE( com_win_rt_activation_properties_t, 0x58 );                                      
    };                                                                                      
};
#include "magic/com_win_rt_activation_properties_t.end.hpp"
SDK_VERIFY( class win::com_win_rt_activation_properties_t, 0x58 );
