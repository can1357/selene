#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_id_t.hpp"

#include "magic/file_layout_info_entry_t.start.hpp"
namespace win
{
    // [struct _FILE_LAYOUT_INFO_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_layout_info_entry_t                            
    {                                                          
        struct u0_basic_information_t                          
        {                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                 
            _m00 int64_t  creation_time;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreationTime
            _m01 int64_t  last_access_time;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LastAccessTime
            _m02 int64_t  last_write_time;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastWriteTime
            _m03 int64_t  change_time;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ChangeTime
            _m04 uint32_t file_attributes;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FileAttributes
                                                               
            SDK_NONVOL_PROPERTIES( "_FILE_LAYOUT_INFO_ENTRY.BasicInformation.$", 0x28, true, 0x1af793d6c006d0fd );                                    
            SDK_FIXED_SIZE( u0_basic_information_t, 0x28 );                                    
        };                                                     
                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m05 u0_basic_information_t         basic_information;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInformation
        _m06 uint32_t                       owner_id;            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .OwnerId
        _m07 uint32_t                       security_id;         //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .SecurityId
        _m08 int64_t                        usn;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Usn
                                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m09 enum win::storage_reserve_id_t storage_reserve_id;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .StorageReserveId
                                                               
        SDK_NONVOL_PROPERTIES( "_FILE_LAYOUT_INFO_ENTRY.$", 0x40, true, 0xcd6a769efc8d106f );                   
        SDK_DYNAMIC_SIZE( file_layout_info_entry_t );                   
    };                                                         
};
#include "magic/file_layout_info_entry_t.end.hpp"
SDK_VERIFY( struct win::file_layout_info_entry_t::u0_basic_information_t, 0x28 );
