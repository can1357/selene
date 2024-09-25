#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_basic_process_id_list_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_BASIC_PROCESS_ID_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_basic_process_id_list_t                       
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                         
        _m00 uint32_t                number_of_assigned_processes;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfAssignedProcesses
        _m01 uint32_t                number_of_process_ids_in_list;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfProcessIdsInList
        _m02 sdk::array<uint64_t, 1> process_id_list;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessIdList
                                                                   
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_BASIC_PROCESS_ID_LIST.$", 0x10, true, 0x20a873ad625f61c4 );                              
        SDK_FIXED_SIZE( jobobject_basic_process_id_list_t, 0x10 );                              
    };                                                             
};
#include "magic/jobobject_basic_process_id_list_t.end.hpp"
SDK_VERIFY( struct win::jobobject_basic_process_id_list_t, 0x10 );
