#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDirectWriterLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_direct_writer_lock_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IDirectWriterLock.$", 0x8, true, 0x885156dbae17b54b );
        SDK_FIXED_SIZE( i_direct_writer_lock_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_direct_writer_lock_t, 0x8 );
