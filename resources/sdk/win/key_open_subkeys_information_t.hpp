#pragma once
#include <sdkgen/support_library.hpp>
#include "key_pid_array_t.hpp"

#include "magic/key_open_subkeys_information_t.start.hpp"
namespace win
{
    // [struct _KEY_OPEN_SUBKEYS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_open_subkeys_information_t                         
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                        
        _m00 uint32_t                                   count;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<struct win::key_pid_array_t, 1> key_array;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyArray
                                                                  
        SDK_MAGIC_PROPERTIES( "_KEY_OPEN_SUBKEYS_INFORMATION.$", 0x20, true, 0xf3f91bdd0c2171d8 );          
        SDK_FIXED_SIZE( key_open_subkeys_information_t, 0x20 );          
    };                                                            
};
#include "magic/key_open_subkeys_information_t.end.hpp"
SDK_VERIFY( struct win::key_open_subkeys_information_t, 0x20 );
