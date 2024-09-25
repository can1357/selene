#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDummyHICONIncluder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_dummy_hicon_includer_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IDummyHICONIncluder.$", 0x8, true, 0xc41a1787bc269e28 );
        SDK_FIXED_SIZE( i_dummy_hicon_includer_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_dummy_hicon_includer_t, 0x8 );
