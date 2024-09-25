#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cfg_access_log_t.start.hpp"
namespace pci
{
    struct cfg_access_log_entry_t;

    // [struct _PCI_CFG_ACCESS_LOG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_access_log_t                                    
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 uint32_t                            length;         //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint64_t                            lock;           //{ +0x0008    +0x0008    +0x0008    } | .Lock
        _m02 nt::list_entry_t                    list_entry;     //{ +0x0010    +0x0010    +0x0010    } | .ListEntry
        _m03 uint32_t                            rid;            //{ +0x0020    +0x0020    +0x0020    } | .Rid
        _m04 uint32_t                            current_index;  //{ +0x0024    +0x0024    +0x0024    } | .CurrentIndex
        _m05 struct pci::cfg_access_log_entry_t* entry;          //{ +0x0028    +0x0028    +0x0028    } | .Entry
                                                               
        SDK_MAGIC_PROPERTIES( "_PCI_CFG_ACCESS_LOG.$", 0x30, true, 0x632dffe2d48ecc51 );              
        SDK_FIXED_SIZE( cfg_access_log_t, 0x30 );              
    };                                                         
};
#include "magic/cfg_access_log_t.end.hpp"
SDK_VERIFY( struct pci::cfg_access_log_t, 0x30 );
