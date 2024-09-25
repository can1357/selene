#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win_rt_activation_properties_data_t.start.hpp"
namespace win
{
    struct hstring_t;

    // [struct WinRTActivationPropertiesData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win_rt_activation_properties_data_t           
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 struct win::hstring_t* activatable_class_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .activatableClassId
        _m01 struct win::hstring_t* package_full_name;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .packageFullName
                                                         
        SDK_MAGIC_PROPERTIES( "WinRTActivationPropertiesData.$", 0x10, true, 0x53baba6dd83b2b96 );                     
        SDK_FIXED_SIZE( win_rt_activation_properties_data_t, 0x10 );                     
    };                                                   
};
#include "magic/win_rt_activation_properties_data_t.end.hpp"
SDK_VERIFY( struct win::win_rt_activation_properties_data_t, 0x10 );
