#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComObjIdentity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_obj_identity_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IComObjIdentity.$", 0x8, true, 0xd57a0504d08f67f3 );
        SDK_FIXED_SIZE( i_com_obj_identity_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_com_obj_identity_t, 0x8 );
