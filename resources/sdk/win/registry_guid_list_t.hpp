#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registry_guid_list_t.start.hpp"
namespace win
{
    // [class RegistryGuidList]
    // => Windows 11
    //
    class registry_guid_list_t             
    {                                      
        // Windows 11                      
        //                                 
        _m00 const wchar_t* list_root_path;  //{ +0x0000    } | ._listRootPath
                                           
        SDK_MAGIC_PROPERTIES( "RegistryGuidList.$", 0x0, false, 0xed8c3ed037a465c3 );               
        SDK_FIXED_SIZE( registry_guid_list_t, 0x20 );               
    };                                     
};
#include "magic/registry_guid_list_t.end.hpp"
SDK_VERIFY( class win::registry_guid_list_t, 0x20 );
