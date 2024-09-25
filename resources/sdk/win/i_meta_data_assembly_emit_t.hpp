#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataAssemblyEmit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_assembly_emit_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IMetaDataAssemblyEmit.$", 0x8, true, 0x92b555d99204de92 );
        SDK_FIXED_SIZE( i_meta_data_assembly_emit_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_meta_data_assembly_emit_t, 0x8 );
