#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_dll_debug_info_t.start.hpp"
namespace win
{
    // [struct _LOAD_DLL_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct load_dll_debug_info_t                
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 void*    h_file;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .hFile
        _m01 void*    lp_base_of_dll;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lpBaseOfDll
        _m02 uint32_t dw_debug_info_file_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .dwDebugInfoFileOffset
        _m03 uint32_t n_debug_info_size;          //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .nDebugInfoSize
        _m04 void*    lp_image_name;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lpImageName
        _m05 uint16_t f_unicode;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .fUnicode
                                                
        SDK_NONVOL_PROPERTIES( "_LOAD_DLL_DEBUG_INFO.$", 0x28, true, 0xb1c1dfb66ec928f4 );                          
        SDK_FIXED_SIZE( load_dll_debug_info_t, 0x28 );                          
    };                                          
};
#include "magic/load_dll_debug_info_t.end.hpp"
SDK_VERIFY( struct win::load_dll_debug_info_t, 0x28 );
