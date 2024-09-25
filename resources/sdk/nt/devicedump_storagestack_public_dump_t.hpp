#pragma once
#include <sdkgen/support_library.hpp>
#include "devicedump_structure_version_t.hpp"
#include "devicedump_storagestack_public_state_record_t.hpp"

#include "magic/devicedump_storagestack_public_dump_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP]
    // => WDK 10 (NV)
    //
    struct devicedump_storagestack_public_dump_t                                
    {                                                                           
        using record_array_t = sdk::array<struct nt::devicedump_storagestack_public_state_record_t, 1>;                         
                                                                                
        // WDK 10                                                               
        //                                                                      
        _m00 struct nt::devicedump_structure_version_t descriptor;                //{ +0x0000    } | .Descriptor
        _m01 uint32_t                                  dw_reason_for_collection;  //{ +0x000c    } | .dwReasonForCollection
        _m02 sdk::array<uint8_t, 16>                   c_driver_name;             //{ +0x0010    } | .cDriverName
        _m03 uint32_t                                  ui_num_records;            //{ +0x0020    } | .uiNumRecords
        _m04 record_array_t                            record_array;              //{ +0x0024    } | .RecordArray
                                                                                
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP.$", 0x0, false, 0x7b4c1bb38d5c802c );                         
        SDK_FIXED_SIZE( devicedump_storagestack_public_dump_t, 0x60 );                         
    };                                                                          
};
#include "magic/devicedump_storagestack_public_dump_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_storagestack_public_dump_t, 0x60 );
