#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataAssemblyImport]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_assembly_import_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IMetaDataAssemblyImport.$", 0x8, true, 0x941308923baa0c9 );
        SDK_FIXED_SIZE( i_meta_data_assembly_import_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_meta_data_assembly_import_t, 0x8 );
