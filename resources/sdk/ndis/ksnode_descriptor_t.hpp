#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ksnode_descriptor_t.start.hpp"
namespace ndis
{
    struct ksautomation_table_t;

    // [struct _KSNODE_DESCRIPTOR]
    // => Windows 10 v1607
    //
    struct ksnode_descriptor_t                                         
    {                                                                  
        // Windows 10 v1607                                            
        //                                                             
        _m00 const struct ndis::ksautomation_table_t* automation_table;  //{ +0x0000    } | .AutomationTable
        _m01 const struct nt::guid_t*                 type;              //{ +0x0008    } | .Type
        _m02 const struct nt::guid_t*                 name;              //{ +0x0010    } | .Name
                                                                       
        SDK_MAGIC_PROPERTIES( "_KSNODE_DESCRIPTOR.$", 0x0, false, 0xcc51e29b99b63b25 );                 
        SDK_FIXED_SIZE( ksnode_descriptor_t, 0x18 );                   
    };                                                                 
};
#include "magic/ksnode_descriptor_t.end.hpp"
SDK_VERIFY( struct ndis::ksnode_descriptor_t, 0x18 );
