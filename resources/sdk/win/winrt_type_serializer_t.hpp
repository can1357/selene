#pragma once
#include <sdkgen/support_library.hpp>
#include "winrt_type_serializer_ndr_helper_t.hpp"

#include "magic/winrt_type_serializer_t.start.hpp"
namespace win
{
    // [class WinrtTypeSerializer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_type_serializer_t                                     
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                            
        _m00 class win::winrt_type_serializer_ndr_helper_t ndr_helper;  //{ +0x0028    +0x0030    +0x0030    +0x0030    } | ._ndrHelper
                                                                      
        SDK_MAGIC_PROPERTIES( "WinrtTypeSerializer.$", 0xd8, true, 0x4b9306139515b2d );           
        SDK_DYNAMIC_SIZE( winrt_type_serializer_t );                  
    };                                                                
};
#include "magic/winrt_type_serializer_t.end.hpp"
