#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct UNNAMED_STRUCT_DLL_CLASS_HANDLE]
    // => Windows 11
    //
    struct unnamed_struct_dll_class_handle_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "UNNAMED_STRUCT_DLL_CLASS_HANDLE.$", 0x0, false, 0x1daad5cb0168de35 );
        SDK_FIXED_SIZE( unnamed_struct_dll_class_handle_t, 0x1 );
    };                                      
};
SDK_VERIFY( struct win::unnamed_struct_dll_class_handle_t, 0x1 );
