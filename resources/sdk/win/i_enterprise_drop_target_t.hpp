#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnterpriseDropTarget]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enterprise_drop_target_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IEnterpriseDropTarget.$", 0x8, true, 0xe79d2b95c61106d6 );
        SDK_FIXED_SIZE( i_enterprise_drop_target_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_enterprise_drop_target_t, 0x8 );
