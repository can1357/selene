#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hmap_directory_t.start.hpp"
namespace nt
{
    struct hmap_table_t;

    // [struct _HMAP_DIRECTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hmap_directory_t                                       
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                        
        _m00 sdk::array<struct nt::hmap_table_t*, 1024> directory;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Directory
                                                                  
        SDK_MAGIC_PROPERTIES( "_HMAP_DIRECTORY.$", 0x2000, true, 0x9f3fcddf3de9f2b );          
        SDK_FIXED_SIZE( hmap_directory_t, 0x2000 );               
    };                                                            
};
#include "magic/hmap_directory_t.end.hpp"
SDK_VERIFY( struct nt::hmap_directory_t, 0x2000 );
