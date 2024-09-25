#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRecordInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_record_info_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IRecordInfo.$", 0x8, true, 0xffcf1878d97028db );
        SDK_FIXED_SIZE( i_record_info_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_record_info_t, 0x8 );
