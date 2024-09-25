#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_data_winrt_activatable_class_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_data_winrt_activatable_class_t
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t size;                                   //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;                                  //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t dll_path_length;                        //{ +0x0008    +0x0008    +0x0008    } | .DllPathLength
        _m03 uint32_t dll_path_offset;                        //{ +0x000c    +0x000c    +0x000c    } | .DllPathOffset
        _m04 uint32_t threading_model;                        //{ +0x0010    +0x0010    +0x0010    } | .ThreadingModel
                                                            
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS.$", 0x14, true, 0xa668fcf4a2162f4d );                
        SDK_FIXED_SIZE( activation_context_data_winrt_activatable_class_t, 0x14 );                
    };                                                      
};
#include "magic/activation_context_data_winrt_activatable_class_t.end.hpp"
SDK_VERIFY( struct win::activation_context_data_winrt_activatable_class_t, 0x14 );
