#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_callback_information_t.start.hpp"
namespace win
{
    struct minidump_callback_input_t;
    struct minidump_callback_output_t;

    // [struct _MINIDUMP_CALLBACK_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_callback_information_t                 
    {                                                      
        using minidump_callback_routine_t = sdk::function<int32_t(void*, struct win::minidump_callback_input_t*, struct win::minidump_callback_output_t*)>*;                 
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 minidump_callback_routine_t  callback_routine;  //{ +0x0000    +0x0000    +0x0000    } | .CallbackRoutine
        _m01 void*                        callback_param;    //{ +0x0008    +0x0008    +0x0008    } | .CallbackParam
                                                           
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_CALLBACK_INFORMATION.$", 0x10, true, 0xaa5e2712ccb30f08 );                 
        SDK_FIXED_SIZE( minidump_callback_information_t, 0x10 );                 
    };                                                     
};
#include "magic/minidump_callback_information_t.end.hpp"
SDK_VERIFY( struct win::minidump_callback_information_t, 0x10 );
