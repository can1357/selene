#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unload_dll_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_UNLOAD_DLL]
    // => WDK 10 (NV)
    //
    struct unload_dll_t         
    {                           
        // WDK 10               
        //                      
        _m00 void* base_address;  //{ +0x0000    } | .BaseAddress
                                
        SDK_NONVOL_PROPERTIES( "_DBGKM_UNLOAD_DLL.$", 0x0, false, 0x46517a17ee155150 );             
        SDK_FIXED_SIZE( unload_dll_t, 0x8 );             
    };                          
};
#include "magic/unload_dll_t.end.hpp"
SDK_VERIFY( struct dbgkm::unload_dll_t, 0x8 );
