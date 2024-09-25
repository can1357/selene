#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dll_loaded_notification_data_t.start.hpp"
namespace ldr
{
    // [struct _LDR_DLL_LOADED_NOTIFICATION_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dll_loaded_notification_data_t   
    {                                       
        using full_dll_name_t = sdk::variant<nt::unicode_view*, const nt::unicode_view*>;              
        using base_dll_name_t = sdk::variant<nt::unicode_view*, const nt::unicode_view*>;              
                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                  
        _m00 uint32_t         flags;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 full_dll_name_t  full_dll_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FullDllName
        _m02 base_dll_name_t  base_dll_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BaseDllName
        _m03 void*            dll_base;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DllBase
        _m04 uint32_t         size_of_image;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SizeOfImage
                                            
        SDK_NONVOL_PROPERTIES( "_LDR_DLL_LOADED_NOTIFICATION_DATA.$", 0x28, true, 0xd644d8e976864ea1 );              
        SDK_FIXED_SIZE( dll_loaded_notification_data_t, 0x28 );              
    };                                      
};
#include "magic/dll_loaded_notification_data_t.end.hpp"
SDK_VERIFY( struct ldr::dll_loaded_notification_data_t, 0x28 );
