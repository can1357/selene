#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPackagedComProgIdIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_packaged_com_prog_id_iterator_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IPackagedComProgIdIterator.$", 0x8, true, 0xcf50065ad384bb3d );
        SDK_FIXED_SIZE( i_packaged_com_prog_id_iterator_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_packaged_com_prog_id_iterator_t, 0x8 );
