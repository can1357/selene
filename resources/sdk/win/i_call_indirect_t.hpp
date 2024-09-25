#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallIndirect]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_indirect_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "ICallIndirect.$", 0x8, true, 0xcd20415591e8fa84 );
        SDK_FIXED_SIZE( i_call_indirect_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_call_indirect_t, 0x8 );
