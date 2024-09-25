#pragma once
#include <sdkgen/support_library.hpp>
#include "cfg_access_log_entry_flag_t.hpp"

#include "magic/cfg_access_log_entry_t.start.hpp"
namespace pci
{
    // [struct _PCI_CFG_ACCESS_LOG_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_access_log_entry_t                              
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                     
        _m00 union pci::cfg_access_log_entry_flag_t flag;        //{ +0x0000    +0x0000    +0x0000    } | .Flag
        _m01 uint16_t                               processor;   //{ +0x0004    +0x0004    +0x0004    } | .Processor
        _m02 uint16_t                               process;     //{ +0x0006    +0x0006    +0x0006    } | .Process
        _m03 uint16_t                               thread;      //{ +0x0008    +0x0008    +0x0008    } | .Thread
        _m04 uint16_t                               offset;      //{ +0x000a    +0x000a    +0x000a    } | .Offset
        _m05 uint16_t                               length;      //{ +0x000c    +0x000c    +0x000c    } | .Length
        _m06 uint32_t                               data;        //{ +0x0010    +0x0010    +0x0010    } | .Data
        _m07 uint32_t                               count;       //{ +0x0014    +0x0014    +0x0014    } | .Count
        _m08 uint64_t                               timestamp1;  //{ +0x0018    +0x0018    +0x0018    } | .Timestamp1
        _m09 uint64_t                               timestamp2;  //{ +0x0020    +0x0020    +0x0020    } | .Timestamp2
        _m10 void*                                  source;      //{ +0x0028    +0x0028    +0x0028    } | .Source
                                                               
        SDK_MAGIC_PROPERTIES( "_PCI_CFG_ACCESS_LOG_ENTRY.$", 0x30, true, 0x1435f4dba4c352bd );           
        SDK_FIXED_SIZE( cfg_access_log_entry_t, 0x30 );           
    };                                                         
};
#include "magic/cfg_access_log_entry_t.end.hpp"
SDK_VERIFY( struct pci::cfg_access_log_entry_t, 0x30 );
