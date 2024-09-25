#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinInetFileStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_inet_file_stream_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IWinInetFileStream.$", 0x8, true, 0x7139da61107c12aa );
        SDK_FIXED_SIZE( i_win_inet_file_stream_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_win_inet_file_stream_t, 0x8 );
