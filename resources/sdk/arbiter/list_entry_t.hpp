#pragma once
#include <sdkgen/support_library.hpp>
#include "result_t.hpp"
#include "request_source_t.hpp"
#include "../nt/interface_type_t.hpp"

namespace cm { struct partial_resource_descriptor_t; }
namespace io { struct resource_descriptor_t;         }
namespace nt { struct device_object_t;               }

#include "magic/list_entry_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_LIST_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct list_entry_t                                                       
    {                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                    
        _m00 nt::list_entry_t                          list_entry;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                                  alternative_count;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AlternativeCount
        _m02 struct io::resource_descriptor_t*         alternatives;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Alternatives
        _m03 struct nt::device_object_t*               physical_device_object;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PhysicalDeviceObject
        _m04 enum arbiter::request_source_t            request_source;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .RequestSource
        _m05 uint32_t                                  flags;                   //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m06 int64_t                                   work_space;              //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .WorkSpace
        _m07 enum nt::interface_type_t                 interface_type;          //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .InterfaceType
        _m08 uint32_t                                  slot_number;             //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .SlotNumber
        _m09 uint32_t                                  bus_number;              //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .BusNumber
        _m10 struct cm::partial_resource_descriptor_t* assignment;              //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Assignment
        _m11 struct io::resource_descriptor_t*         selected_alternative;    //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .SelectedAlternative
        _m12 enum arbiter::result_t                    result;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Result
                                                                              
        SDK_NONVOL_PROPERTIES( "_ARBITER_LIST_ENTRY.$", 0x60, true, 0xc8dd0683165ab7ff );                       
        SDK_FIXED_SIZE( list_entry_t, 0x60 );                                 
    };                                                                        
};
#include "magic/list_entry_t.end.hpp"
SDK_VERIFY( struct arbiter::list_entry_t, 0x60 );
