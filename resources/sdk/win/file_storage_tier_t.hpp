#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "file_storage_tier_class_t.hpp"
#include "file_storage_tier_media_type_t.hpp"

#include "magic/file_storage_tier_t.start.hpp"
namespace win
{
    // [struct _FILE_STORAGE_TIER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_storage_tier_t                                             
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                 
        _m00 struct nt::guid_t                        id;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 sdk::array<wchar_t, 256>                 name;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m02 sdk::array<wchar_t, 256>                 description;           //{ +0x0210    +0x0210    +0x0210    +0x0210    +0x0210    } | .Description
        _m03 uint64_t                                 flags;                 //{ +0x0410    +0x0410    +0x0410    +0x0410    +0x0410    } | .Flags
        _m04 uint64_t                                 provisioned_capacity;  //{ +0x0418    +0x0418    +0x0418    +0x0418    +0x0418    } | .ProvisionedCapacity
        _m05 enum win::file_storage_tier_media_type_t media_type;            //{ +0x0420    +0x0420    +0x0420    +0x0420    +0x0420    } | .MediaType
                                                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                 
        _m06 enum win::file_storage_tier_class_t      _class;                //{ +0x0424    +0x0424    +0x0424    +0x0424    } | .Class
                                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_STORAGE_TIER.$", 0x428, true, 0x15a5530f8b6c4abe );                     
        SDK_FIXED_SIZE( file_storage_tier_t, 0x428 );                      
    };                                                                     
};
#include "magic/file_storage_tier_t.end.hpp"
SDK_VERIFY( struct win::file_storage_tier_t, 0x428 );
