#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_t.hpp"
#include "failure_type_t.hpp"
#include "../nt/fake_heap_entry_t.hpp"
#include "../nt/exception_record_t.hpp"

#include "magic/failure_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_FAILURE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct failure_information_t                                               
    {                                                                          
        using expected_decoded_entry_t = sdk::variant<struct heap::entry_t, struct nt::fake_heap_entry_t>;                       
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                     
        _m00 uint32_t                                   version;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                   structure_size;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StructureSize
        _m02 enum heap::failure_type_t                  failure_type;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FailureType
        _m03 void*                                      heap_address;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapAddress
        _m04 void*                                      address;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Address
        _m05 void*                                      param1;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Param1
        _m06 void*                                      param2;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Param2
        _m07 void*                                      param3;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Param3
        _m08 sdk::variant<struct heap::entry_t*, void*> previous_block;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PreviousBlock
        _m09 sdk::variant<struct heap::entry_t*, void*> next_block;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NextBlock
        _m10 expected_decoded_entry_t                   expected_decoded_entry;  //{ +0x0058    +0x0048    +0x0048    +0x0048    } | .ExpectedDecodedEntry
        _m11 sdk::array<void*, 32>                      stack_trace;             //{ +0x0068    +0x0058    +0x0058    +0x0058    } | .StackTrace
        _m12 uint8_t                                    heap_major_version;      //{ +0x0168    +0x0158    +0x0158    +0x0158    } | .HeapMajorVersion
        _m13 uint8_t                                    heap_minor_version;      //{ +0x0169    +0x0159    +0x0159    +0x0159    } | .HeapMinorVersion
        _m14 struct nt::exception_record_t              exception_record;        //{ +0x0170    +0x0160    +0x0160    +0x0160    } | .ExceptionRecord
        _m15 nt::context                                context_record;          //{ +0x0210    +0x0200    +0x0200    +0x0200    } | .ContextRecord
                                                                               
        // Windows 10 v1607                                                    
        //                                                                     
        _m16 struct heap::entry_t                       expected_encoded_entry;  //{ +0x0048    } | .ExpectedEncodedEntry
                                                                               
        SDK_MAGIC_PROPERTIES( "_HEAP_FAILURE_INFORMATION.$", 0x6d0, true, 0xebe73bc3d097c4bc );                       
        SDK_DYNAMIC_SIZE( failure_information_t );                             
    };                                                                         
};
#include "magic/failure_information_t.end.hpp"
