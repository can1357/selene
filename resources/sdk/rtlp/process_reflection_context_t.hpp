#pragma once
#include <sdkgen/support_library.hpp>
#include "process_reflection_reflection_information_t.hpp"

#include "magic/process_reflection_context_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_PROCESS_REFLECTION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_reflection_context_t                                                
    {                                                                                  
        using rtlp_process_reflection_reflection_information_t = struct rtlp::process_reflection_reflection_information_t;                                           
        using reflection_information_t =                         rtlp_process_reflection_reflection_information_t ;                                           
                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                             
        _m00 uint64_t                       reflection_context_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReflectionContextSize
        _m01 uint32_t                       reflection_flags;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReflectionFlags
        _m02 sdk::function<int32_t(void*)>* reflection_routine;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReflectionRoutine
        _m03 void*                          reflection_parameter;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReflectionParameter
        _m04 void*                          reflected_process_created_event;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReflectedProcessCreatedEvent
        _m05 void*                          reflected_process_handles_duplicated_event;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReflectedProcessHandlesDuplicatedEvent
        _m06 void*                          reflection_start_event;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReflectionStartEvent
        _m07 reflection_information_t       reflection_information;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReflectionInformation
                                                                                       
        SDK_MAGIC_PROPERTIES( "_RTLP_PROCESS_REFLECTION_CONTEXT.$", 0x58, true, 0x7a80997619d70b6c );                                           
        SDK_FIXED_SIZE( process_reflection_context_t, 0x58 );                                           
    };                                                                                 
};
#include "magic/process_reflection_context_t.end.hpp"
SDK_VERIFY( struct rtlp::process_reflection_context_t, 0x58 );
