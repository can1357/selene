#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_dll_event_data_t.start.hpp"
namespace win
{
    // [struct _LOAD_DLL_EVENT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct load_dll_event_data_t               
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 sdk::array<wchar_t, 1> image_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageName
                                               
        SDK_MAGIC_PROPERTIES( "_LOAD_DLL_EVENT_DATA.$", 0x2, true, 0xf95829d84506c04f );           
        SDK_FIXED_SIZE( load_dll_event_data_t, 0x2 );           
    };                                         
};
#include "magic/load_dll_event_data_t.end.hpp"
SDK_VERIFY( struct win::load_dll_event_data_t, 0x2 );
