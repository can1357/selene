#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pagedir_information_t.start.hpp"
namespace win
{
    // [struct _PAGEDIR_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pagedir_information_t          
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint9_t  dont_use;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DontUse
        _m01 uint48_t page_directory_base;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PageDirectoryBase
                                          
        SDK_MAGIC_PROPERTIES( "_PAGEDIR_INFORMATION.$", 0x8, true, 0x917b062611497763 );                    
        SDK_FIXED_SIZE( pagedir_information_t, 0x8 );                    
    };                                    
};
#include "magic/pagedir_information_t.end.hpp"
SDK_VERIFY( struct win::pagedir_information_t, 0x8 );
