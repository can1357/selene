#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_commit_release_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_COMMIT_RELEASE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_commit_release_information_t           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint32_t version;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint1_t  eligible;                             //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Eligible
        _m02 uint1_t  release_repurposed_mem_reset_commit;  //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .ReleaseRepurposedMemResetCommit
        _m03 uint1_t  force_release_mem_reset_commit;       //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .ForceReleaseMemResetCommit
        _m04 uint64_t commit_debt;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CommitDebt
        _m05 uint64_t committed_mem_reset_size;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommittedMemResetSize
        _m06 uint64_t repurposed_mem_reset_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RepurposedMemResetSize
                                                          
        SDK_MAGIC_PROPERTIES( "_PROCESS_COMMIT_RELEASE_INFORMATION.$", 0x20, true, 0xa4666cccb0818755 );                                    
        SDK_FIXED_SIZE( process_commit_release_information_t, 0x20 );                                    
    };                                                    
};
#include "magic/process_commit_release_information_t.end.hpp"
SDK_VERIFY( struct win::process_commit_release_information_t, 0x20 );
