#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"
#include "../rtl/srwlock_t.hpp"

#include "magic/c_extension_registrations_iterator_t.start.hpp"
namespace win
{
    // [class CExtensionRegistrationsIterator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_extension_registrations_iterator_t                              
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 const class win::opaque_string_t contract_id;                    //{ +0x0048    +0x0050    +0x0050    +0x0050    } | ._contractId
        _m01 uint32_t                         next_class_index;               //{ +0x00a8    +0x0060    +0x0060    +0x0060    } | ._nextClassIndex
                                                                            
        // Windows 10 v1607                                                 
        //                                                                  
        _m02 struct rtl::srwlock_t            iterator_srw_lock;              //{ +0x0040    } | ._iteratorSRWLock
        _m03 const class win::opaque_string_t package_family_name;            //{ +0x0050    } | ._packageFamilyName
        _m04 class win::opaque_string_t       package_name;                   //{ +0x0058    } | ._packageName
        _m05 bool                             f_processing_inbox_apps_store;  //{ +0x0078    } | ._fProcessingInboxAppsStore
        _m06 uint32_t                         current_package_index;          //{ +0x0090    } | ._currentPackageIndex
        _m07 class win::opaque_string_t       current_package_id;             //{ +0x0098    } | ._currentPackageId
                                                                            
        SDK_MAGIC_PROPERTIES( "CExtensionRegistrationsIterator.$", 0x70, true, 0x4df1059ec4b946e8 );                              
        SDK_DYNAMIC_SIZE( c_extension_registrations_iterator_t );                              
    };                                                                      
};
#include "magic/c_extension_registrations_iterator_t.end.hpp"
