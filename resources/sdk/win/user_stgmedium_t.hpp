#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_stgmedium_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct _userSTGMEDIUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_stgmedium_t                             
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 struct win::i_unknown_t* p_unk_for_release;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pUnkForRelease
                                                        
        SDK_MAGIC_PROPERTIES( "_userSTGMEDIUM.$", 0x8, true, 0xf0e3f43746080526 );                  
        SDK_FIXED_SIZE( user_stgmedium_t, 0x8 );                  
    };                                                  
};
#include "magic/user_stgmedium_t.end.hpp"
SDK_VERIFY( struct win::user_stgmedium_t, 0x8 );
