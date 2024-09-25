#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activatable_class_revoke_entry_t.start.hpp"
namespace win
{
    // [struct ActivatableClassRevokeEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activatable_class_revoke_entry_t      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                       
        _m00 const wchar_t* activatable_class_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .activatableClassId
        _m01 const wchar_t* package_full_name;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .packageFullName
        _m02 uint32_t       dw_reg;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwReg
                                                 
        SDK_MAGIC_PROPERTIES( "ActivatableClassRevokeEntry.$", 0x18, true, 0x8a0ae73523f0417e );                     
        SDK_FIXED_SIZE( activatable_class_revoke_entry_t, 0x18 );                     
    };                                           
};
#include "magic/activatable_class_revoke_entry_t.end.hpp"
SDK_VERIFY( struct win::activatable_class_revoke_entry_t, 0x18 );
