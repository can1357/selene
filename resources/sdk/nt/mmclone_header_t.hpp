#pragma once
#include <sdkgen/support_library.hpp>

namespace mi { struct partition_t; }

#include "magic/mmclone_header_t.start.hpp"
namespace nt
{
    struct mmclone_block_t;

    // [struct _MMCLONE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmclone_header_t                                           
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                            
        _m00 uint64_t                    number_of_ptes;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfPtes
        _m01 volatile uint64_t           number_of_process_references;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfProcessReferences
        _m02 struct nt::mmclone_block_t* clone_ptes;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClonePtes
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                            
        _m03 struct mi::partition_t*     partition;                     //{ +0x0018    +0x0018    +0x0018    } | .Partition
                                                                      
        SDK_MAGIC_PROPERTIES( "_MMCLONE_HEADER.$", 0x20, true, 0x82607b8c32a89ff8 );                             
        SDK_DYNAMIC_SIZE( mmclone_header_t );                             
    };                                                                
};
#include "magic/mmclone_header_t.end.hpp"
