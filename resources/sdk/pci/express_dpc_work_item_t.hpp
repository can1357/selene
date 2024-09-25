#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_work_item_t.start.hpp"
namespace pci
{
    struct device_t;
    struct express_bridge_t;

    // [struct _EXPRESS_DPC_WORK_ITEM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct express_dpc_work_item_t                        
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                
        _m00 nt::list_entry_t              list_entry;      //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                      in_use;          //{ +0x0010    +0x0010    +0x0010    } | .InUse
        _m02 struct pci::express_bridge_t* express_bridge;  //{ +0x0018    +0x0018    +0x0018    } | .ExpressBridge
        _m03 struct pci::device_t*         device;          //{ +0x0020    +0x0020    +0x0020    } | .Device
                                                          
        SDK_MAGIC_PROPERTIES( "_EXPRESS_DPC_WORK_ITEM.$", 0x28, true, 0xf4898a7075c8555a );               
        SDK_FIXED_SIZE( express_dpc_work_item_t, 0x28 );               
    };                                                    
};
#include "magic/express_dpc_work_item_t.end.hpp"
SDK_VERIFY( struct pci::express_dpc_work_item_t, 0x28 );
