#pragma once
#include <sdkgen/support_library.hpp>
#include "resource_list_t.hpp"
#include "../nt/interface_type_t.hpp"

#include "magic/resource_requirements_list_t.start.hpp"
namespace io
{
    // [struct _IO_RESOURCE_REQUIREMENTS_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_requirements_list_t                                  
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                               
        _m00 uint32_t                                  list_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ListSize
        _m01 enum nt::interface_type_t                 interface_type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .InterfaceType
        _m02 uint32_t                                  bus_number;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BusNumber
        _m03 uint32_t                                  slot_number;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SlotNumber
        _m04 uint32_t                                  alternative_lists;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .AlternativeLists
        _m05 sdk::array<struct io::resource_list_t, 1> list;               //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .List
                                                                         
        SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_REQUIREMENTS_LIST.$", 0x48, true, 0xebf1782146a92663 );                  
        SDK_FIXED_SIZE( resource_requirements_list_t, 0x48 );                  
    };                                                                   
};
#include "magic/resource_requirements_list_t.end.hpp"
SDK_VERIFY( struct io::resource_requirements_list_t, 0x48 );
