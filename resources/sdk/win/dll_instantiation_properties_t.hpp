#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dll_instantiation_properties_t.start.hpp"
namespace win
{
    // [struct DLL_INSTANTIATION_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct dll_instantiation_properties_t                
    {                                                    
        struct u0_dll_class_t                            
        {                                                
                                                         
            SDK_MAGIC_PROPERTIES( "DLL_INSTANTIATION_PROPERTIES._dllClass.$", 0x1, true, 0xa901b9e634652f47 );                   
            SDK_FIXED_SIZE( u0_dll_class_t, 0x1 );                   
        };                                               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                   
        //                                               
        _m00 sdk::array<wchar_t, 261> pz_dll_path;         //{ +0x0000    +0x0000    +0x0000    } | ._pzDllPath
        _m01 uint32_t                 dw_threading_model;  //{ +0x020c    +0x020c    +0x020c    } | ._dwThreadingModel
        _m02 uint32_t                 dw_flags;            //{ +0x0210    +0x0210    +0x0210    } | ._dwFlags
        _m03 uint32_t                 dw_hash;             //{ +0x0214    +0x0214    +0x0214    } | ._dwHash
        _m04 uint32_t                 dw_context;          //{ +0x0218    +0x0218    +0x0218    } | ._dwContext
        _m05 u0_dll_class_t*          dll_class;           //{ +0x0220    +0x0220    +0x0220    } | ._dllClass
                                                         
        SDK_MAGIC_PROPERTIES( "DLL_INSTANTIATION_PROPERTIES.$", 0x228, true, 0xe6e7b6b12ba1a76c );                   
        SDK_FIXED_SIZE( dll_instantiation_properties_t, 0x228 );                   
    };                                                   
};
#include "magic/dll_instantiation_properties_t.end.hpp"
SDK_VERIFY( struct win::dll_instantiation_properties_t::u0_dll_class_t, 0x1 );
SDK_VERIFY( struct win::dll_instantiation_properties_t, 0x228 );
