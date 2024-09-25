#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "../ex/push_lock_t.hpp"

namespace rtl { struct dynamic_hash_table_t; }

#include "magic/lowbox_number_mapping_t.start.hpp"
namespace sep
{
    // [struct _SEP_LOWBOX_NUMBER_MAPPING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lowbox_number_mapping_t                        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 struct ex::push_lock_t            lock;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct rtl::bitmap_t              bitmap;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Bitmap
        _m02 struct rtl::dynamic_hash_table_t* hash_table;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HashTable
        _m03 uint8_t                           active;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Active
                                                          
        SDK_MAGIC_PROPERTIES( "_SEP_LOWBOX_NUMBER_MAPPING.$", 0x28, true, 0xecd4b415b3965863 );           
        SDK_FIXED_SIZE( lowbox_number_mapping_t, 0x28 );           
    };                                                    
};
#include "magic/lowbox_number_mapping_t.end.hpp"
SDK_VERIFY( struct sep::lowbox_number_mapping_t, 0x28 );
