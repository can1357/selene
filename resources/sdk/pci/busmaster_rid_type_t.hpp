#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_BUSMASTER_RID_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class busmaster_rid_type_t : int32_t
    {                                        
        from_device_rid =         0x0,         // Windows 10 v2004, Windows 10 v20H2
        invalid =                 0x0,         // Windows 11
        from_bridge_rid =         0x1,         // Windows 10 v2004, Windows 10 v20H2
        //from_device_rid =       0x1,         // Windows 11
        //from_bridge_rid =       0x2,         // Windows 11
        from_multiple_bridges =   0x2,         // Windows 10 v2004, Windows 10 v20H2
        //from_multiple_bridges = 0x3,         // Windows 11
    };                                       
};
