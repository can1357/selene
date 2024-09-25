#pragma once
#include <sdkgen/support_library.hpp>
#include "cfg_record_entry_header_t.hpp"

#include "magic/cfg_record_entry_t.start.hpp"
namespace pci
{
    // [struct _PCI_CFG_RECORD_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_record_entry_t                             
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                
        _m00 struct pci::cfg_record_entry_header_t header;  //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 1>                data;    //{ +0x0004    +0x0004    +0x0004    } | .Data
                                                          
        SDK_MAGIC_PROPERTIES( "_PCI_CFG_RECORD_ENTRY.$", 0x6, true, 0xc492c06b6cfaa7f8 );       
        SDK_FIXED_SIZE( cfg_record_entry_t, 0x6 );        
    };                                                    
};
#include "magic/cfg_record_entry_t.end.hpp"
SDK_VERIFY( struct pci::cfg_record_entry_t, 0x6 );
