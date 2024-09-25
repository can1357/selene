#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triple_list_iterator_t.start.hpp"
namespace win
{
    struct triple_list_t;
    struct triple_list_entry_t;

    // [struct _TRIPLE_LIST_ITERATOR]
    // => Windows 10 v1607
    //
    struct triple_list_iterator_t                                
    {                                                            
        // Windows 10 v1607                                      
        //                                                       
        _m00 struct win::triple_list_t*       list;                //{ +0x0000    } | .List
        _m01 struct win::triple_list_entry_t* next_entry;          //{ +0x0008    } | .NextEntry
        _m02 uint8_t                          active_list;         //{ +0x0010    } | .ActiveList
        _m03 uint8_t                          probe_reads;         //{ +0x0011    } | .ProbeReads
        _m04 uint8_t                          return_data_offset;  //{ +0x0012    } | .ReturnDataOffset
        _m05 uint8_t                          wow64_list;          //{ +0x0013    } | .Wow64List
                                                                 
        SDK_MAGIC_PROPERTIES( "_TRIPLE_LIST_ITERATOR.$", 0x0, false, 0xbc6ba070e0aac0b );                   
        SDK_FIXED_SIZE( triple_list_iterator_t, 0x18 );                   
    };                                                           
};
#include "magic/triple_list_iterator_t.end.hpp"
SDK_VERIFY( struct win::triple_list_iterator_t, 0x18 );
