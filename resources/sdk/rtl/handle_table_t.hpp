#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_table_t.start.hpp"
namespace rtl
{
    struct handle_table_entry_t;

    // [struct _RTL_HANDLE_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct handle_table_t                                                 
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                
        _m00 uint32_t                          maximum_number_of_handles;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumNumberOfHandles
        _m01 uint32_t                          size_of_handle_table_entry;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfHandleTableEntry
        _m02 struct rtl::handle_table_entry_t* free_handles;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeHandles
        _m03 struct rtl::handle_table_entry_t* committed_handles;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CommittedHandles
        _m04 struct rtl::handle_table_entry_t* un_committed_handles;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .UnCommittedHandles
        _m05 struct rtl::handle_table_entry_t* max_reserved_handles;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxReservedHandles
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                
        _m06 uint32_t                          use_heap;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UseHeap
        _m07 uint32_t                          table_size;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TableSize
                                                                          
        SDK_NONVOL_PROPERTIES( "_RTL_HANDLE_TABLE.$", 0x30, true, 0xc70bfcc125b4fdb5 );                           
        SDK_FIXED_SIZE( handle_table_t, 0x30 );                           
    };                                                                    
};
#include "magic/handle_table_t.end.hpp"
SDK_VERIFY( struct rtl::handle_table_t, 0x30 );
