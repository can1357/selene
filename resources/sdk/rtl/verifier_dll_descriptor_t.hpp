#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_dll_descriptor_t.start.hpp"
namespace rtl
{
    struct verifier_thunk_descriptor_t;

    // [struct _RTL_VERIFIER_DLL_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_dll_descriptor_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                        
        _m00 wchar_t*                                 dll_name;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DllName
        _m01 uint32_t                                 dll_flags;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DllFlags
        _m02 void*                                    dll_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DllAddress
        _m03 struct rtl::verifier_thunk_descriptor_t* dll_thunks;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DllThunks
                                                                  
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_DLL_DESCRIPTOR.$", 0x20, true, 0xb50a82e8d766e23b );            
        SDK_FIXED_SIZE( verifier_dll_descriptor_t, 0x20 );            
    };                                                            
};
#include "magic/verifier_dll_descriptor_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_dll_descriptor_t, 0x20 );
