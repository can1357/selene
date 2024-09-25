#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cfg_record_entry_header_t.start.hpp"
namespace pci
{
    // [struct _PCI_CFG_RECORD_ENTRY_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_record_entry_header_t
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t offset;         //{ +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint16_t size;           //{ +0x0002    +0x0002    +0x0002    } | .Size
                                    
        SDK_MAGIC_PROPERTIES( "_PCI_CFG_RECORD_ENTRY_HEADER.$", 0x4, true, 0x304e87be2928c011 );       
        SDK_FIXED_SIZE( cfg_record_entry_header_t, 0x4 );       
    };                              
};
#include "magic/cfg_record_entry_header_t.end.hpp"
SDK_VERIFY( struct pci::cfg_record_entry_header_t, 0x4 );
