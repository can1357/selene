#pragma once
#include <sdkgen/support_library.hpp>
#include "bpio_inflags_t.hpp"
#include "bpio_operations_t.hpp"

#include "magic/bpio_input_t.start.hpp"
namespace fs
{
    // [struct _FS_BPIO_INPUT]
    // => Windows 11
    //
    struct bpio_input_t                           
    {                                             
        // Windows 11                             
        //                                        
        _m00 enum fs::bpio_operations_t operation;  //{ +0x0000    } | .Operation
        _m01 enum fs::bpio_inflags_t    in_flags;   //{ +0x0004    } | .InFlags
                                                  
        SDK_MAGIC_PROPERTIES( "_FS_BPIO_INPUT.$", 0x0, false, 0x44a47e54352f6e85 );          
        SDK_FIXED_SIZE( bpio_input_t, 0x18 );          
    };                                            
};
#include "magic/bpio_input_t.end.hpp"
SDK_VERIFY( struct fs::bpio_input_t, 0x18 );
