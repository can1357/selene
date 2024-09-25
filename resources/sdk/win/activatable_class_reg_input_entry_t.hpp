#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/activatable_class_reg_input_entry_t.start.hpp"
namespace win
{
    // [struct ActivatableClassRegInputEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activatable_class_reg_input_entry_t      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 const wchar_t*    activatable_class_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .activatableClassId
        _m01 const wchar_t*    package_full_name;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .packageFullName
        _m02 uint64_t          oxid;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .oxid
        _m03 struct nt::guid_t ipid;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ipid
        _m04 uint32_t          dw_flags;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwFlags
        _m05 uint32_t          ul_service_id;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ulServiceId
                                                    
        SDK_MAGIC_PROPERTIES( "ActivatableClassRegInputEntry.$", 0x30, true, 0xd5be77aa0dd35e9f );                     
        SDK_FIXED_SIZE( activatable_class_reg_input_entry_t, 0x30 );                     
    };                                              
};
#include "magic/activatable_class_reg_input_entry_t.end.hpp"
SDK_VERIFY( struct win::activatable_class_reg_input_entry_t, 0x30 );
