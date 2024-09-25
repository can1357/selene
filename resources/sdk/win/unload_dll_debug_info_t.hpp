#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unload_dll_debug_info_t.start.hpp"
namespace win
{
    // [struct _UNLOAD_DLL_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct unload_dll_debug_info_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* lp_base_of_dll;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lpBaseOfDll
                                  
        SDK_NONVOL_PROPERTIES( "_UNLOAD_DLL_DEBUG_INFO.$", 0x8, true, 0xe7f6860906eff55f );               
        SDK_FIXED_SIZE( unload_dll_debug_info_t, 0x8 );               
    };                            
};
#include "magic/unload_dll_debug_info_t.end.hpp"
SDK_VERIFY( struct win::unload_dll_debug_info_t, 0x8 );
