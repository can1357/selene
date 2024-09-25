#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_problem_t.hpp"
#include "known_controller_type_t.hpp"
#include "interrupt_function_table_t.hpp"

#include "magic/registered_interrupt_controller_t.start.hpp"
namespace nt
{
    struct pohandle_t;

    // [struct _REGISTERED_INTERRUPT_CONTROLLER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct registered_interrupt_controller_t                                  
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                    
        _m00 nt::list_entry_t                      list_entry;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 void*                                 internal_data;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InternalData
        _m02 uint32_t                              internal_data_size;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InternalDataSize
        _m03 struct nt::interrupt_function_table_t function_table;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FunctionTable
        _m04 enum nt::known_controller_type_t      known_type;                  //{ +0x00c0    +0x00d8    +0x00f0    +0x00d8    } | .KnownType
        _m05 uint32_t                              capabilities;                //{ +0x00c4    +0x00dc    +0x00f4    +0x00dc    } | .Capabilities
        _m06 uint32_t                              flags;                       //{ +0x00c8    +0x00e0    +0x00f8    +0x00e0    } | .Flags
        _m07 uint32_t                              max_priority;                //{ +0x00cc    +0x00e4    +0x00fc    +0x00e4    } | .MaxPriority
        _m08 uint32_t                              unit_id;                     //{ +0x00d0    +0x00e8    +0x0100    +0x00e8    } | .UnitId
        _m09 nt::list_entry_t                      lines_head;                  //{ +0x00d8    +0x00f0    +0x0108    +0x00f0    } | .LinesHead
        _m10 nt::list_entry_t                      output_lines_head;           //{ +0x00e8    +0x0100    +0x0118    +0x0100    } | .OutputLinesHead
        _m11 int32_t                               min_line;                    //{ +0x00f8    +0x0110    +0x0128    +0x0110    } | .MinLine
        _m12 int32_t                               max_line;                    //{ +0x00fc    +0x0114    +0x012c    +0x0114    } | .MaxLine
        _m13 uint32_t                              max_cluster_size;            //{ +0x0100    +0x0118    +0x0130    +0x0118    } | .MaxClusterSize
        _m14 uint32_t                              max_clusters;                //{ +0x0104    +0x011c    +0x0134    +0x011c    } | .MaxClusters
        _m15 uint32_t                              interrupt_replay_data_size;  //{ +0x0108    +0x0120    +0x0138    +0x0120    } | .InterruptReplayDataSize
        _m16 enum nt::interrupt_problem_t          problem;                     //{ +0x010c    +0x0124    +0x013c    +0x0124    } | .Problem
        _m17 int32_t                               problem_status;              //{ +0x0110    +0x0128    +0x0140    +0x0128    } | .ProblemStatus
        _m18 const char*                           problem_source_file;         //{ +0x0118    +0x0130    +0x0148    +0x0130    } | .ProblemSourceFile
        _m19 uint32_t                              problem_source_line;         //{ +0x0120    +0x0138    +0x0150    +0x0138    } | .ProblemSourceLine
        _m20 uint32_t                              custom_problem;              //{ +0x0124    +0x013c    +0x0154    +0x013c    } | .CustomProblem
        _m21 int32_t                               custom_problem_status;       //{ +0x0128    +0x0140    +0x0158    +0x0140    } | .CustomProblemStatus
        _m22 nt::unicode_view                      resource_id;                 //{ +0x0130    +0x0148    +0x0160    +0x0148    } | .ResourceId
        _m23 struct nt::pohandle_t*                power_handle;                //{ +0x0140    +0x0158    +0x0170    +0x0158    } | .PowerHandle
                                                                              
        SDK_MAGIC_PROPERTIES( "_REGISTERED_INTERRUPT_CONTROLLER.$", 0x160, true, 0x57e99a5b1584bcd3 );                           
        SDK_DYNAMIC_SIZE( registered_interrupt_controller_t );                           
    };                                                                        
};
#include "magic/registered_interrupt_controller_t.end.hpp"
