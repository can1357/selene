#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/pool_type_t.hpp"

#include "magic/stor_dictionary_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_DICTIONARY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_dictionary_t                                              
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 uint32_t                                 entry_count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntryCount
        _m01 uint32_t                                 max_entry_count;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxEntryCount
        _m02 enum nt::pool_type_t                     pool_type;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoolType
        _m03 nt::list_entry_t*                        entries;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Entries
        _m04 sdk::function<void*(nt::list_entry_t*)>* get_key_routine;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetKeyRoutine
        _m05 sdk::function<int32_t(void*, void*)>*    compare_key_routine;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CompareKeyRoutine
        _m06 sdk::function<uint32_t(void*)>*          hash_key_routine;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HashKeyRoutine
                                                                          
        SDK_MAGIC_PROPERTIES( "_STOR_DICTIONARY.$", 0x30, true, 0xb33a9acb93bd2d78 );                    
        SDK_FIXED_SIZE( stor_dictionary_t, 0x30 );                        
    };                                                                    
};
#include "magic/stor_dictionary_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_dictionary_t, 0x30 );
