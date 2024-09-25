#pragma once
#include <sdkgen/support_library.hpp>
#include "win_rt_activation_properties_data_t.hpp"

#include "magic/win_rt_activation_properties_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class WinRTActivationProperties]
    // => Windows 10 v1607
    //
    class win_rt_activation_properties_t                                                       
    {                                                                                          
        // Windows 10 v1607                                                                    
        //                                                                                     
        _m00 struct win::i_serializable_parent_t*            parent;                             //{ +0x0010    } | ._parent
        _m01 int32_t                                         un_serialized;                      //{ +0x0018    } | ._unSerialized
        _m02 int32_t                                         added;                              //{ +0x001c    } | ._added
        _m03 struct win::win_rt_activation_properties_data_t win_rt_activation_properties_data;  //{ +0x0020    } | ._winRTActivationPropertiesData
                                                                                               
        SDK_MAGIC_PROPERTIES( "WinRTActivationProperties.$", 0x0, false, 0x24d20bcf64e8ccc7 );                                  
        SDK_FIXED_SIZE( win_rt_activation_properties_t, 0x30 );                                  
    };                                                                                         
};
#include "magic/win_rt_activation_properties_t.end.hpp"
SDK_VERIFY( class win::win_rt_activation_properties_t, 0x30 );
