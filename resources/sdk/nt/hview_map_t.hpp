#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "hview_map_pin_log_t.hpp"

#include "magic/hview_map_t.start.hpp"
namespace nt
{
    struct file_object_t;
    struct hview_map_directory_t;

    // [struct _HVIEW_MAP]
    // => Windows 10 v1607
    //
    struct hview_map_t                                       
    {                                                        
        // Windows 10 v1607                                  
        //                                                   
        _m00 uint32_t                          mapped_length;  //{ +0x0000    } | .MappedLength
        _m01 struct ex::push_lock_t            lock;           //{ +0x0008    } | .Lock
        _m02 struct nt::file_object_t*         file_object;    //{ +0x0010    } | .FileObject
        _m03 struct nt::hview_map_directory_t* directory;      //{ +0x0018    } | .Directory
        _m04 uint32_t                          pages_charged;  //{ +0x0020    } | .PagesCharged
        _m05 struct nt::hview_map_pin_log_t    pin_log;        //{ +0x0028    } | .PinLog
                                                             
        SDK_MAGIC_PROPERTIES( "_HVIEW_MAP.$", 0x0, false, 0xa56aa9468a1114c9 );              
        SDK_FIXED_SIZE( hview_map_t, 0x4b0 );                
    };                                                       
};
#include "magic/hview_map_t.end.hpp"
SDK_VERIFY( struct nt::hview_map_t, 0x4b0 );
