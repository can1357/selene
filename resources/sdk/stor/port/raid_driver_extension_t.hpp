#pragma once
#include <sdkgen/support_library.hpp>
#include "raid_object_type_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/raid_driver_extension_t.start.hpp"
namespace stor::port
{
    struct raid_port_data_t;

    // [struct _RAID_DRIVER_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_driver_extension_t                              
    {                                                           
        struct u0_adapter_list_t                                
        {                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                                  
            _m05 nt::list_entry_t list;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
            _m06 uint32_t         count;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Count
            _m07 uint64_t         lock;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Lock
                                                                
            SDK_MAGIC_PROPERTIES( "_RAID_DRIVER_EXTENSION.AdapterList.$", 0x20, true, 0x2727d34afb120155 );                    
            SDK_FIXED_SIZE( u0_adapter_list_t, 0x20 );                    
        };                                                      
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 enum stor::port::raid_object_type_t  object_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 struct nt::driver_object_t*          driver_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverObject
        _m02 struct stor::port::raid_port_data_t* port_data;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PortData
        _m03 nt::list_entry_t                     driver_link;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DriverLink
        _m04 nt::unicode_view                     registry_path;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RegistryPath
        _m08 u0_adapter_list_t                    adapter_list;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AdapterList
        _m09 uint32_t                             adapter_count;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AdapterCount
        _m10 nt::list_entry_t                     hw_init_list;   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .HwInitList
                                                                
        SDK_MAGIC_PROPERTIES( "_RAID_DRIVER_EXTENSION.$", 0x70, true, 0xbbae6052f6eca460 );              
        SDK_FIXED_SIZE( raid_driver_extension_t, 0x70 );              
    };                                                          
};
#include "magic/raid_driver_extension_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_driver_extension_t::u0_adapter_list_t, 0x20 );
SDK_VERIFY( struct stor::port::raid_driver_extension_t, 0x70 );
