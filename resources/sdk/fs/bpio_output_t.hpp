#pragma once
#include <sdkgen/support_library.hpp>
#include "bpio_info_t.hpp"
#include "bpio_results_t.hpp"
#include "bpio_outflags_t.hpp"
#include "bpio_operations_t.hpp"

#include "magic/bpio_output_t.start.hpp"
namespace fs
{
    // [struct _FS_BPIO_OUTPUT]
    // => Windows 11
    //
    struct bpio_output_t                                    
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 enum fs::bpio_operations_t operation;            //{ +0x0000    } | .Operation
        _m01 enum fs::bpio_outflags_t   out_flags;            //{ +0x0004    } | .OutFlags
        _m02 struct fs::bpio_results_t  enable;               //{ +0x0018    } | .Enable
        _m03 struct fs::bpio_results_t  query;                //{ +0x0018    } | .Query
        _m04 struct fs::bpio_results_t  volume_stack_resume;  //{ +0x0018    } | .VolumeStackResume
        _m05 struct fs::bpio_results_t  stream_resume;        //{ +0x0018    } | .StreamResume
        _m06 struct fs::bpio_info_t     get_info;             //{ +0x0018    } | .GetInfo
                                                            
        SDK_MAGIC_PROPERTIES( "_FS_BPIO_OUTPUT.$", 0x0, false, 0xdf7dce8a17de0c10 );                    
        SDK_FIXED_SIZE( bpio_output_t, 0x160 );                    
    };                                                      
};
#include "magic/bpio_output_t.end.hpp"
SDK_VERIFY( struct fs::bpio_output_t, 0x160 );
