#pragma once
#include <sdkgen/support_library.hpp>
#include "dump_entry_t.hpp"
#include "storage_dump_usage_t.hpp"
#include "storage_dump_action_t.hpp"

#include "magic/storage_dump_info_t.start.hpp"
namespace stor::port
{
    struct dump_disk_info_t;

    // [struct _STORAGE_DUMP_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storage_dump_info_t                                   
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                       
        _m00 uint32_t                               version;       //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 enum stor::port::storage_dump_usage_t  usage;         //{ +0x0004    +0x0004    +0x0004    } | .Usage
        _m02 enum stor::port::storage_dump_action_t action;        //{ +0x0008    +0x0008    +0x0008    } | .Action
        _m03 struct stor::port::dump_disk_info_t*   root_disk;     //{ +0x0010    +0x0010    +0x0010    } | .RootDisk
        _m04 struct stor::port::dump_entry_t        disk_list;     //{ +0x0018    +0x0018    +0x0018    } | .DiskList
        _m05 struct stor::port::dump_entry_t        adapter_list;  //{ +0x0028    +0x0028    +0x0028    } | .AdapterList
        _m06 struct stor::port::dump_entry_t        driver_list;   //{ +0x0038    +0x0038    +0x0038    } | .DriverList
                                                                 
        SDK_MAGIC_PROPERTIES( "_STORAGE_DUMP_INFO.$", 0x48, true, 0xd86a3ab4e076c30f );             
        SDK_FIXED_SIZE( storage_dump_info_t, 0x48 );             
    };                                                           
};
#include "magic/storage_dump_info_t.end.hpp"
SDK_VERIFY( struct stor::port::storage_dump_info_t, 0x48 );
