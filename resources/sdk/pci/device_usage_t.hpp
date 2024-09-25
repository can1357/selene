#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_usage_t.start.hpp"
namespace pci
{
    // [struct _PCI_DEVICE_USAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_usage_t           
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int32_t paging;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Paging
        _m01 int32_t hibernate;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Hibernate
        _m02 int32_t crash_dump;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CrashDump
                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m03 int32_t guest_assigned;  //{ +0x000c    +0x000c    +0x000c    } | .GuestAssigned
                                    
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_USAGE.$", 0x10, true, 0x770d78622c0cdbcf );               
        SDK_DYNAMIC_SIZE( device_usage_t );               
    };                              
};
#include "magic/device_usage_t.end.hpp"
