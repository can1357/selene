#pragma once
#include <sdkgen/support_library.hpp>
#include "information_t.hpp"
#include "../win/process_heap_information_t.hpp"

#include "magic/extended_information_t.start.hpp"
namespace heap
{
    struct information_item_t;

    // [struct _HEAP_EXTENDED_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_information_t                                                 
    {                                                                             
        using pheap_query_information_callback_routine_t = sdk::function<int32_t(struct heap::information_item_t*, void*)>*;                         
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                        
        _m00 void*                                       process;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Process
        _m01 uint64_t                                    heap;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Heap
        _m02 uint32_t                                    level;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Level
        _m03 pheap_query_information_callback_routine_t  callback_routine;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CallbackRoutine
        _m04 void*                                       callback_context;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CallbackContext
        _m05 struct win::process_heap_information_t      process_heap_information;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessHeapInformation
        _m06 struct heap::information_t                  heap_information;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HeapInformation
                                                                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_EXTENDED_INFORMATION.$", 0x58, true, 0xf8d42d5675c6ee09 );                         
        SDK_FIXED_SIZE( extended_information_t, 0x58 );                           
    };                                                                            
};
#include "magic/extended_information_t.end.hpp"
SDK_VERIFY( struct heap::extended_information_t, 0x58 );
