#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_lock_info_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _FILE_LOCK_INFO]
    // => WDK 10 (NV)
    //
    struct file_lock_info_t                           
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 int64_t                   starting_byte;   //{ +0x0000    } | .StartingByte
        _m01 int64_t                   length;          //{ +0x0008    } | .Length
        _m02 uint8_t                   exclusive_lock;  //{ +0x0010    } | .ExclusiveLock
        _m03 uint32_t                  key;             //{ +0x0014    } | .Key
        _m04 struct nt::file_object_t* file_object;     //{ +0x0018    } | .FileObject
        _m05 void*                     process_id;      //{ +0x0020    } | .ProcessId
        _m06 int64_t                   ending_byte;     //{ +0x0028    } | .EndingByte
                                                      
        SDK_NONVOL_PROPERTIES( "_FILE_LOCK_INFO.$", 0x0, false, 0x196c460c86adc275 );               
        SDK_FIXED_SIZE( file_lock_info_t, 0x30 );               
    };                                                
};
#include "magic/file_lock_info_t.end.hpp"
SDK_VERIFY( struct nt::file_lock_info_t, 0x30 );
