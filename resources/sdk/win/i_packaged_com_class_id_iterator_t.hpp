#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPackagedComClassIdIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_packaged_com_class_id_iterator_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "IPackagedComClassIdIterator.$", 0x8, true, 0x5d475497c8443adc );
        SDK_FIXED_SIZE( i_packaged_com_class_id_iterator_t, 0x8 );
    };                                       
};
SDK_VERIFY( struct win::i_packaged_com_class_id_iterator_t, 0x8 );
