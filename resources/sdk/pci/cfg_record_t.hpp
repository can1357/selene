#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cfg_record_t.start.hpp"
namespace pci
{
    struct cfg_record_t;
    struct cfg_record_entry_t;

    // [struct _PCI_CFG_RECORD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_record_t                                     
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 uint32_t                        signature;       //{ +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                        total_size;      //{ +0x0004    +0x0004    +0x0004    } | .TotalSize
        _m02 uint32_t                        entry_count;     //{ +0x0008    +0x0008    +0x0008    } | .EntryCount
        _m03 uint32_t                        rid;             //{ +0x000c    +0x000c    +0x000c    } | .Rid
        _m04 void*                           device;          //{ +0x0010    +0x0010    +0x0010    } | .Device
        _m05 uint8_t                         record_in_dump;  //{ +0x0018    +0x0018    +0x0018    } | .RecordInDump
        _m06 struct pci::cfg_record_entry_t* first_entry;     //{ +0x0020    +0x0020    +0x0020    } | .FirstEntry
        _m07 struct pci::cfg_record_t*       prev_record;     //{ +0x0028    +0x0028    +0x0028    } | .PrevRecord
        _m08 struct pci::cfg_record_t*       next_record;     //{ +0x0030    +0x0030    +0x0030    } | .NextRecord
                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_CFG_RECORD.$", 0x38, true, 0xa914d78dd8721390 );               
        SDK_FIXED_SIZE( cfg_record_t, 0x38 );               
    };                                                      
};
#include "magic/cfg_record_t.end.hpp"
SDK_VERIFY( struct pci::cfg_record_t, 0x38 );
