#pragma once
#include <sdkgen/support_library.hpp>
#include "file_storage_tier_class_t.hpp"

#include "magic/file_desired_storage_class_information_t.start.hpp"
namespace win
{
    // [struct _FILE_DESIRED_STORAGE_CLASS_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_desired_storage_class_information_t     
    {                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                              
        _m00 enum win::file_storage_tier_class_t _class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Class
        _m01 uint32_t                            flags;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                                        
        SDK_NONVOL_PROPERTIES( "_FILE_DESIRED_STORAGE_CLASS_INFORMATION.$", 0x8, true, 0xff32d68ffd7c5fec );       
        SDK_FIXED_SIZE( file_desired_storage_class_information_t, 0x8 );       
    };                                                  
};
#include "magic/file_desired_storage_class_information_t.end.hpp"
SDK_VERIFY( struct win::file_desired_storage_class_information_t, 0x8 );
